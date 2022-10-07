// Fill out your copyright notice in the Description page of Project Settings.


#include "My2DCameraComponent.h"


UMy2DCameraComponent::UMy2DCameraComponent() {
	PrimaryComponentTick.bCanEverTick = true;
}


void UMy2DCameraComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	auto location = GetComponentLocation();
	
	if (count++ % 30 == 0) {
		UE_LOG(LogTemp, Warning, TEXT("Location X %d"), location.X);
	}
	if (FGenericPlatformMath::Abs(location.X) > xBoundary) {
		location.X = FGenericPlatformMath::Sign(location.X) * xBoundary;
	}
	SetWorldLocation(location);
}