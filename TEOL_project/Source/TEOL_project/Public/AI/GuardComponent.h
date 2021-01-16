// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AI/AIComponentBase.h"
#include "GuardComponent.generated.h"

/**
 * 
 */
UCLASS()
class TEOL_PROJECT_API UGuardComponent : public UAIComponentBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* m_pGuardTarget;

public:
	// Sets default values for this component's properties
	UGuardComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
