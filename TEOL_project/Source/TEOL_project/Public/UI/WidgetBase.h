// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class TEOL_PROJECT_API UWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public: 
	void OnStartShowUI();

	UFUNCTION(BlueprintImplementableEvent)
	void OnStartShowUI_BP();

	void OnStartHideUI();

	UFUNCTION(BlueprintImplementableEvent)
	void OnStartHideUI_BP();
	
};
