// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WidgetBase.h"
#include "RoleUIManger.generated.h"

UENUM(BlueprintType)
enum class EUIType : uint8
{
	eUIT_None,
	eUIT_BloodBar,
	eUIT_PauseMenu,

	eUIT_Num
};

USTRUCT(BlueprintType)
struct FUIInfo
{
	GENERATED_USTRUCT_BODY();

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UWidgetBase> m_pWidgetBase;

	UPROPERTY(EditDefaultsOnly)
	int32 m_nLayer;

	UPROPERTY(EditDefaultsOnly)
	ESlateVisibility m_eDefaultVisibility = ESlateVisibility::Collapsed;

};

UCLASS(Abstract, Blueprintable)
class TEOL_PROJECT_API URoleUIManger : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly)
	TMap<EUIType, FUIInfo> m_mapUIData;

	UPROPERTY()
	TMap<EUIType, UWidgetBase*> m_mapWidget;

public:
	void InitialUI(class APlayerController* pOwnerController);

	void ShowUI(EUIType eType);

	void HideUI(EUIType eType);

	UWidgetBase* GetUI(EUIType eType);

};
