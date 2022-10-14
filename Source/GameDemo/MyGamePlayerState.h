// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/UnrealString.h"
#include "GameFramework/PlayerState.h"
#include "MyGamePlayerState.generated.h"



/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class GAMEDEMO_API AMyGamePlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, BlueprintReadWrite, EditAnywhere)
	int m_score = 0;
	UPROPERTY(Replicated, BlueprintReadWrite, ReplicatedUsing = OnRep_SelectedCharacterChange)
	FString m_selected_character;

	//覆写接口
	void CopyProperties(APlayerState* PlayerState) override;


	/*异步事件接口 Begin*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnRep_SelectedCharacterChange();
	/*异步事件接口 End*/

	/*外部接口 Begin*/
	void SetSelectedCharacter(const FString& selected_character);
	/*外部接口 End*/
};


