// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "My2DCameraComponent.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API UMy2DCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
private:
	UPROPERTY(EditDefaultsOnly)
	float xBoundary = 0;
	int count = 0;
public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UMy2DCameraComponent();
};
