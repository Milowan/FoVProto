// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterGroupComponent.h"

// Sets default values for this component's properties
UCharacterGroupComponent::UCharacterGroupComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterGroupComponent::BeginPlay()
{
	Super::BeginPlay();
	group = Cast<ACharacterGroup>(GetWorld()->SpawnActor(ACharacterGroup::StaticClass()));
}


// Called every frame
void UCharacterGroupComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

ACharacterGroup* UCharacterGroupComponent::GetGroup()
{
	return group;
}

void UCharacterGroupComponent::SetGroup(ACharacterGroup* aGroup)
{
	group = aGroup;
}