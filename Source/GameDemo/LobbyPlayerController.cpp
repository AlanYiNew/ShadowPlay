// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyPlayerController.h"
#include "CommonGameState.h"
#include "LobbyGameMode.h"
#include "Kismet/GameplayStatics.h"


void ALobbyPlayerController::UpdateRoomInfo_Implementation(const FString& MapName, int MapTime)
{
	ALobbyGameMode* CurrGameMode = Cast<ALobbyGameMode>(UGameplayStatics::GetGameMode(this));
	if (!CurrGameMode)
	{
		UE_LOG(LogTemp, Warning, TEXT("gameMode nullptr"));
		return;
	}
	
	if (!bIsGameOwner)
	{
		UE_LOG(LogTemp, Warning, TEXT("Not GameOwner"));
		return;
	}

	CurrGameMode->UpdateRoomInfo(MapName, MapTime);
}
