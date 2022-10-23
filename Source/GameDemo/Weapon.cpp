// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Containers/UnrealString.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	for (int i = 0; i < 6; i++) {
		auto x = CreateDefaultSubobject<UPaperSpriteComponent>(*FString::Printf(TEXT("ChainSpring%d"), i));
		chain_springs.Push(x);
		x->SetupAttachment(GetRootComponent());
	}

	sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere"));
	sphere->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::WakeUpAllRigidBody()
{
	UE_LOG(LogTemp, Warning, TEXT("Wake ggg"));
	for (auto x : chain_springs) {
		UE_LOG(LogTemp, Warning, TEXT("Wake %s"), *x->GetReadableName());
		x->WakeRigidBody();
	}
	sphere->WakeRigidBody();
}


