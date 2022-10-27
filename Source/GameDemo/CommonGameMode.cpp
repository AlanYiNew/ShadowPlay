// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonGameMode.h"
#include "Net/UnrealNetwork.h"

void ACommonGameMode::PostLogin(APlayerController* NewPlayer) {
	
	if (NewPlayer->HasAuthority()) {
		AllControllers.Push(NewPlayer);
	}
	Super::PostLogin(NewPlayer);
}

void ACommonGameMode::Logout(AController* Exiting) {
	if (Exiting->HasAuthority()) {
		APlayerController* player_controller = Cast<APlayerController>(Exiting);
		if (player_controller == nullptr) {
			return;
		}
		AllControllers.RemoveSingle(player_controller);
	}
	Super::Logout(Exiting);
}

void ACommonGameMode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACommonGameMode, AllControllers);
	//DOREPLIFETIME(ADefaultPaperCharacter, bPrevMoving);
	//DOREPLIFETIME(ADefaultPaperCharacter, StickCount);

}

TArray<APlayerController*> ACommonGameMode::GetAllControllers() {
	return AllControllers;
}