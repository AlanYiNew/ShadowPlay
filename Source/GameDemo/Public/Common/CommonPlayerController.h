// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CommonPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ACommonPlayerController : public APlayerController
{
	GENERATED_BODY()

	public:
<<<<<<< HEAD:Source/GameDemo/Public/Common/CommonPlayerController.h
		UPROPERTY(Replicated, BlueprintReadOnly)
		bool bOwnByServer = false;

		virtual void SetOwnByServer(bool bOwnByServer);
		bool IsOwnByServer(){return bOwnByServer;};	
=======
	UPROPERTY(Replicated)
	bool bIsGameOwner{};
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e:Source/GameDemo/CommonPlayerController.h
};
