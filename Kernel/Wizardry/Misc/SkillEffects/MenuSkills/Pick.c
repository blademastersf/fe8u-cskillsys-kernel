#include "common-chax.h"
#include "skill-system.h"

LYN_REPLACE_CHECK(PickCommandUsability);
u8 PickCommandUsability(const struct MenuItemDef *def, int number)
{
	if (gActiveUnit->state & US_CANTOING)
		return MENU_NOTSHOWN;

#if !CHAX
	if (gActiveUnit->pClassData->number != CLASS_ROGUE || gActiveUnit->pClassData->number != CLASS_TRICKSTER || gActiveUnit->pClassData->number != CLASS_SPY || gActiveUnit->pClassData->number != CLASS_NINJA || gActiveUnit->pClassData->number != CLASS_ASSASSIN || gActiveUnit->pClassData->number != CLASS_THIEF || gActiveUnit->pClassData->number != CLASS_HIGHWAYMEN)
		return MENU_NOTSHOWN;
#endif

	MakeTargetListForPick(gActiveUnit);
	if (GetSelectTargetCount() == 0)
		return MENU_NOTSHOWN;

	return MENU_ENABLED;
}
