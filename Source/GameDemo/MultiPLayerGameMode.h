// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MultiPLayerGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API AMultiPLayerGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	AMultiPLayerGameMode();
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void InitGameState() override;
};
