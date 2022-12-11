// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonPlayerController.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

class UInputComponent;
/**
 * 
 */
UCLASS()
class GAMEDEMO_API AMyPlayerController : public ACommonPlayerController
{
	GENERATED_BODY()
	private:
		

	public:
		
		bool bFacingRight{true};
		AMyPlayerController();
		void MoveHorizontal(float x);
		void MoveVertical(float x);
		void SwingArm();
		void SetControllerDirection(bool bFacingRight);
		void BeginPlay() override;
		

	protected:
		virtual void SetupInputComponent() override;
		virtual void OnPossess(APawn* aPawn) override;
		
};
