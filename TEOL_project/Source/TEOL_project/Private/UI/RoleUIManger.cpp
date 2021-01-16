#include "RoleUIManger.h"
#include "WidgetBase.h"

void URoleUIManger::InitialUI(class APlayerController* pOwnerController)
{
	TArray<EUIType> arrUIType;
	m_mapUIData.GenerateKeyArray(arrUIType);
	for (EUIType eType : arrUIType)
	{
		FUIInfo oInfo = m_mapUIData[eType];
		UWidgetBase* pNewWidget = CreateWidget<UWidgetBase>(pOwnerController, oInfo.m_pWidgetBase);
		if (pNewWidget)
		{
			pNewWidget->AddToViewport(oInfo.m_nLayer);
			pNewWidget->SetVisibility(ESlateVisibility::Collapsed);
			m_mapWidget.Add(eType, pNewWidget);
		}
	}
}

void URoleUIManger::ShowUI(EUIType eType)
{
	if (m_mapWidget.Contains(eType))
	{
		if (IsValid(m_mapWidget[eType]))
		{
			m_mapWidget[eType]->SetVisibility(m_mapUIData[eType].m_eDefaultVisibility);
			m_mapWidget[eType]->OnStartShowUI();
		}
	}
}

void URoleUIManger::HideUI(EUIType eType)
{
	if (m_mapWidget.Contains(eType))
	{
		if (IsValid(m_mapWidget[eType]))
		{
			m_mapWidget[eType]->SetVisibility(ESlateVisibility::Collapsed);
			m_mapWidget[eType]->OnStartHideUI();
		}
	}
}

UWidgetBase* URoleUIManger::GetUI(EUIType eType)
{
	if (m_mapWidget.Contains(eType))
	{
		if (IsValid(m_mapWidget[eType]))
		{
			return m_mapWidget[eType];
		}
	}
	return nullptr;
}
