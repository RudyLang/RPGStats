#include "pch.h"
#include <iostream>
#include "Stats.h"
#include "Item.h"
#include "Equipment.h"

int main()
{
	Stats characterStats;
	Stats presetStats(1, 2, 3, 4, 5, 6);

	Equipment equipment_1("Priest Mask", "Imbued with draconic power.", 0.5, Slot::Face, Stats(0, 0, 0, 1, 1, 0));

	return 0;
}
