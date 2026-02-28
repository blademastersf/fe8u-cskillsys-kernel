#include "common-chax.h"
#include "skill-system.h"
#include "constants/skills.h"

const u16 gConstSkillTable_Job[0x100][2] = {
	[CLASS_HARVEY_LORD] = {
//#if (defined(SID_COMBAT_VitalReckoning) && COMMON_SKILL_VALID(SID_COMBAT_VitalReckoning))
//		SID_COMBAT_VitalReckoning,
//#endif
	},

	[CLASS_LILICA_LORD] = {
//#if (defined(SID_Pass) && COMMON_SKILL_VALID(SID_Pass))
//		SID_Pass,
//#endif

//#if (defined(SID_DivineReprieve) && COMMON_SKILL_VALID(SID_DivineReprieve))
//		SID_DivineReprieve,
//#endif
	},
};
