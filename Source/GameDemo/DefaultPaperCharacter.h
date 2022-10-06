// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "CoreMinimal.h"
#include "CoreFwd.h"
#include "DefaultPaperCharacter.generated.h"

class USphereComponent;
/**
 * 
 */
UCLASS()
class GAMEDEMO_API ADefaultPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()

private:
	const int kSwingSliceCount = 16;
	USphereComponent* sphere = nullptr;
	UCapsuleComponent* GetHand();
public:
	// Called every frame
	void Tick(float DeltaTime) override;
	void BeginPlay() override;

	/* Animation begin */
	bool bMoving = false;
	bool back = false;
	int StickCount;
	UFUNCTION()
	void ToggleMoveAnimation(bool bReqMoving);
	UFUNCTION(Server, Reliable)
	void ToggleMoveAnimationServer(bool bReqMoving);
	UFUNCTION(NetMulticast, Reliable)
	void ToggleMoveAnimationMultiCast(bool bReqMoving);
	/* Animation begin */


	/* swing arm begin */
	int tickCount = -1;
	float degreeEach = -15;
	int swingLeft = 0;

	UFUNCTION()
	void SwingArm();
	UFUNCTION(Server, Reliable)
	void SwingArmServer();
	UFUNCTION(NetMulticast, Reliable)
	void SwingArmMultiCast();
	/* swing arm end */

	/* movement begin */
	FVector MyMovementDirection;
	void MoveHorizontal(float x);
	void MoveVertical(float z);
	/* movement end */
	
	void TickSpringArm();
	
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	
};
