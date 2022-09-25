// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyPlayerController.h"
#include <GameFramework/PlayerStart.h>
#include "MultiPLayerGameMode.generated.h"


USTRUCT(BlueprintType)
struct FPlayerStartInfo 
{
	GENERATED_BODY()
	APlayerStart* m_player_start;
	bool m_used;
	FPlayerStartInfo(APlayerStart* player_start, bool used):  m_player_start(player_start), m_used(used){}
	FPlayerStartInfo() : FPlayerStartInfo(nullptr, false) {};
};

/**
 * 
 */
UCLASS()
class GAMEDEMO_API AMultiPLayerGameMode : public AGameMode
{
	GENERATED_BODY()
private:
	
	TArray<AMyPlayerController*> m_PlayerControllers;
	TArray<FPlayerStartInfo> m_PlayerStartPointsUsed;
public:
	AMultiPLayerGameMode();
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void InitGameState() override;

	UFUNCTION(Server, Replicated, BlueprintCallable, Reliable)
	void ServerRespawnPlayerController(UClass* player_character_class, APlayerController* player_controller);

	UFUNCTION(BlueprintCallable)
	AMyPlayerController* GetGamePlayPlayerController(int index);


	
	APlayerStart* GetAvailablePlayerStartPoint();
protected:
	virtual void HandleSeamlessTravelPlayer(AController*& C) override;
	virtual void SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC) override;
};
