#ifndef _ARMOUR_LIST_H
#define _ARMOUR_LIST_H

#include "Equipment.h"

namespace armour
{
	Equipment priest_mask("Priest Mask", "Imbued with draconic power.", 0.5, Slot::Face, Stats(0, 0, 0, 1, 1, 0));
	Equipment dark_pauldron("Dark Pauldron", "For the Edge Lord in need.", 0.4, Slot::Shoulders, Stats(1, 0, 1, 0, 0, 0));
	Equipment wizards_robe("Wizard's Robe", "Yer a wizard.", 0.7, Slot::Torso, Stats(0, 0, 0, 1, 0, 1));
}

#endif
