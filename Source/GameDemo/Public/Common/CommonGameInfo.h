// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonGameInfo.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FCommonGameInfo
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(BlueprintReadOnly)
	FString GameMapName{"Arena01"};
	UPROPERTY(BlueprintReadOnly)
	int GameTime{10};
	UPROPERTY(BlueprintReadOnly)
	int MaxNumPlayer{2};
};
