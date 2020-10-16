// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Item.h"
#include "Weapon.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "WeaponItem.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API AWeaponItem : public AItem
{
private:

	GENERATED_BODY()

	AWeapon* weapon;

protected:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AWeapon> weaponBP;

public:

	AWeapon* GetWeapon();
};
