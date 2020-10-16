// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultSquad.h"

void ADefaultSquad::BeginPlay()
{
	Super::BeginPlay();
	ACharacterGroup* group = GetCharacters()->GetGroup();
	group->GetCharacter(0)->SetCharacterID(Cast<ACharacterID>(GetWorld()->SpawnActor(character1BP)));
	group->GetCharacter(1)->SetCharacterID(Cast<ACharacterID>(GetWorld()->SpawnActor(character2BP)));
	group->GetCharacter(2)->SetCharacterID(Cast<ACharacterID>(GetWorld()->SpawnActor(character3BP)));
	group->GetCharacter(3)->SetCharacterID(Cast<ACharacterID>(GetWorld()->SpawnActor(character4BP)));
	group->GetCharacter(4)->SetCharacterID(Cast<ACharacterID>(GetWorld()->SpawnActor(character5BP)));
	group->GetCharacter(5)->SetCharacterID(Cast<ACharacterID>(GetWorld()->SpawnActor(character6BP)));
	group->GetCharacter(6)->SetCharacterID(Cast<ACharacterID>(GetWorld()->SpawnActor(character7BP)));
	group->GetCharacter(7)->SetCharacterID(Cast<ACharacterID>(GetWorld()->SpawnActor(character8BP)));
	GetCaptainComponent()->SetCharacterID(Cast<ACharacterID>(GetWorld()->SpawnActor(captainBP)));
}