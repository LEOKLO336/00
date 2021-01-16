#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UIController.h"
#include "TEOLPlayerController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStartChangeRoleState, FName, nkStateID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndRoleState, FName, nkStateID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerPickUpItem, FName, nkItemID);

UCLASS()
class TEOL_PROJECT_API ATEOLPlayerController : public AUIController
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnStartChangeRoleState m_StartChangeRoleStateDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnEndRoleState m_EndRoleStateDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnPlayerPickUpItem m_PlayerPickUpItemDelegate;

public:

	ATEOLPlayerController();

	//For Debug
	UFUNCTION(BlueprintCallable)
	void StartChangeRoleState(FName nkStateID);

	//For Debug
	UFUNCTION(BlueprintCallable)
	void EndRoleState(FName nkStateID);

	//For Debug
	UFUNCTION(BlueprintCallable)
	void PickUpItem(FName nkItemID);
	
};
