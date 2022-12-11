// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Common/CommonGameMode.h"
#include "LobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ALobbyGameMode : public ACommonGameMode
{
	GENERATED_BODY()
	void PostLogin(APlayerController* NewPlayer) override;
public:
	void SetGameInfo(const FString& GameMapName, int GameTime);
};
