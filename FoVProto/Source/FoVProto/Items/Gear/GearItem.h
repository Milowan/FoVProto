// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Item.h"
#include "Gear.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "GearItem.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API AGearItem : public AItem
{
private:

	GENERATED_BODY()

	AGear* gear;

protected:

	TSubclassOf<AGear> gearBP;

public:

	AGear* GetGear();
};
