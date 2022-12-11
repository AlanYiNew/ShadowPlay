// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyPlayerController.h"

#include "Common/CommonGameState.h"
#include "LobbyGameMode.h"

void ALobbyPlayerController::UpdateServerSettings_Implementation(const FString& GameMapName, int GameTime)
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