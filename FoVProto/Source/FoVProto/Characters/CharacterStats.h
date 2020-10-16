// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterStats.generated.h"

UCLASS()
class FOVPROTO_API ACharacterStats : public AActor
{
private:

	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	int strength;
	UPROPERTY(EditAnywhere)
	int dexterity;
	UPROPERTY(EditAnywhere)
	int endurance;
	UPROPERTY(EditAnywhere)
	int intelligence;
	UPROPERTY(EditAnywhere)
	int perception;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	ACharacterStats();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int GetStrength();
	int GetDexterity();
	int GetEndurance();
	int GetIntelligence();
	int GetPerception();
};
