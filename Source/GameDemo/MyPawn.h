// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "CoreFwd.h"
#include "GameFramework/Pawn.h"

#include "Camera/CameraComponent.h"
#include "MyPawn.generated.h"

class AController;
class UMyFloatingPawnMovement;
//class USpringArmComponent;
UCLASS()
class GAMEDEMO_API AMyPawn : public APawn
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, Category = "OurMovementComponent")
	UMyFloatingPawnMovement* OurMovementComponent;

	UPROPERTY(Replicated)
	FVector MovementDirection;
	UPROPERTY(EditAnywhere, Replicated)
	float MovementSpeed = 100.0f;
	UPROPERTY(Replicated)
	bool Moving = false;
	UPROPERTY(Replicated)
	int  StickCount = 0;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	
public:
	// Sets default values for this pawn's properties
	AMyPawn(const FObjectInitializer& ObjectInitializer);

	// Called every frame
	virtual void Tick(float DeltaTime) override;



	virtual UPawnMovementComponent* GetMovementComponent() const override;


	void MoveHorizontal(float x);
	void MoveVertical(float y);

	UFUNCTION(Server, Reliable)
	void ServerMoveHorizontal(float Value);
	UFUNCTION(NetMulticast, Reliable)
	void ClientMoveHorizontal(float Value);

	UFUNCTION(Server, Reliable)
	void ServerMoveVertical(float Value);
	UFUNCTION(NetMulticast, Reliable)
	void ClientMoveVertical(float Value);


	virtual void PossessedBy(AController* NewController) override;
	
};
