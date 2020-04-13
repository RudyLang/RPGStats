#ifndef _CHARACTER_CLASS_H
#define _CHARACTER_CLASS_H

/* A characters class defines a set of initial stats,
*  skills, and equipment.
*/

#include <iostream>
#include <vector>
#include "Stats.h"
#include "Skill.h"
#include "Equipment.h"
#include "ClassType.h"

class CharacterClass
{
public:
	std::string className;
	Stats classStats;
	std::vector<Skill> classSkills;
	std::vector<Equipment> classEquipment;

	CharacterClass();
	CharacterClass(ClassType selectedClass);
	void AddSkill(Skill& newSkill);
	void AddEquipment(Equipment& newEquipment);
};

#endif
