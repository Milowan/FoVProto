// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamSlotWidget.h"

void UTeamSlotWidget::SetTeam(ATeam* aTeam)
{
	team = aTeam;
}

ATeam* UTeamSlotWidget::GetTeam()
{
	return team;
}