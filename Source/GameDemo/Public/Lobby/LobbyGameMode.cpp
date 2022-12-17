// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"
#include "Engine/DataTable.h"
#include "Common/CommonGameState.h"
#include "LobbyPlayerController.h"
#include "PaperCharacter.h"
#include "GameFramework/Character.h"
#include "Protocol/GameProto.h"
#include "Table/CharacterBaseInfo.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer) {
	Super::PostLogin(NewPlayer);

	auto controller = Cast<ALobbyPlayerController>(NewPlayer);
	if (controller->IsOwnByServer())
	{
		controller->SetHost();
	}
	FClientPostLogin Req;
	for (const auto& Player : AllControllers)
	{
		auto Lobby_Player = Cast<ALobbyPlayerController>(Player);
		Req.UpdateMembers.RoomMembers.Push(Lobby_Player->GetPlayerInfo());
	}
	
	for (const auto& Player : AllControllers)
	{
		auto Lobby_Player = Cast<ALobbyPlayerController>(Player);
		UE_LOG(LogTemp, Warning, TEXT("ServerRspClientUpdateMembers %d"), Req.UpdateMembers.RoomMembers.Num());
		Lobby_Player->ClientPostLogin(Req);
	}
}

void ALobbyGameMode::NotifyUpdateMembers()
{
	FClientUpdateMembers Req;
	for (const auto& Player : AllControllers)
	{
		auto const Lobby_Player = Cast<ALobbyPlayerController>(Player);
		Req.RoomMembers.Push(Lobby_Player->GetPlayerInfo());
	}
	
	for (const auto& Player : AllControllers)
	{
		auto const Lobby_Player = Cast<ALobbyPlayerController>(Player);
		Lobby_Player->ClientUpdateMembers(Req);
	}
}

void ALobbyGameMode::SetGameInfo(const FString& GameMapName, int GameTime)
{
	if (auto const GS = GetGameState<ACommonGameState>())
	{
		GS->GameInfo.GameMapName = GameMapName;
		GS->GameInfo.GameTime = GameTime;

		if (GetNetMode() == NM_ListenServer)
		{
			GS->OnRep_GameInfo();
		}
	}
}

void ALobbyGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
	AllControllers.Remove(Cast<APlayerController>(Exiting));
	auto iter = AllControllers.begin();
	if (iter != AllControllers.end())
	{
		auto controller = Cast<ALobbyPlayerController>(AllControllers[0]);
		controller->SetHost();
	}
	
	NotifyUpdateMembers();
}

void ALobbyGameMode::RespawnPlayer(ALobbyPlayerController* player_controller)
{
	FTransform TF = player_controller->GetCharacter()->GetTransform();
	player_controller->GetCharacter()->Destroy();
	const FString& name = player_controller->GetPlayerInfo().CharacterName;
	FString ContextString;
	auto character = character_table->FindRow<FCharacterBaseInfo>(FName(name), ContextString);
	
	ACharacter* actor = Cast<ACharacter>(GetWorld()->SpawnActor(character->Character, &TF));
	player_controller->Possess(actor);
	//TODO DataTable
}