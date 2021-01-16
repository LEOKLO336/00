// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCAIControllerBase.h"
#include "AI/AIComponentBase.h"

ANPCAIControllerBase::ANPCAIControllerBase()
{

}

void ANPCAIControllerBase::AddSubComponentToManger(EAISubComponent eType, UAIComponentBase* pComponent)
{
	m_mapSubComponent.Add(eType, pComponent);
}

UAIComponentBase* ANPCAIControllerBase::GetSubComponent(EAISubComponent eType)
{
	UAIComponentBase* pFind = m_mapSubComponent.FindRef(eType);
	return pFind;
}

void ANPCAIControllerBase::BeginPlay()
{
	Super::BeginPlay();
	InitAIComponents();
}

void ANPCAIControllerBase::InitAIComponents()
{

}
