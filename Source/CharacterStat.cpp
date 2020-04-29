#include "pch.h"
#include <iostream>
#include <algorithm>
#include "../Include/CharacterStat.h"
#include "../Include/Helper.h"

CharacterStat::CharacterStat(float baseValueIn)
{
	baseValue = baseValueIn;
}

float CharacterStat::GetValue()
{
	if (isDirty)
	{
		_value = CalculateFinalValue();
		isDirty = false;
	}
	return _value;
}

void CharacterStat::AddModifier(StatModifier mod)
{
	isDirty = true;
	statModifiers.push_back(mod);
	std::sort(statModifiers.begin(), statModifiers.end(), CompareModifierOrder);
}

int CharacterStat::CompareModifierOrder(StatModifier a, StatModifier b)
{
	if (a.order < b.order)
	{
		return -1;
	}
	else if (a.order > b.order)
	{
		return 1;
	}
	return 0; // If equal
}

bool CharacterStat::RemoveModifier(StatModifier mod)
{
	// TODO: Overload std::find for StatModifier type
	/*	isDirty = true;
	
	std::vector<int>::iterator position = std::find(statModifiers.begin(), statModifiers.end(), mod);
	if (position != statModifiers.end())
	{
		statModifiers.erase(position);
		return true;
	}
	else
	{
		return false;
	}*/
	return false;
}

float CharacterStat::CalculateFinalValue()
{
	float finalValue = baseValue;
	float sumPercentAdd = 0;

	for (int i = 0; i < statModifiers.size(); i++)
	{
		StatModifier mod = statModifiers[i];

		// Flat stats (e.g. +20) should simply be added
		if (mod.type == StatModType::Flat)
		{
			finalValue += mod.value;
		}

		// 
		else if (mod.type == StatModType::PercentAdd)
		{
			sumPercentAdd += mod.value;

			// If we're at the end of the list OR the next modifier isn't of this type
			if (i + 1 >= statModifiers.size() || statModifiers[i + 1].type != StatModType::PercentAdd)
			{
				finalValue *= 1 + sumPercentAdd; // Multiply the sum with the "finalValue"
				sumPercentAdd = 0; // Reset the sum back to 0
			}
		}

		// Percentage stats (e.g. 0.15 or 15%) need to be added to 1 and then multiplied 
		else if (mod.type == StatModType::PercentMult)
		{
			finalValue *= 1 + mod.value;
		}
	}

	// Round to avoid float calculation errors:
	return helper::Round(finalValue, 4); // TODO: Create Test Case for this
}