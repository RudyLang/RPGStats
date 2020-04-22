#include <algorithm>
#include "../Include/Helper.h"
#include "../Include/CharacterStat.h"

CharacterStat::CharacterStat(float baseValueIn)
{
	baseValue = baseValueIn;
}

void CharacterStat::GetValue()
{
	return CalculateFinalValue();
}

void CharacterStat::AddModifier(StatModifier mod)
{
	statModifiers.push_back(mod);
}

bool CharacterStat::RemoveModifier(StatModifier mod)
{
	/*std::vector<int>::iterator position = std::find(statModifiers.begin(), statModifiers.end(), mod);
	if (position != statModifiers.end())
	{
		statModifiers.erase(position);
		return true;
	}
	else
	{
		return false;
	}*/
}

float CharacterStat::CalculateFinalValue()
{
	float finalValue = baseValue;

	for (int i = 0; i < statModifiers.size(); i++)
	{
		finalValue += statModifiers[i].value;
	}

	// Round to avoid float calculation errors:
	return helper::Round(finalValue, 4); // TODO: Create Test Case for this
}