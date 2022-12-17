// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "CommonPlayerInfo.generated.h"

UENUM(BlueprintType)
enum EPLAYER_STATUS
{
    EPLAYER_STATUS_UNREADY,
    EPLAYER_STATUS_READY,
    EPLAYER_STATUS_HOST,
};

USTRUCT(BlueprintType)
struct FCommonPlayerInfo
{
    GENERATED_USTRUCT_BODY()
    UPROPERTY(BlueprintReadWrite)
    FString PlayeName;
    UPROPERTY(BlueprintReadWrite)
    TEnumAsByte<EPLAYER_STATUS> PlayerStatus{EPLAYER_STATUS_UNREADY};
    UPROPERTY(BlueprintReadWrite)
    int PlayerIndex{};
    UPROPERTY(BlueprintReadWrite)
    FString CharacterName{"DefaultCharacter"};
    UPROPERTY(BlueprintReadWrite)
    int PlayerID{};
    
public:
};