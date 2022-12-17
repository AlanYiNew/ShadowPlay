// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/UnrealString.h"
#include "GameFramework/PlayerState.h"
#include "CommonPlayerState.generated.h"



/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class GAMEDEMO_API ACommonPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	int m_score = 0;
	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	FString m_selected_character = "DefaultCharacter";

	void CopyProperties(APlayerState* PlayerState) override;
	
};


