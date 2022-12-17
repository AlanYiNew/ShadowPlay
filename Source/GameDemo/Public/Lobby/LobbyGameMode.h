// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Common/CommonGameMode.h"
#include "Engine/DataTable.h"
#include "LobbyGameMode.generated.h"


class ALobbyPlayerController;
/**
 * 
 */
UCLASS()
class GAMEDEMO_API ALobbyGameMode : public ACommonGameMode
{
private:
	UDataTable *character_table = LoadObject<UDataTable>(NULL, UTF8_TO_TCHAR("DataTable'/Game/Tables/TableCharacters.TableCharacters'"));
	
	GENERATED_BODY()
	void PostLogin(APlayerController* NewPlayer) override;
public:
	void SetGameInfo(const FString& GameMapName, int GameTime);
	void NotifyUpdateMembers();
	void Logout(AController* Exiting) override;
	void RespawnPlayer(ALobbyPlayerController* player_controller);
};
