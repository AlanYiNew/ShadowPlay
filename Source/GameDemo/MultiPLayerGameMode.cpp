// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiPLayerGameMode.h"
#include "DefaultPaperCharacter.h"
#include "MyGamePlayerState.h"
#include "Net/UnrealNetwork.h"



void AMultiPLayerGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) {
	Super::InitGame(MapName, Options, ErrorMessage);
	UE_LOG(LogTemp, Warning, TEXT("Hello"));

	
	TArray<UObject*> player_start;
	GetObjectsOfClass(APlayerStart::StaticClass(), player_start);
	for (auto & iter:player_start) {
		m_PlayerStartPointsUsed.Push(FPlayerStartInfo(Cast<APlayerStart>(iter), false));
	}
}

void AMultiPLayerGameMode::InitGameState() 
{
	UE_LOG(LogTemp, Warning, TEXT("GG"));
}

AMultiPLayerGameMode::AMultiPLayerGameMode() 
{
	
}

void AMultiPLayerGameMode::HandleSeamlessTravelPlayer(AController*& C)
{	
	Super::HandleSeamlessTravelPlayer(C);
	auto PC = Cast<AMyPlayerController>(C);
	bool v = (PC == nullptr);
	UE_LOG(LogTemp, Error, TEXT("HandleSeamlessTravelPlayer %d"), v);
}

APlayerStart* AMultiPLayerGameMode::GetAvailablePlayerStartPoint()
{
	for (FPlayerStartInfo& iter : m_PlayerStartPointsUsed) {
		if (!iter.m_used) {
			iter.m_used = true;
			return iter.m_player_start;
		}
	}
	return nullptr;
}

void AMultiPLayerGameMode::ServerRespawnPlayerController_Implementation(UClass* player_character_class, APlayerController* player_controller,const FString& character_name)
{
	APlayerStart* availablePlayerStart = GetAvailablePlayerStartPoint();
	if (availablePlayerStart == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Failed GetAvailablePlayerStartPoint"));
		return;
	}

	ADefaultPaperCharacter* pawn = Cast<ADefaultPaperCharacter>(GetWorld()->SpawnActor<ADefaultPaperCharacter>(player_character_class, availablePlayerStart->GetActorTransform()));
	if (pawn == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Failed spawn actor"));
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("ServerRespawnPlayerController Possess %s"), *player_character_class->GetName());
	player_controller->Possess(pawn);
}	

bool AMultiPLayerGameMode::IsServer(APlayerController* controller) {
	if (controller->GetRemoteRole() == ROLE_SimulatedProxy && controller->GetLocalRole() == ROLE_Authority) {
		return true;
	}
	return false;
}

void AMultiPLayerGameMode::SwapPlayerControllers(APlayerController* OldPC, APlayerController* NewPC)
{
	Super::SwapPlayerControllers(OldPC, NewPC);
	auto PC = Cast<AMyPlayerController>(NewPC);

	if (PC != nullptr) {
		if (PC->NetPlayerIndex < m_PlayerControllers.Num()) {
			m_PlayerControllers[PC->NetPlayerIndex] = PC;
		}
		else {
			m_PlayerControllers.Push(PC);
		}
	}
}


