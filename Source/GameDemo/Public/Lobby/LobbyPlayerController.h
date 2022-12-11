// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Common/CommonPlayerController.h"
#include "MyPlayerController.h"
#include "LobbyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ALobbyPlayerController : public AMyPlayerController
{
	GENERATED_BODY()

	UFUNCTION(Server,Reliable, BlueprintCallable)
	void UpdateServerSettings(const FString& GameMapName, int GameTime);

	UFUNCTION(Server,Reliable, BlueprintCallable)
	void LaunchGame();

	UFUNCTION(Client,Reliable)
	void LoadingBeforeLaunchGame();
public:
	UFUNCTION(BlueprintImplementableEvent)
	void LoadingBeforeLaunchGameEvent();
};
