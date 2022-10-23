// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "DefaultPaperCharacter.h"
#include "Components/InputComponent.h"
#include "Engine/EngineBaseTypes.h"


AMyPlayerController::AMyPlayerController() {
	//AutoReceiveInput = EAutoReceiveInput::Player0;
	UE_LOG(LogTemp, Warning, TEXT("AMyPlayerController %s"), *this->GetHumanReadableName());
	
}

// Called to bind functionality to input
void AMyPlayerController::SetupInputComponent()
{
	UE_LOG(LogTemp, Warning, TEXT("SetupInputComponent %s"), *this->GetHumanReadableName());
	Super::SetupInputComponent();
	
	
	InputComponent->BindAxis("Horizontal", this, &AMyPlayerController::MoveHorizontal);
	InputComponent->BindAxis("Vertical", this, &AMyPlayerController::MoveVertical);
	InputComponent->BindAction("Space", EInputEvent::IE_Pressed, this, &AMyPlayerController::SwingArm);
}

void AMyPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	ADefaultPaperCharacter* paper_character = Cast<ADefaultPaperCharacter>(aPawn);
	
	UE_LOG(LogTemp, Warning, TEXT("OnPossess %s"), *this->GetHumanReadableName());
	
	//UE_LOG(LogTemp, Warning, TEXT("SetupInputComponent %s"), *this->GetHumanReadableName());
	//UE_LOG(LogTemp, Warning, TEXT("GGthree, %d"), myPawn == nullptr);
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
	if (bFacingRight) {
		UE_LOG(LogTemp, Warning, TEXT("MoveHorizontal 0"));
		SetControlRotation(FRotator(0, 0, 0));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("MoveHorizontal 180 %s %d"), *GetHumanReadableName(), IsLocalController());
		SetControlRotation(FRotator(0, 180, 0));
	}
}

void AMyPlayerController::BeginPlay() {
	Super::BeginPlay();
	
	if (IsLocalController() && GetLocalRole() != ROLE_Authority) {
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


