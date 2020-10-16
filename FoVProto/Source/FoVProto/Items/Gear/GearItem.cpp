// Fill out your copyright notice in the Description page of Project Settings.


#include "GearItem.h"

AGear* AGearItem::GetGear()
{
	if (gear == NULL)
	{
		gear = Cast<AGear>(GetGameInstance()->GetWorld()->SpawnActor(gearBP));
	}

	return gear;
}