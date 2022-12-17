// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "CommonGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ACommonGameMode : public AGameMode
{
	GENERATED_BODY()
private:
	inline static int CustomUniqueIDGenerator{};

	
public:
	UPROPERTY(Replicated, BlueprintReadOnly)
	TArray<APlayerController*> AllControllers;

	void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;

	UFUNCTION(BlueprintCallable)
	TArray<APlayerController*> GetAllControllers();
	void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC) override;

	UFUNCTION(BlueprintCallable)
	bool IsGameOwner(AController* player_controller);
};
