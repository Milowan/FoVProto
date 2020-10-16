// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GearComponent.h"
#include "WeaponComponent.h"
#include "Loadout.generated.h"

UCLASS()
class FOVPROTO_API ALoadout : public AActor
{
private:

	GENERATED_BODY()

	UGearComponent* gear;
	UWeaponComponent* weapons;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	ALoadout();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UGearComponent* GetGear();
	UWeaponComponent* GetWeapon();

};
