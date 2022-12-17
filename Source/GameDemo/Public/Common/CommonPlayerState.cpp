// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonPlayerState.h"
#include "Net/UnrealNetwork.h"


void ACommonPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACommonPlayerState, m_score);
	DOREPLIFETIME(ACommonPlayerState, m_selected_character);
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

void ACommonPlayerState::CopyProperties(APlayerState* PlayerState) {
	Super::CopyProperties(PlayerState);
	ACommonPlayerState* state = Cast<ACommonPlayerState>(PlayerState);
	if (state != nullptr) {
		state->m_selected_character =m_selected_character ;
		state->m_score = m_score;
	}
}