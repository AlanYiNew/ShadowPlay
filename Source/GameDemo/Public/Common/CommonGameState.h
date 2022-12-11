// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonGameInfo.h"
#include "GameFramework/GameState.h"
#include "CommonGameState.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ACommonGameState : public AGameState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, ReplicatedUsing=OnRep_GameInfo, BlueprintReadOnly)
	FCommonGameInfo GameInfo;
	UFUNCTION(BlueprintImplementableEvent)
	void OnRep_GameInfo();
	
};
