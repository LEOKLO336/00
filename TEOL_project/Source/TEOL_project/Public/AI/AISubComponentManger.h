// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AI/NPCAIControllerBase.h"
#include "AISubComponentManger.generated.h"

/**
 * 
 */



UCLASS()
class TEOL_PROJECT_API UAISubComponentManger : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TMap<EAISubComponent, TSubclassOf<class UActorComponent>> m_mapSubComponents;


};
