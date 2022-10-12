// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MyGamePlayerState.generated.h"


/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class GAMEDEMO_API AMyGamePlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	int m_Score = 0;
	//UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	//FString m_CharacterCodeName = 0;
};
