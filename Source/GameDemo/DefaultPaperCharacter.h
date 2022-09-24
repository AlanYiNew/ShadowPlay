// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "CoreMinimal.h"
#include "CoreFwd.h"
#include "DefaultPaperCharacter.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ADefaultPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()

private:
	
	
public:
	// Called every frame
	void Tick(float DeltaTime) override;

	
	bool bMoving = false;
	int StickCount;
	
	FVector MyMovementDirection;
	
	UFUNCTION()
	void ToggleMoveAnimation(bool bReqMoving);
	UFUNCTION(Server, Reliable)
	void ToggleMoveAnimationServer(bool bReqMoving);
	UFUNCTION(NetMulticast, Reliable)
	void ToggleMoveAnimationMultiCast(bool bReqMoving);

	void MoveHorizontal(float x);
	void MoveVertical(float z);
	void TickAnimation();
};
