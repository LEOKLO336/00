// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPCAIControllerBase.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EAISubComponent : uint8
{
	eAISC_NONE,
	eAISC_Partol,
	eAISC_Guard
};


UCLASS()
class TEOL_PROJECT_API ANPCAIControllerBase : public AAIController
{
	GENERATED_BODY()

protected:

	UPROPERTY()
	TMap<EAISubComponent, class UAIComponentBase*> m_mapSubComponent;

public:
	ANPCAIControllerBase();

	void AddSubComponentToManger(EAISubComponent eType, class UAIComponentBase* pComponent);

	UFUNCTION(BlueprintCallable)
	UAIComponentBase* GetSubComponent(EAISubComponent eType);

	template<class T>
	T* GetSubComponent(EAISubComponent eType) { return Cast<T>(GetSubComponent(eType)); }


protected:
	virtual void BeginPlay() override;

	virtual void InitAIComponents();

	
	
};
