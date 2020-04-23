#ifndef STAT_MODIFIER_H
#define STAT_MODIFIER_H

#include "StatModType.h"

class StatModifier
{
public:
	float value;
	StatModType type;

	StatModifier(float valueIn, StatModType typeIn)
	{
		value = valueIn;
		type = typeIn;
	}
};

#endif
