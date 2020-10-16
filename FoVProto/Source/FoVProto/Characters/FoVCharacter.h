// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "StatsComponent.h"
#include "Loadout/LoadoutComponent.h"
#include "../Types.h"
#include "FoVCharacter.generated.h"

UCLASS()
class FOVPROTO_API AFoVCharacter : public ACharacter
{
private:

	GENERATED_BODY()

	ULoadoutComponent* loadoutComponent;
	UStatsComponent* statsComponent;
	UWeaponComponent* equipedWeapon;

	Rank characterRank;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this character's properties
	AFoVCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	ULoadoutComponent* GetLoadoutComponent();
	UFUNCTION(BlueprintCallable)
	UStatsComponent* GetStatsComponent();
	UFUNCTION(BlueprintCallable)
	UWeaponComponent* GetEquipedWeaponComponent();

	UFUNCTION(BlueprintCallable)
	TEnumAsByte<Rank> GetRank();
	UFUNCTION(BlueprintCallable)
	void SetRank(TEnumAsByte<Rank> rank);

};
