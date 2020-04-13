#ifndef _ARMOUR_LIST_H
#define _ARMOUR_LIST_H

/* Predefined instances of Equipment.
*  Identified using the "armour" namespace.
*  Inherits properties from the Item class.
*/

#include "Equipment.h"

namespace armour
{
	Equipment priest_mask("Priest Mask", "Imbued with draconic power.", 0.5F, Slot::Face, Stats(0, 0, 0, 1, 1, 0));
	Equipment dark_pauldron("Dark Pauldron", "For the Edge Lord in need.", 0.4F, Slot::Shoulders, Stats(1, 0, 1, 0, 0, 0));
	Equipment wizards_robe("Wizard's Robe", "Yer a wizard.", 0.7F, Slot::Torso, Stats(0, 0, 0, 1, 0, 1));
}

#endif
