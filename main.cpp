#include "pch.h"
#include <iostream>
#include "Stats.h"
#include "Item.h"
#include "Equipment.h"
#include "Skill.h"

int main()
{
	Stats characterStats;
	Stats presetStats(1, 2, 3, 4, 5, 6);

	Equipment equipment_1("Priest Mask", "Imbued with draconic power.", 0.5, Slot::Face, Stats(0, 0, 0, 1, 1, 0));
	Skill skill_1("Fire Ball", "Blessed be thy fire ball.", false, true, std::make_pair(50, 100), MagicType::Fire);

	return 0;
}
