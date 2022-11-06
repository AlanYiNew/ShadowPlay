// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPlayerController.h"
#include "LobbyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ALobbyPlayerController : public AMyPlayerController
{
	GENERATED_BODY()
	UFUNCTION(Server, BlueprintCallable, Reliable)
	void UpdateRoomInfo(const FString& MapName, int MapTime);
};
