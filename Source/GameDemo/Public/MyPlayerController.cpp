// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "DefaultPaperCharacter.h"
#include "Components/InputComponent.h"
#include "Engine/EngineBaseTypes.h"
#include "Net/UnrealNetwork.h"


AMyPlayerController::AMyPlayerController() {
	//AutoReceiveInput = EAutoReceiveInput::Player0;
}

// Called to bind functionality to input
void AMyPlayerController::SetupInputComponent()
{

	Super::SetupInputComponent();
	
	InputComponent->BindAxis("Horizontal", this, &AMyPlayerController::MoveHorizontal);
	InputComponent->BindAxis("Vertical", this, &AMyPlayerController::MoveVertical);
	InputComponent->BindAction("Space", EInputEvent::IE_Pressed, this, &AMyPlayerController::SwingArm);
}

void AMyPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

}

void AMyPlayerController::MoveHorizontal(float x) {
	ADefaultPaperCharacter* myPawn = GetPawn<ADefaultPaperCharacter>();
	
	if (myPawn != nullptr) {
		if (myPawn->bCanChangeDirection && !FMath::IsNearlyZero(x) && bFacingRight != (x > 0)) {
			SetControllerDirection(!bFacingRight);
		}

		myPawn->MoveHorizontal(x);
	}
}


void AMyPlayerController::SetControllerDirection(bool bSetFacingRight) {
	bFacingRight = bSetFacingRight;
	
	UE_LOG(LogTemp, Warning, TEXT("Facing Right:%d"), bFacingRight);
	if (bFacingRight) {
		SetControlRotation(FRotator(0, 0, 0));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Setting 180"));
		SetControlRotation(FRotator(0, 180, 0));
	}
}

void AMyPlayerController::BeginPlay() {
	Super::BeginPlay();
<<<<<<< HEAD:Source/GameDemo/Public/MyPlayerController.cpp
	if (!IsOwnByServer())
	{
=======
	
	if (!bIsGameOwner) {
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e:Source/GameDemo/MyPlayerController.cpp
		SetControllerDirection(!bFacingRight);
	}
}

void AMyPlayerController::MoveVertical(float x) {
	ADefaultPaperCharacter* myPawn = GetPawn<ADefaultPaperCharacter>();
	if (myPawn != nullptr) {
		myPawn->MoveVertical(x);
	}
}

void AMyPlayerController::SwingArm() {
	ADefaultPaperCharacter* myPawn = GetPawn<ADefaultPaperCharacter>();
	if (myPawn != nullptr) {
		myPawn->SwingArm();
	}
}


