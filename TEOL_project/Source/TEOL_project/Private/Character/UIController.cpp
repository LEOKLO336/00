#include "UIController.h"
#include "WidgetBase.h"

AUIController::AUIController()
{

}

void AUIController::BeginPlay()
{
	m_pUIManger = NewObject<URoleUIManger>(this, m_tUIManger);
	if (m_tUIManger)
	{
		InitUI();
	}
	Super::BeginPlay();
}

void AUIController::InitUI()
{
	if (IsValid(m_pUIManger))
	{
		m_pUIManger->InitialUI(this);
	}
}

void AUIController::ShowUI(EUIType eType)
{
	if (IsValid(m_pUIManger))
	{
		m_pUIManger->ShowUI(eType);
	}
}

void AUIController::HideUI(EUIType eType)
{
	if (IsValid(m_pUIManger))
	{
		m_pUIManger->HideUI(eType);
	}
}

UWidgetBase* AUIController::GetUI(EUIType eType)
{
	if (IsValid(m_pUIManger))
	{
		return m_pUIManger->GetUI(eType);
	}
	return nullptr;
}
