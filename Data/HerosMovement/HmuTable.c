#include "common-chax.h"
#include "heros-movement.h"

const u8 gHerosMovementTypes[0x100] = {
	[CLASS_LILICA_LORD] = HMU_PIVOT,

	[CLASS_MAGE] = HMU_REPOSITION,

	[CLASS_PALADIN] = HMU_SWAP,

	[CLASS_FIGHTER] = HMU_SHOVE,

	[CLASS_GENERAL] = HMU_SMITE,

};
