#include "pch.h"
#include <iostream>
#include "../Include/Equipment.h"

Equipment::Equipment(std::string nameIn, std::string descriptionIn, float modifierIn, Slot slotIn, Stats statsIn)
{
	name = nameIn;
	description = descriptionIn;
	modifier = modifierIn;
	slot = slotIn;
	stats = statsIn;
}