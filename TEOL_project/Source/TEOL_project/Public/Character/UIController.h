#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RoleUIManger.h"
#include "UIController.generated.h"


UCLASS()
class TEOL_PROJECT_API AUIController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class URoleUIManger> m_tUIManger = { nullptr };

	UPROPERTY()
	URoleUIManger* m_pUIManger;

public:
	AUIController();

	virtual void BeginPlay() override;

	void InitUI();

	UFUNCTION(BlueprintCallable)
	void ShowUI(EUIType eType);

	UFUNCTION(BlueprintCallable)
	void HideUI(EUIType eType);

	UFUNCTION(BlueprintCallable)
	UWidgetBase* GetUI(EUIType eType);
	
};
