// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "CoreMinimal.h"
#include "CoreFwd.h"
#include "Weapon.h"
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
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* sphere = nullptr;
	UCapsuleComponent* GetHand();
	AWeapon* GetWeapon();
	void WakeAllComponents(USceneComponent* actor);
	
public:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool bCanChangeDirection = false;
	ADefaultPaperCharacter();
	// Called every frame
	void Tick(float DeltaTime) override;
	void BeginPlay() override;

	/* Animation begin */
	bool bMoving = false;
	
	int StickCount;
	UFUNCTION()
	void ToggleMoveAnimation(bool bReqMoving);
	UFUNCTION(Server, Reliable)
	void ToggleMoveAnimationServer(bool bReqMoving);
	UFUNCTION(NetMulticast, Reliable)
	void ToggleMoveAnimationMultiCast(bool bReqMoving);
	/* Animation begin */


	/* swing arm begin */
	float fSwingDegree = 200;
	float kConstTime = 0.4;//s
	float fCurrDegree = 0;
	bool bSwinging = false;
	bool bHandBack = false; //手是否在后方(开始时在前方)

	UFUNCTION()
	void SwingArm();
	UFUNCTION(Server, Reliable)
	void SwingArmServer(bool bReqHandBack);
	UFUNCTION(NetMulticast, Reliable)
	void SwingArmMultiCast(bool bReqHandBack);
	void TickSpringArm(float DeltaTime);
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
