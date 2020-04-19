#ifndef CHARACTER_STAT_H
#define CHARACTER_STAT_H

// Reference: https://forum.unity.com/threads/tutorial-character-stats-aka-attributes-system.504095/

#include <vector>
#include "StatModifier.h"

class CharacterStat
{
public:
	float baseValue;

	CharacterStat(float baseValueIn);
	void GetValue();
	void AddModifier(StatModifier mod);
	bool RemoveModifier(StatModifier mod);
	float CalculateFinalValue();

private:
	std::vector<StatModifier> statModifier;
};

#endif
