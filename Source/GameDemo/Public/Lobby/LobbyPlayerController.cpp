// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyPlayerController.h"

#include "Common/CommonGameState.h"
#include "LobbyGameMode.h"
#include "Common/CommonPlayerInfo.h"
#include "Protocol/GameProto.h"

void ALobbyPlayerController::ServerUpdateSettings_Implementation(const FString& GameMapName, int GameTime)
{
	if (!bOwnByServer)
	{
		return;
	}
	auto gm = GetWorld()->GetAuthGameMode<ALobbyGameMode>();
	if (gm)
	{
		gm->SetGameInfo(GameMapName, GameTime);
	}
}

void ALobbyPlayerController::LaunchGame_Implementation()
{
	if (!bOwnByServer)
	{
		return;
	}
	
	auto gm = GetWorld()->GetAuthGameMode<ALobbyGameMode>();
	if (gm)
	{
		auto AllControoler = gm->GetAllControllers();
		for (auto controllr:AllControoler)
		{
			auto LobbyControoler = Cast<ALobbyPlayerController>(controllr);
			if (LobbyControoler)
			{
				LobbyControoler->LoadingBeforeLaunchGame();
			}
		}
	}

	auto gs = gm->GetGameState<ACommonGameState>();
	if (gs)
	{
		GetWorld()->ServerTravel("/Game/Maps/" + gs->GameInfo.GameMapName, true);
	}
}

void ALobbyPlayerController::LoadingBeforeLaunchGame_Implementation()
{
	LoadingBeforeLaunchGameEvent();
}

void ALobbyPlayerController::SetHost()
{
	PlayerInfo.PlayerStatus = EPLAYER_STATUS_HOST;
}

void ALobbyPlayerController::ClientPostLogin_Implementation(const FClientPostLogin& req)
{
	ClientSetupLobbyMenu();
	ClientUpdateMembers(req.UpdateMembers);
	UE_LOG(LogTemp, Warning, TEXT("ClientRecvUpdateMembers %d"), req.UpdateMembers.RoomMembers.Num());
}

void ALobbyPlayerController::ClientUpdateMembers_Implementation(const FClientUpdateMembers& req)
{
	UE_LOG(LogTemp, Warning, TEXT("ClientUpdateMembers %d"), req.RoomMembers.Num());
	RoomMembers = req.RoomMembers;

	ClientUIUpdateMembers();
}

void ALobbyPlayerController::ServerUpdateMembers_Implementation(EPLAYER_STATUS status)
{
	PlayerInfo.PlayerStatus = status;
	auto gm = GetWorld()->GetAuthGameMode<ALobbyGameMode>();
	gm->NotifyUpdateMembers();
}

void ALobbyPlayerController::ClientSuccessfullySelectCharacter_Implementation(const FRspSelectCharacter& rsp)
{
	PlayerInfo.CharacterName = rsp.CharacterName;
	
}

void ALobbyPlayerController::ServerSelectCharacter_Implementation(const FString& CharacterName)
{
	PlayerInfo.CharacterName = CharacterName;
	auto gm = GetWorld()->GetAuthGameMode<ALobbyGameMode>();
	gm->RespawnPlayer(this);
	FRspSelectCharacter rsp;
	rsp.CharacterName = PlayerInfo.CharacterName;
	ClientSuccessfullySelectCharacter(rsp);
	gm->NotifyUpdateMembers();
}