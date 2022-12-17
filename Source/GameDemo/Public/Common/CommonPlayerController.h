// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonPlayerInfo.h"
#include "GameFramework/PlayerController.h"
#include "CommonPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ACommonPlayerController : public APlayerController
{
	GENERATED_BODY()
	private:
		int SimpleUniquePlayerID{};
	protected:
		UPROPERTY(BlueprintReadOnly)
		FCommonPlayerInfo PlayerInfo;
	public:
		
		void SetSimpleUniquePlayerID(int id) { SimpleUniquePlayerID = id;};
		int GetSimpleUniquePlayerID() { return SimpleUniquePlayerID;};
		virtual void SetOwnByServer(bool bReqOwnByServer) { bOwnByServer = bReqOwnByServer;};
		bool IsOwnByServer(){return bOwnByServer;};


	public:
		UPROPERTY(Replicated, BlueprintReadOnly)
		bool bOwnByServer = false;

		FCommonPlayerInfo& GetPlayerInfo() { return PlayerInfo;};
};
