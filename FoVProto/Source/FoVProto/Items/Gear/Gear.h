// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gear.generated.h"

UCLASS()
class FOVPROTO_API AGear : public AActor
{
private:

	GENERATED_BODY()
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	AGear();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
