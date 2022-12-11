// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultPaperCharacter.h"
#include "SpineSkeletonAnimationComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PaperSpriteComponent.h"
#include "GameFramework/PlayerState.h"


#include <algorithm>

#include "MyPlayerController.h"
#include "PaperSprite.h"

void ADefaultPaperCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TickSpringArm(DeltaTime);
	TickLegMove(DeltaTime);
	TickArmMove(DeltaTime);
}

ADefaultPaperCharacter::ADefaultPaperCharacter() {
	PrimaryActorTick.bCanEverTick = true;
	Head = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Head"));
	Body = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Body"));
	LeftHand = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("LeftHand"));
	RightHand = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("RightHand"));
	LeftLeg = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("LeftLeg"));
	LeftFeet = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("LeftFeet"));
	RightLeg = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("RightLeg"));
	RightFeet = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("RightFeet"));

	sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	sphere->SetupAttachment(RootComponent);
	Body->SetupAttachment(RootComponent);
	LeftHand->SetupAttachment(RootComponent);
	RightHand->SetupAttachment(RootComponent);
	LeftLeg->SetupAttachment(RootComponent);
	LeftFeet->SetupAttachment(LeftLeg);
	RightLeg->SetupAttachment(RootComponent);
	RightFeet->SetupAttachment(RightLeg);
	Head->SetupAttachment(RootComponent);
}

/*
void ADefaultPaperCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ADefaultPaperCharacter, bIsLeft);
	//DOREPLIFETIME(ADefaultPaperCharacter, bPrevMoving);
	//DOREPLIFETIME(ADefaultPaperCharacter, StickCount);
	
}*/

void ADefaultPaperCharacter::ToggleMoveAnimation(bool bReqMoving, float fDirection)
{
	ToggleMoveAnimationServer(bReqMoving, fDirection);
}

void ADefaultPaperCharacter::ToggleMoveAnimationServer_Implementation(bool bReqMoving, float fDirection)
{
	ToggleMoveAnimationMultiCast(bReqMoving, fDirection);
}

void ADefaultPaperCharacter::ToggleMoveAnimationMultiCast_Implementation(bool bReqMoving, float fDirection)
{
	bMoving = bReqMoving;
	fMoveFront = fDirection;
	auto weapon = GetWeapon();
	if (weapon) {
		weapon->WakeUpAllRigidBody();
	}
}

void ADefaultPaperCharacter::SwingArm() {
	if (bSwinging) {
		return;
	}
	bSwinging = true;
	bHandBack = !bHandBack;
	UE_LOG(LogTemp, Warning, TEXT("SwingArm Server"));
	SwingArmServer(bHandBack);
}

void ADefaultPaperCharacter::SwingArmServer_Implementation(bool bReqHandBack) {
	auto weapon = GetWeapon();
	if (weapon) {
		weapon->WakeUpAllRigidBody();
	}
	SwingArmMultiCast(bReqHandBack);
}

AWeapon* ADefaultPaperCharacter::GetWeapon() {
	
	auto weapon = RightHand->GetChildComponent(0);

	TArray<USceneComponent*> object_list;
	weapon->GetChildrenComponents(false, object_list);
	int i = 0;
	for (auto& each : object_list) {
		if (each->GetOwner()) {
			return Cast<AWeapon>(each->GetOwner());
		}
	}
	return nullptr;
}



void ADefaultPaperCharacter::SwingArmMultiCast_Implementation(bool bReqHandBack) {
	if (RightHand == nullptr ) {
		return;
	}
	auto weapon = GetWeapon();
	if (weapon) {
		weapon->WakeUpAllRigidBody();
	}

	
	//sphere->WakeRigidBody();
	bSwinging = true;
	bHandBack = bReqHandBack;
}

void ADefaultPaperCharacter::MoveHorizontal(float Value)
{
	if (Value) {
		MyMovementDirection.X = FMath::Clamp(Value, -1.0f, 1.0f);
		AddMovementInput(MyMovementDirection, 1);
	}
	
	if (Value) {
		if (!bMoving) {
			bMoving = true;
			ToggleMoveAnimationServer(bMoving, MyMovementDirection.X);
		}
		StickCount = 0;
	}
	else {
		StickCount = std::max(4, StickCount+1);
		if (StickCount > 3 && bMoving) {
			StickCount = 0;
			bMoving = false;
			ToggleMoveAnimationServer(bMoving, MyMovementDirection.X);
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

void ADefaultPaperCharacter::RotateAroundLine(USceneComponent* comp, const FVector& line, float degree) {
	FMatrix m1 = FTranslationMatrix(-line);
	FMatrix m2 = FRotationMatrix(FRotator(degree, 0, 0));
	FMatrix m3 = FTranslationMatrix(line);
	FMatrix s = FScaleMatrix(comp->GetRelativeScale3D());
	
	auto m = m1 * m2 * m3 * s;
	comp->AddLocalTransform(FTransform(m), false, nullptr, ETeleportType::None);
	return;
}

float ADefaultPaperCharacter::MoveLegDegree(UPaperSpriteComponent* comp, float fDegree)
{
	auto sprite = comp->GetSprite();
	if (!sprite)
	{
		return 0;
	}
	
	//auto scale = comp->GetRelativeScale3D();
	auto bounds = sprite->GetRenderBounds();
	FVector line(0, 0, bounds.BoxExtent[2]);
	RotateAroundLine(comp, line, fDegree);
	return fDegree;
}

void ADefaultPaperCharacter::TickLegMove(float DeltaTime)
{
	if (!bMoving)
	{
		return;
	}
	
	float fDegree = fLegDegree/kConstLegMoveTime*DeltaTime;
	float fLeftLegSignNext = fLeftLegSign;
	if (fCurLeftLegDegree + fDegree > fLegDegree)
	{
		fDegree = fLegDegree - fCurLeftLegDegree;
		fLeftLegSignNext *= -1;
		fCurLeftLegDegree = 0;
	}
	fCurLeftLegDegree += FMath::Abs(MoveLegDegree(LeftLeg, fLeftLegSign*fDegree));
	fLeftLegSign = fLeftLegSignNext;

	fDegree = fLegDegree/kConstLegMoveTime*DeltaTime;
	float fRightLegSignNext = fRightLegSign;
	
	if (fCurRightLegDegree + fDegree > fLegDegree)
	{
		fDegree = fLegDegree - fCurRightLegDegree;
		fRightLegSignNext *= -1;
		fCurRightLegDegree = 0;
	}
	fCurRightLegDegree += FMath::Abs(MoveLegDegree(RightLeg, fRightLegSign*fDegree));
	fRightLegSign = fRightLegSignNext;
}

void ADefaultPaperCharacter::TickSpringArm(float DeltaTime) {
	if (!bSwinging) {
		return;
	}
	
	float fDegree = DeltaTime / kConstTime * fSwingDegree;
	fDegree = fDegree + fCurrDegree > fSwingDegree ? fSwingDegree - fCurrDegree : fDegree;

	auto sprite = RightHand->GetSprite();
	if (!sprite)
	{
		return;
	}
	
	auto bounds = sprite->GetRenderBounds();
	FVector line(0, 0, bounds.BoxExtent[2]);
	RotateAroundLine(RightHand, line, bHandBack ? fDegree : -fDegree);
	

	fCurrDegree += fDegree;
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

void ADefaultPaperCharacter::TickArmMove(float DeltaTime)
{
	if (!bMoving)
	{
		return;
	}
	
	auto sprite = LeftHand->GetSprite();
	if (!sprite)
	{
		return;
	}
	
	float fDegree = -1 * fMoveFront*fArmDegree/kConstArmMoveTime*DeltaTime;
	
	if (FMath::Abs(fDegree + fCurArmDegree) >= fArmDegree)
	{
		fDegree = FMath::Sign(fDegree) * (fArmDegree - FMath::Abs(fCurArmDegree));
	}
	auto bounds = sprite->GetRenderBounds();
	FVector line(0, 0, bounds.BoxExtent[2]);
	
	RotateAroundLine(LeftHand, line, fDegree);
	fCurArmDegree += fDegree;
}

void ADefaultPaperCharacter::SetFacingDirection(bool bReqFacingRight)
{
	if (bReqFacingRight != bFacingRight)
	{
		auto locationLeft = LeftHand->GetRelativeLocation();
		locationLeft.Y = -locationLeft.Y;
		LeftHand->SetRelativeLocation(locationLeft);
		auto locationRight = RightHand->GetRelativeLocation();
		locationRight.Y = -locationRight.Y;
		RightHand->SetRelativeLocation(locationRight);
	}
}
void ADefaultPaperCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	auto controller = Cast<AMyPlayerController>(NewController);

	if (!controller->IsOwnByServer())
	{
		SetFacingDirection(!bFacingRight);
	}
}