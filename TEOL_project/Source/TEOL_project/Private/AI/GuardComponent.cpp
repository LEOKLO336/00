// Fill out your copyright notice in the Description page of Project Settings.


#include "GuardComponent.h"

UGuardComponent::UGuardComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UGuardComponent::BeginPlay()
{
	Super::BeginPlay();
	ANPCAIControllerBase* pAIBAse = Cast<ANPCAIControllerBase>(GetOwner());
	if (pAIBAse)
	{
		pAIBAse->AddSubComponentToManger(m_eComponentType, this);
	}
}
