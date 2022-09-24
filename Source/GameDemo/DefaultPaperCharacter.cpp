// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultPaperCharacter.h"
#include "SpineSkeletonAnimationComponent.h"
#include "Net/UnrealNetwork.h"
#include <algorithm>

void ADefaultPaperCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	TickAnimation();
}

/*
void ADefaultPaperCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	//DOREPLIFETIME(ADefaultPaperCharacter, bMoving);
	//DOREPLIFETIME(ADefaultPaperCharacter, bPrevMoving);
	//DOREPLIFETIME(ADefaultPaperCharacter, StickCount);
	
}*/



void ADefaultPaperCharacter::ToggleMoveAnimation(bool bReqMoving)
{
	ToggleMoveAnimationServer(bReqMoving);
}

void ADefaultPaperCharacter::ToggleMoveAnimationServer_Implementation(bool bReqMoving)
{
	ToggleMoveAnimationMultiCast(bReqMoving);
}

void ADefaultPaperCharacter::ToggleMoveAnimationMultiCast_Implementation(bool bReqMoving)
{
	TArray<USpineSkeletonAnimationComponent*> animationComps;
	GetComponents<USpineSkeletonAnimationComponent>(animationComps);
	bMoving = bReqMoving;
	if (!animationComps.IsEmpty()) {
		if (bMoving) {
			UE_LOG(LogTemp, Warning, TEXT("Moving"));
			animationComps[0]->SetAnimation(0, "08_walk", true);
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Stop"));
			animationComps[0]->ClearTrack(0);
		}
	}
}

void ADefaultPaperCharacter::MoveHorizontal(float Value)
{
	if (Value) {
		UE_LOG(LogTemp, Warning, TEXT("%f %s"), Value, *GetHumanReadableName());
	}
	//ServerMoveHorizontal(x);
	
	MyMovementDirection.X = FMath::Clamp(Value, -1.0f, 1.0f);
	AddMovementInput(MyMovementDirection, 1);

	if (Value) {
		//UE_LOG(LogTemp, Warning, TEXT("On Possess 1 Moving:%d"), bMoving);
		if (!bMoving) {
			bMoving = true;
			ToggleMoveAnimationServer(bMoving);
		}
		StickCount = 0;
	}
	else {
		StickCount = std::max(4, StickCount+1);
		if (StickCount > 3 && bMoving) {
			StickCount = 0;
			bMoving = false;
			ToggleMoveAnimationServer(bMoving);
		}
	}

}

void ADefaultPaperCharacter::MoveVertical(float z)
{
	if (z) {
		UE_LOG(LogTemp, Warning, TEXT("z %f"), z);
	}
	if (z > 0) {
		bPressedJump = true;
	}
	else {
		bPressedJump = false;
	}
}



void ADefaultPaperCharacter::TickAnimation() {

}

