// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonPlayerController.h"

#include "Net/UnrealNetwork.h"


void ACommonPlayerController::SetOwnByServer(bool bReqOwnByServer)
{
	bOwnByServer = bReqOwnByServer;
	UE_LOG(LogTemp, Warning, TEXT("AMyPlayerControllerComm %s %d"), *this->GetHumanReadableName(), bOwnByServer);
}

void ACommonPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ACommonPlayerController, bOwnByServer);
	//DOREPLIFETIME(ADefaultPaperCharacter, bPrevMoving);
	//DOREPLIFETIME(ADefaultPaperCharacter, StickCount);
}
