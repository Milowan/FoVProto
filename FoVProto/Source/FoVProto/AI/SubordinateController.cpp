// Fill out your copyright notice in the Description page of Project Settings.


#include "SubordinateController.h"

ASubordinateController::ASubordinateController(const FObjectInitializer& oi) :
	AAIController(oi)
{
	perception = CreateDefaultSubobject<UAIPerceptionComponent>(FName(TEXT("Perception")));
}