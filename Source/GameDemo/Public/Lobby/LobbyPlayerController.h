// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyPlayerController.h"
#include "Common/CommonPlayerInfo.h"
#include "Protocol/GameProto.h"
#include "LobbyPlayerController.generated.h"

struct FClientPostLogin;
/**
 * 
 */
UCLASS()
class GAMEDEMO_API ALobbyPlayerController : public AMyPlayerController
{
	GENERATED_BODY()

private:
	
	UFUNCTION(Server,Reliable, BlueprintCallable)
	void ServerUpdateSettings(const FString& GameMapName, int GameTime);
	UFUNCTION(Server,Reliable, BlueprintCallable)
	void ServerUpdateMembers(EPLAYER_STATUS status);
	UFUNCTION(Server,Reliable, BlueprintCallable)
	void ServerSelectCharacter(const FString& CharacterName);

	UFUNCTION(Server,Reliable, BlueprintCallable)
	void LaunchGame();
	UFUNCTION(Client,Reliable)
	void LoadingBeforeLaunchGame();


public:
	void SetHost();
	
	UPROPERTY(BlueprintReadOnly)
	TArray<FCommonPlayerInfo> RoomMembers;
	
	
	/** Client UI update BEGIN **/
	UFUNCTION(BlueprintImplementableEvent)
	void ClientSetupLobbyMenu();
	UFUNCTION(BlueprintImplementableEvent)
	void ClientUIUpdateMembers();
	
	/** Client UI update END **/
	
	UFUNCTION(BlueprintImplementableEvent)
	void LoadingBeforeLaunchGameEvent();
	UFUNCTION(Client,Reliable)
	void ClientPostLogin(const FClientPostLogin& req);
	UFUNCTION(Client,Reliable)
	void ClientUpdateMembers(const FClientUpdateMembers& req);
	UFUNCTION(Client, Reliable)
	void ClientSuccessfullySelectCharacter(const FRspSelectCharacter& rsp);
};
