#ifndef _STATS_H
#define _STATS_H

#include <iostream>
#include <vector>
#include "Stats.h"
#include "Skill.h"
#include "ClassType.h"

class CharacterClass
{
public:
	std::string className;
	Stats classStats;
	std::vector<Skill> classSkills; // TODO: Create a set of predefined skills?


	CharacterClass(ClassType selectedClass);
};

#endif
