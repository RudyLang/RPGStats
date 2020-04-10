#include "pch.h"
#include "../Include/Skill.h"

Skill::Skill(std::string nameIn, std::string descriptionIn, bool passiveIn, bool activeIn, std::pair <size_t, size_t> damangeRangeIn, MagicType magicTypeIn) 
{
	name = nameIn;
	description = descriptionIn;
	passive = passiveIn;
	active = activeIn;
	damageRange = damangeRangeIn;
	magicType = magicTypeIn;

	std::cout << "Skill initialized!" << "\n";
}