// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonGameMode.h"
#include "CommonRoomInfo.h"
#include "LobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ALobbyGameMode : public ACommonGameMode
{
	GENERATED_BODY()
private:
	FCommonRoomInfo RoomInfo;
	
public:
	ALobbyGameMode();
	void PostLogin(APlayerController* NewPlayer) override;
	void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;


	void UpdateRoomInfo(const FString& MapName, int MapTime);
};
