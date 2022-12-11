// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "CoreMinimal.h"
#include "CoreFwd.h"
#include "Weapon.h"
#include "DefaultPaperCharacter.generated.h"

class UPaperSpriteComponent;

class USphereComponent;
/**
 * 
 */
UCLASS()
class GAMEDEMO_API ADefaultPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()

private:
	bool bFacingRight = true;
	const int kSwingSliceCount = 16;
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* sphere = nullptr;

	AWeapon* GetWeapon();
	void WakeAllComponents(USceneComponent* actor);
	void RotateAroundLine(USceneComponent* actor, const FVector& line, float degree);
	float MoveLegDegree(UPaperSpriteComponent* comp, float fDegree);
public:
	UFUNCTION()
	void SetFacingDirection(bool bReqFacingRight);
	void PossessedBy(AController* NewController) override;
	
	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* Head {};
	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* Body {};
	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* LeftHand{};
	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* RightHand{};
	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* LeftLeg{};
	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* LeftFeet{};
	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* RightLeg{};
	UPROPERTY(EditDefaultsOnly)
	UPaperSpriteComponent* RightFeet{};
	
	/* Setting property BEGIN */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bCanChangeDirection = false;

	/* Setting property END */
	
	ADefaultPaperCharacter();
	
	// Called every frame
	void Tick(float DeltaTime) override;
	void BeginPlay() override;

	/* Animation begin */
	// Leg Param

	const float fLegDegree = 20;
	float fLeftLegSign = 1;
	float fRightLegSign = -1;
	float fCurLeftLegDegree = fLegDegree/2;
	float fCurRightLegDegree = fLegDegree/2;
	const float kConstLegMoveTime = 0.2;//s

	// Arm Param
	const float fArmDegree = 20;
	float fCurArmDegree = 0;
	const float kConstArmMoveTime = 0.2; //s
	// Moving Param
	bool bMoving = false;
	float fMoveFront = 1;
	// If Continuous input 
	int StickCount;
	UFUNCTION()
	void ToggleMoveAnimation(bool bReqMoving, float fDirection);
	UFUNCTION(Server, Reliable)
	void ToggleMoveAnimationServer(bool bReqMoving, float fDirection);
	UFUNCTION(NetMulticast, Reliable)
	void ToggleMoveAnimationMultiCast(bool bReqMoving, float fDirection);
	/* Animation end */


	/* swing arm begin */
	float fSwingDegree = 200;
	float kConstTime = 0.4;//s
	float fCurrDegree = 0;
	bool bSwinging = false;
	bool bHandBack = false;

	UFUNCTION()
	void SwingArm();
	UFUNCTION(Server, Reliable)
	void SwingArmServer(bool bReqHandBack);
	UFUNCTION(NetMulticast, Reliable)
	void SwingArmMultiCast(bool bReqHandBack);
	void TickSpringArm(float DeltaTime);
	void TickLegMove(float DeltaTime);
	void TickArmMove(float DeltaTime);
	/* swing arm end */

	/* movement begin */
	FVector MyMovementDirection;
	void MoveHorizontal(float x);
	void MoveVertical(float z);
	/* movement end */
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnPlayerDie(int iPlayerID);
	
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};

