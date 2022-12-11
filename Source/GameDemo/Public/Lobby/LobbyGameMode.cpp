// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

#include "Common/CommonGameState.h"
#include "LobbyPlayerController.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer) {
	Super::PostLogin(NewPlayer);
	
	
}

void ALobbyGameMode::SetGameInfo(const FString& GameMapName, int GameTime)
{
	auto gs = GetGameState<ACommonGameState>();
	if (gs)
	{
		gs->GameInfo.GameMapName = GameMapName;
		gs->GameInfo.GameTime = GameTime;

		if (GetNetMode() == NM_ListenServer)
		{
			gs->OnRep_GameInfo();
		}
	}
}