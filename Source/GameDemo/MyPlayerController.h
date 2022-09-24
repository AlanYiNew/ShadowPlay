// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

class UInputComponent;
/**
 * 
 */
UCLASS()
class GAMEDEMO_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	public:
		AMyPlayerController();
		void MoveHorizontal(float x);
		void MoveVertical(float x);
		
	protected:
		virtual void SetupInputComponent() override;
		virtual void OnPossess(APawn* aPawn) override;
};
