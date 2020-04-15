#ifndef SKILL_H
#define SKILL_H

/* Class used to describe skills
*  Skills can be passive or active, or both.
*  They can also be associated with a type of magic.
*/

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
	std::string GetSkillName();
};

#endif
