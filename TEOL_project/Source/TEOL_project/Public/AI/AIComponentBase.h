// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AI/NPCAIControllerBase.h"
#include "AIComponentBase.generated.h"


UCLASS(ClassGroup = AIComponent, BlueprintType, Blueprintable)
class TEOL_PROJECT_API UAIComponentBase : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	class ANPCAIControllerBase* m_pAIBase = { nullptr };

public:
	UPROPERTY(EditDefaultsOnly)
	EAISubComponent m_eComponentType = EAISubComponent::eAISC_NONE;

public:	
	// Sets default values for this component's properties
	UAIComponentBase();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
