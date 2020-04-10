#include "pch.h"
#include <iostream>
#include "../Include/Stats.h"
#include "../Include/Item.h"
#include "../Include/Equipment.h"
#include "../Include/Skill.h"
#include "../Include/CharacterClass.h"

int main()
{
	Equipment equipment_1("Priest Mask", "Imbued with draconic power.", 0.5, Slot::Face, Stats(0, 0, 0, 1, 1, 0));
	Skill skill_1("Fire Ball", "Blessed be thy fire ball.", false, true, std::make_pair(50, 100), MagicType::Fire);

	CharacterClass rogue_1(ClassType::Rogue);

	return 0;
}
