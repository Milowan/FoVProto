// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponComponent.h"

// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

AWeaponItem* UWeaponComponent::GetWeapon1()
{
	return weapon1;
}

void UWeaponComponent::SetWeapon1(AWeaponItem* weapon)
{
	weapon1 = weapon;
}

AWeaponItem* UWeaponComponent::GetWeapon2()
{
	return weapon2;
}

void UWeaponComponent::SetWeapon2(AWeaponItem* weapon)
{
	weapon2 = weapon;
}

AWeaponItem* UWeaponComponent::GetWeapon3()
{
	return weapon3;
}

void UWeaponComponent::SetWeapon3(AWeaponItem* weapon)
{
	weapon3 = weapon;
}

AWeaponItem* UWeaponComponent::GetWeapon4()
{
	return weapon4;
}

void UWeaponComponent::SetWeapon4(AWeaponItem* weapon)
{
	weapon4 = weapon;
}