#include "pch.h"
#include <iostream>
#include "MagicType.h"

class Skill
{
public:
	std::string name;
	std::string description;
	bool passive;
	bool active;
	std::pair <size_t, size_t> damageRange;
	MagicType magicType;

	Skill (std::string nameIn, std::string descriptionIn, bool passiveIn, bool activeIn, std::pair <size_t, size_t> damangeRangeIn, MagicType magicTypeIn);
};
