#ifndef _STATS_H
#define _STATS_H

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


	CharacterClass(ClassType selectedClass);
	void AddSkill(Skill& newSkill);
	void AddEquipment(Equipment& newEquipment);
};

#endif
