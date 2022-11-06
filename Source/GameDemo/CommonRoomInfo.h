// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "CommonRoomInfo.generated.h"



USTRUCT(BlueprintType)
struct FCommonRoomInfo
{
    GENERATED_USTRUCT_BODY()
public:
    UPROPERTY(Transient, BlueprintReadOnly)
    FString ServerName;
    UPROPERTY(Transient, BlueprintReadOnly)
    int MaxPlayerNum{2};
    UPROPERTY(Transient, BlueprintReadOnly)
    int CurrPlayerNum;
    UPROPERTY(Transient, BlueprintReadOnly, EditDefaultsOnly)
    FString MapName{"Arena01"};
    UPROPERTY(Transient, BlueprintReadOnly, EditDefaultsOnly)
    int MapTime{10}; //Minute
};