// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"
#include "CommonGameState.h"
#include "Kismet/GameplayStatics.h"

ALobbyGameMode::ALobbyGameMode()
{
	bUseSeamlessTravel = true;
}

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer) {
	Super::PostLogin(NewPlayer);

	ACommonGameState* gameState = GetGameState<ACommonGameState>();
	if (!gameState)
	{
		UE_LOG(LogTemp, Warning, TEXT("game state nullptr"));
		return;
	}
	RoomInfo.CurrPlayerNum = GetAllControllers().Num();
	gameState->SetRoomInfo(RoomInfo);
}

void ALobbyGameMode::UpdateRoomInfo(const FString& MapName, int MapTime)
{
	ACommonGameState* gameState = GetGameState<ACommonGameState>();
	if (!gameState)
	{
		UE_LOG(LogTemp, Warning, TEXT("game state nullptr"));
		return;
	}
	RoomInfo.MapName = MapName;
	RoomInfo.MapTime = MapTime;
	gameState->SetRoomInfo(RoomInfo);
}

void ALobbyGameMode::PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
	FString server_name = UGameplayStatics::ParseOption(Options, TEXT("servername"));
	FString max_player = UGameplayStatics::ParseOption(Options, TEXT("maxplayer "));
	
	ACommonGameState* gameState = GetGameState<ACommonGameState>();
	if (!gameState)
	{
		UE_LOG(LogTemp, Warning, TEXT("game state nullptr"));
		return;
	}

	if (GetAllControllers().Num() >= RoomInfo.MaxPlayerNum)
	{
		return;
	}
}