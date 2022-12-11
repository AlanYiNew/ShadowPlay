// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
<<<<<<< HEAD:Source/GameDemo/Public/Lobby/LobbyGameMode.h
#include "Common/CommonGameMode.h"
=======
#include "CommonGameMode.h"
#include "CommonRoomInfo.h"
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e:Source/GameDemo/LobbyGameMode.h
#include "LobbyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAMEDEMO_API ALobbyGameMode : public ACommonGameMode
{
	GENERATED_BODY()
<<<<<<< HEAD:Source/GameDemo/Public/Lobby/LobbyGameMode.h
	void PostLogin(APlayerController* NewPlayer) override;
public:
	void SetGameInfo(const FString& GameMapName, int GameTime);
=======
private:
	FCommonRoomInfo RoomInfo;
>>>>>>> f5fe1f70968223ec8166e8395e68527461899b2e:Source/GameDemo/LobbyGameMode.h
	
public:
	ALobbyGameMode();
	void PostLogin(APlayerController* NewPlayer) override;
	void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;


	void UpdateRoomInfo(const FString& MapName, int MapTime);
};
