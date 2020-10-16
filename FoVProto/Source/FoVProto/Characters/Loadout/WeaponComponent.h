// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../../Items/Weapons/WeaponItem.h"
#include "WeaponComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FOVPROTO_API UWeaponComponent : public UActorComponent
{
private:

	GENERATED_BODY()

	AWeaponItem* weapon1;
	AWeaponItem* weapon2;
	AWeaponItem* weapon3;
	AWeaponItem* weapon4;


protected:

	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	// Sets default values for this component's properties
	UWeaponComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	AWeaponItem* GetWeapon1();
	void SetWeapon1(AWeaponItem* weapon);
	AWeaponItem* GetWeapon2();
	void SetWeapon2(AWeaponItem* weapon);
	AWeaponItem* GetWeapon3();
	void SetWeapon3(AWeaponItem* weapon);
	AWeaponItem* GetWeapon4();
	void SetWeapon4(AWeaponItem* weapon);
};
