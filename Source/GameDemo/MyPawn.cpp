// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPawn.h"
#include "Components/InputComponent.h"
#include "Components/SceneComponent.h"
#include "Math/UnrealMathUtility.h"
#include "MyFloatingPawnMovement.h"
#include "GameFramework/SpringArmComponent.h"
#include "SpineSkeletonAnimationComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values
AMyPawn::AMyPawn(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	OurMovementComponent = CreateDefaultSubobject<UMyFloatingPawnMovement>(TEXT("CustomMovementComponent"));
	OurMovementComponent->UpdatedComponent = RootComponent;


}



UPawnMovementComponent* AMyPawn::GetMovementComponent() const {
	return OurMovementComponent;
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();

}

void AMyPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMyPawn, MovementSpeed);
	DOREPLIFETIME(AMyPawn, MovementDirection);
	DOREPLIFETIME(AMyPawn, Moving);
	DOREPLIFETIME(AMyPawn, StickCount);
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!MovementDirection.IsZero()) {
		const FVector vec = MovementDirection * DeltaTime * MovementSpeed;
		OurMovementComponent->AddInputVector(vec);
		
	}

	TArray<USpineSkeletonAnimationComponent*> animationComps;
	GetComponents<USpineSkeletonAnimationComponent>(animationComps);
	if (!animationComps.IsEmpty()) {
		if (!MovementDirection.IsNearlyZero() ) {
			if (!Moving){
				UE_LOG(LogTemp, Warning, TEXT("On Possess 08_walk"));
				animationComps[0]->SetAnimation(0, "08_walk", true);
				Moving = true;
			}
			StickCount = 0;
		}	
		else {
			
			StickCount++;
			if (StickCount > 3) {
				animationComps[0]->ClearTrack(0);
				Moving = false;
			}
		}
	}
	
	
}


void AMyPawn::PossessedBy(AController* NewController) {
	Super::PossessedBy(NewController);
	UE_LOG(LogTemp, Warning, TEXT("On Possess %s"), *NewController->GetHumanReadableName());
}

void AMyPawn::MoveHorizontal(float x)
{
	if (x) {
		UE_LOG(LogTemp, Warning, TEXT("%x %f %s"), x, *GetHumanReadableName());
	}
	ServerMoveHorizontal(x);
}

void AMyPawn::MoveVertical(float z)
{
	if (z) {
		UE_LOG(LogTemp, Warning, TEXT("z %f"), z);
	}
	ServerMoveVertical(z);
}


void AMyPawn::ServerMoveHorizontal_Implementation(float Value)
{
	MovementDirection.X = FMath::Clamp(Value, -1.0f, 1.0f);
	if (GetLocalRole() == ROLE_Authority)
	{
		ClientMoveHorizontal(Value);
	}
}

void AMyPawn::ClientMoveHorizontal_Implementation(float Value)
{
	MovementDirection.X = FMath::Clamp(Value, -1.0f, 1.0f);
}


void AMyPawn::ServerMoveVertical_Implementation(float Value)
{
	MovementDirection.Z = FMath::Clamp(Value, -1.0f, 1.0f);
	if (GetLocalRole() == ROLE_Authority)
	{
		ClientMoveVertical(Value);
	}
}

void AMyPawn::ClientMoveVertical_Implementation(float Value)
{
	MovementDirection.Z = FMath::Clamp(Value, -1.0f, 1.0f);
}

