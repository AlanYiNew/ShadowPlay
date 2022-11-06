// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonRoomInfo.h"
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
	UPROPERTY(Transient, Replicated, BlueprintReadOnly, ReplicatedUsing=OnRep_UpdateRoomInfo)
	FCommonRoomInfo RoomInfo;

	void SetRoomInfo(const FCommonRoomInfo& roomInfo);
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnRep_UpdateRoomInfo();
};
