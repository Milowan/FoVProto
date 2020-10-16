// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponItem.h"

AWeapon* AWeaponItem::GetWeapon()
{
	if (weapon == NULL)
	{
		weapon = Cast<AWeapon>(GetGameInstance()->GetWorld()->SpawnActor(weaponBP));
	}

	return weapon;
}