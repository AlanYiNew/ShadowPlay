// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultPaperCharacter.h"
#include "SpineSkeletonAnimationComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/PlayerState.h"


#include <algorithm>

void ADefaultPaperCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TickSpringArm(DeltaTime);
}

ADefaultPaperCharacter::ADefaultPaperCharacter() {
	PrimaryActorTick.bCanEverTick = true;

	sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	sphere->SetupAttachment(GetRootComponent());
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

void ADefaultPaperCharacter::SwingArm() {
	if (bSwinging) {
		return;
	}
	bSwinging = true;
	bHandBack = !bHandBack;
	SwingArmServer(bHandBack);
}

void ADefaultPaperCharacter::SwingArmServer_Implementation(bool bReqHandBack) {
	SwingArmMultiCast(bReqHandBack);
}

void ADefaultPaperCharacter::SwingArmMultiCast_Implementation(bool bReqHandBack) {
	auto hand = GetHand();
	if (hand == nullptr) {
		return;
	}
	sphere->WakeRigidBody();
	bSwinging = true;
	bHandBack = bReqHandBack;
}

void ADefaultPaperCharacter::MoveHorizontal(float Value)
{
	if (Value) {
		UE_LOG(LogTemp, Warning, TEXT("%f %s"), Value, *GetHumanReadableName());
	}

	
	MyMovementDirection.X = FMath::Clamp(Value, -1.0f, 1.0f);
	AddMovementInput(MyMovementDirection, 1);

	if (Value) {
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

FMatrix GetRotateMatrix(const FVector& line, float degree) {
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

void ADefaultPaperCharacter::TickSpringArm(float DeltaTime) {
	auto hand = GetHand();
	if (hand == nullptr) {
		return;
	}

	if (!bSwinging) {
		return;
	}

	// 计算可以转多少度
	float fDegree = DeltaTime / kConstTime * fSwingDegree;
	fDegree = fDegree + fCurrDegree > fSwingDegree ? fSwingDegree - fCurrDegree : fDegree;

	UE_LOG(LogTemp, Warning, TEXT("Swing %f %d"), fCurrDegree, bHandBack);

	// 转动
	FVector line(0, 0, hand->GetScaledCapsuleHalfHeight());
	auto matrix = GetRotateMatrix(line, bHandBack ? fDegree : -fDegree);
	hand->AddLocalTransform(FTransform(matrix), false, nullptr, ETeleportType::None);
	
	// 累计转了多少度
	fCurrDegree += fDegree;
	// 转够了目标度数
	if (FMath::IsNearlyZero(fSwingDegree - FMath::Abs(fCurrDegree))) {
		bSwinging = false;
		fCurrDegree = 0;
	}
}

UFUNCTION()
void ADefaultPaperCharacter::OnOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->GetParentActor() == nullptr) {
		return;
	}
	AActor* ParentActor = OtherActor->GetParentActor();
	if (ParentActor->IsOwnedBy(this)) {
		return;
	}

	if (!OtherComp->ComponentHasTag(FName("WeaponBody"))) {
		return;
	}

	if (sphere == nullptr) {
		return;
	}

	auto playerState = GetPlayerState();
	if (playerState == nullptr) {
		return;
	}

	OnPlayerDie(playerState->GetPlayerId());
}


void ADefaultPaperCharacter::BeginPlay() {
	Super::BeginPlay();
	
	sphere->OnComponentBeginOverlap.AddDynamic(this, &ADefaultPaperCharacter::OnOverlapBegin);
	
}

