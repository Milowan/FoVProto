// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Squad/Squad.h"
#include "Side.generated.h"

UCLASS()
class FOVPROTO_API ASide : public AActor
{
private:

	GENERATED_BODY()

	static const int MAXSQUADS = 5;
	ASquad* squads[MAXSQUADS];
	
protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	ASide();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<ACharacter*> GetAllCharacters();

};
