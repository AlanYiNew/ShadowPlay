// Fill out your copyright notice in the Description page of Project Settings.


#include "SpriteComponentWithoutRotation.h"

USpriteComponentWithoutRotation::USpriteComponentWithoutRotation() {
	PrimaryComponentTick.bCanEverTick = true;
}


void USpriteComponentWithoutRotation::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	auto rotator = GetComponentRotation();

	if (!FMath::IsNearlyZero(rotator.Yaw)) {
		rotator.Yaw = 0;
	}

	if (!FMath::IsNearlyZero(rotator.Roll)) {
		rotator.Roll = 0;
	}
	SetWorldRotation(rotator);
}
