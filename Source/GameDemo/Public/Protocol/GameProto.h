// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Common/CommonPlayerInfo.h"
#include "GameProto.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct GAMEDEMO_API FClientUpdateMembers
{
	GENERATED_BODY();
	UPROPERTY()
	TArray<FCommonPlayerInfo> RoomMembers;
};

USTRUCT(BlueprintType)
struct GAMEDEMO_API FClientPostLogin
{
	GENERATED_BODY();
	UPROPERTY()
	FClientUpdateMembers UpdateMembers;
};

USTRUCT(BlueprintType)
struct GAMEDEMO_API FRspSelectCharacter
{
	GENERATED_BODY();
	UPROPERTY()
	int ErrorCode{};
	UPROPERTY()
	FString CharacterName;
};



