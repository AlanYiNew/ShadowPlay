// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGamePlayerState.h"
#include "Net/UnrealNetwork.h"


void AMyGamePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AMyGamePlayerState, m_score);
	DOREPLIFETIME(AMyGamePlayerState, m_selected_character);
	//DOREPLIFETIME(ADefaultPaperCharacter, StickCount);

}

/*
void AMyGamePlayerState::SetSelectedCharacter(const FString& selected_character)  {
	m_selected_character = selected_character;
	UE_LOG(LogTemp, Warning, TEXT("character %s"), *m_selected_character);
	if (GetLocalRole() == ROLE_Authority) {
		OnRep_SelectedCharacterChange();
	}
}*/

void AMyGamePlayerState::CopyProperties(APlayerState* PlayerState) {
	Super::CopyProperties(PlayerState);
	AMyGamePlayerState* state = Cast<AMyGamePlayerState>(PlayerState);
	if (state != nullptr) {
		state->m_selected_character =m_selected_character ;
		state->m_score = m_score;
	}
}