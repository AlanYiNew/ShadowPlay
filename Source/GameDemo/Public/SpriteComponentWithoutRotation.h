// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteComponent.h"
#include "SpriteComponentWithoutRotation.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class GAMEDEMO_API USpriteComponentWithoutRotation : public UPaperSpriteComponent
{
	GENERATED_BODY()
private:
	void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);
public:
	USpriteComponentWithoutRotation();
};
