// Fill out your copyright notice in the Description page of Project Settings.


#include "FoVGameInstance.h"

UFoVGameInstance* UFoVGameInstance::instance = NULL;

void UFoVGameInstance::Init()
{
	squadInterface = Cast<ISquadInterface>(GetWorld()->SpawnActor(squadBP));
	instance = this;
}

UFoVGameInstance* UFoVGameInstance::GetInstance()
{
	return instance;
}

ISquadInterface* UFoVGameInstance::GetSquadInterface()
{
	return squadInterface;
}