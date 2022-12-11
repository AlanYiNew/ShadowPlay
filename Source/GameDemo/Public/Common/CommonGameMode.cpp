// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonGameMode.h"

#include "CommonPlayerController.h"
#include "Net/UnrealNetwork.h"

void ACommonGameMode::PostLogin(APlayerController* NewPlayer) {
	if (NewPlayer->HasAuthority()) {
		AllControllers.Push(NewPlayer);
		auto controller = Cast<ACommonPlayerController>(NewPlayer);
		if (controller && AllControllers.Num() == 1)
		{
			controller->SetOwnByServer(true);
		}
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

void ACommonGameMode::SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPlayer)
{
	Super::SwapPlayerControllers(OldPC, NewPlayer);
	if (NewPlayer->HasAuthority()) {
		AllControllers.Push(NewPlayer);
	}
	ACommonPlayerController* controller = Cast<ACommonPlayerController>(NewPlayer);
	if (controller)
	{
		controller->SetOwnByServer(AllControllers.Num() == 1);
	}
	
}

bool ACommonGameMode::IsGameOwner(AController* player_controller)
{
	if (AllControllers.Num() != 0 && player_controller == AllControllers[0])
	{
		return true;
	}
	return false;
}