// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultPaperCharacter.h"
#include "SpineSkeletonAnimationComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"

#include <algorithm>

void ADefaultPaperCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TickSpringArm();
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
			//animationComps[0]->SetAnimation(0, "08_walk", true);
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Stop"));
			//animationComps[0]->ClearTrack(0);
		}
	}
}

void ADefaultPaperCharacter::SwingArm() {
	if (swingLeft != 0) {
		return;
	}
	swingLeft = kSwingSliceCount;
	SwingArmServer();
}

void ADefaultPaperCharacter::SwingArmServer_Implementation() {
	SwingArmMultiCast();
}

void ADefaultPaperCharacter::SwingArmMultiCast_Implementation() {
	auto hand = GetHand();
	if (hand == nullptr) {
		return;
	}

	swingLeft = kSwingSliceCount;
	tickCount = 0;
	degreeEach = -degreeEach;
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

FMatrix get_rotate_matrix(const FVector& line, float degree) {
	FMatrix m1 = FTranslationMatrix(-line);
	FMatrix m2 = FRotationMatrix(FRotator(degree, 0, 0));
	FMatrix m3 = FTranslationMatrix(line);
	return m1 * m2 * m3;
}

UCapsuleComponent* ADefaultPaperCharacter::GetHand() {
	auto capsule = GetCapsuleComponent();
	TArray<USceneComponent*> object_list;
	capsule->GetChildrenComponents(false, object_list);
	int i = 0;
	for (auto& each : object_list) {
		UCapsuleComponent* hand = Cast<UCapsuleComponent>(each);
		if (hand != nullptr && i++ == 1) {
			return hand;
		}
	}
	return nullptr;
}

void ADefaultPaperCharacter::TickSpringArm() {
	auto hand = GetHand();
	if (hand == nullptr) {
		return;
	}

	if (swingLeft <= 0) {
		return;
	}

	if (tickCount > 0) {
		tickCount--;
	}
	else if (tickCount == 0) {
		tickCount--;
		FVector line(0, 0, hand->GetScaledCapsuleHalfHeight());
		auto matrix = get_rotate_matrix(line, degreeEach);
		hand->AddLocalTransform(FTransform(matrix), false, nullptr, ETeleportType::None);
		if (swingLeft > 0) {
			swingLeft--;
			tickCount = 1;
		}
	}
}

void ADefaultPaperCharacter::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (this != OtherActor && OtherComp->ComponentHasTag(FName("WeaponBody"))) {
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%s Hit by weaponbody"), *GetHumanReadableName()));
		}
		if (sphere == nullptr) {
			return;
		}
		sphere->WakeRigidBody();
	}
}



void ADefaultPaperCharacter::BeginPlay() {
	Super::BeginPlay();
	

	auto capsule = GetCapsuleComponent();
	capsule->OnComponentHit.AddDynamic(this, &ADefaultPaperCharacter::OnHit);


	auto hand = GetHand();
	TArray<USceneComponent*> object_list;
	hand->GetChildrenComponents(false, object_list);
	if (object_list.Num() != 0) {
		TArray<USceneComponent*> comps;
		object_list[0]->GetChildrenComponents(false, comps);
		if (comps.Num() != 0) {
			sphere = Cast<USphereComponent>(comps[0]);
			UE_LOG(LogTemp, Warning, TEXT("Found WeaponBody"));
		}
	}
}