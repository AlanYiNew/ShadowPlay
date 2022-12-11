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
		UPROPERTY(Replicated, BlueprintReadOnly)
		bool bOwnByServer = false;

		virtual void SetOwnByServer(bool bReqOwnByServer) { bOwnByServer = bReqOwnByServer;};
		bool IsOwnByServer(){return bOwnByServer;};	
};
