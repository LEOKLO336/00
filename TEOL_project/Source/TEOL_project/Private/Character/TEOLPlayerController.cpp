#include "TEOLPlayerController.h"

ATEOLPlayerController::ATEOLPlayerController()
{

}

void ATEOLPlayerController::StartChangeRoleState(FName nkStateID)
{
	m_StartChangeRoleStateDelegate.Broadcast(nkStateID);
}

void ATEOLPlayerController::EndRoleState(FName nkStateID)
{
	m_EndRoleStateDelegate.Broadcast(nkStateID);
}

void ATEOLPlayerController::PickUpItem(FName nkItemID)
{
	m_PlayerPickUpItemDelegate.Broadcast(nkItemID);
}

