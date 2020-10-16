// Fill out your copyright notice in the Description page of Project Settings.


#include "SubordinateCharacter.h"

ASubordinateCharacter::ASubordinateCharacter()
{
	SetRank(Rank::SUBORDINATE);
}

FVector ASubordinateCharacter::GetPositionInFormation()
{
	return positionInFormation;
}

void ASubordinateCharacter::SetPositionInFormation(FVector position)
{
	positionInFormation = position;
}

AFoVCharacter* ASubordinateCharacter::GetTarget()
{
	return target;
}

void ASubordinateCharacter::SetTarget(AFoVCharacter* aTarget)
{
	target = aTarget;
}