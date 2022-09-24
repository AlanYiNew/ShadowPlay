// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "MyFloatingPawnMovement.generated.h"

//class FActorComponentTickFunction;
//enum ELevelTick;
/**
 * 
 */
UCLASS()
class GAMEDEMO_API UMyFloatingPawnMovement : public UFloatingPawnMovement
{
	GENERATED_BODY()
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};

