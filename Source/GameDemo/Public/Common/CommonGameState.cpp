// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonGameState.h"

#include "Net/UnrealNetwork.h"


void ACommonGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ACommonGameState, GameInfo);
	//DOREPLIFETIME(ADefaultPaperCharacter, bPrevMoving);
	//DOREPLIFETIME(ADefaultPaperCharacter, StickCount);
	
}
