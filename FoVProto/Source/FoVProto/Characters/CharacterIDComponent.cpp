// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterIDComponent.h"

// Sets default values for this component's properties
UCharacterIDComponent::UCharacterIDComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterIDComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UCharacterIDComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

ACharacterID* UCharacterIDComponent::GetCharacterID()
{
	if (characterIDBP != NULL && characterID == NULL && UFoVGameInstance::GetInstance() != NULL)
	{
		AActor* actor = UFoVGameInstance::GetInstance()->GetWorld()->SpawnActor(characterIDBP);
		characterID = Cast<ACharacterID>(actor);
	}
	return characterID;
}

void UCharacterIDComponent::SetCharacterID(ACharacterID* ID)
{
	characterID = ID;
}