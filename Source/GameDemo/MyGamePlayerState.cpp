// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGamePlayerState.h"
#include "Net/UnrealNetwork.h"


void AMyGamePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyGamePlayerState, m_Score);
	//DOREPLIFETIME(ADefaultPaperCharacter, bPrevMoving);
	//DOREPLIFETIME(ADefaultPaperCharacter, StickCount);

}