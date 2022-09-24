// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiPLayerGameMode.h"

void AMultiPLayerGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) {
	Super::InitGame(MapName, Options, ErrorMessage);
	UE_LOG(LogTemp, Warning, TEXT("Hello"));
	
}

void AMultiPLayerGameMode::InitGameState() {
	UE_LOG(LogTemp, Warning, TEXT("GG"));
}

AMultiPLayerGameMode::AMultiPLayerGameMode() {
	
}