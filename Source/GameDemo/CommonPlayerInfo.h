// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "CommonPlayerInfo.generated.h"

enum PLAYER_STATUS
{
    PLAYER_STATUS_UNREADY,
    PLAYER_STATUS_READY
};

USTRUCT(BlueprintType)
struct FCommonPlayerInfo
{
    GENERATED_USTRUCT_BODY()

    FString PlayeName;
    PLAYER_STATUS PlayerStatus;
    int PlayerIndex;
    int PlayerID;
    FString CharacterName;
    
public:
};