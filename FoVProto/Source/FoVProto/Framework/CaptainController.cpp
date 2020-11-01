// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptainController.h"

void ACaptainController::BeginPlay()
{
	Super::BeginPlay();

}

TSubclassOf<ACharacter> ACaptainController::GetSelectedCharacter()
{
	return Cast<ASquad>(Cast<UFoVGameInstance>(GetLocalPlayer()->GetGameInstance())->GetSquadInterface())->GetCaptainComponent()->GetCharacterID()->GetBP();
}