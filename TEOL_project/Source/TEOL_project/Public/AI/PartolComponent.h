// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AI/AIComponentBase.h"
#include "Engine/TargetPoint.h"
#include "PartolComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEOL_PROJECT_API UPartolComponent : public UAIComponentBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<ATargetPoint*> m_arrPartolPoint;

public:	
	// Sets default values for this component's properties
	UPartolComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


		
};
