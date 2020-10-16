// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterGroup.h"

ACharacterGroup::ACharacterGroup() :
	Super()
{
	character1 = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character1"));
	character2 = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character2"));
	character3 = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character3"));
	character4 = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character4"));
	character5 = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character5"));
	character6 = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character6"));
	character7 = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character7"));
	character8 = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character8"));
}

UCharacterIDComponent* ACharacterGroup::GetCharacter(int index)
{
	UCharacterIDComponent* retVal = NULL;

	if (index == 0)
	{
		retVal = character1;
	}
	else if (index == 1)
	{
		retVal = character2;
	}
	else if (index == 2)
	{
		retVal = character3;
	}
	else if (index == 3)
	{
		retVal = character4;
	}
	else if (index == 4)
	{
		retVal = character5;
	}
	else if (index == 5)
	{
		retVal = character6;
	}
	else if (index == 6)
	{
		retVal = character7;
	}
	else if (index == 7)
	{
		retVal = character8;
	}

	return retVal;
}