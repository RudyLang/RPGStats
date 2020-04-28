#ifndef STAT_MODIFIER_H
#define STAT_MODIFIER_H

/* It's important to track the order of which a stat is applied.
*  If a flat stat is added after a percent stat, that percentage will
*  be applied to that item or skill!
*/

#include "StatModType.h"

class StatModifier
{
public:
	float value;
	StatModType type;
	int order;

	StatModifier(float valueIn, StatModType typeIn, int orderIn)
	{
		value = valueIn;
		type = typeIn;
		order = orderIn;
	}

	// Now we can set the order of the modifiers
	StatModifier(float valueIn, StatModType typeIn) : StatModifier(valueIn, typeIn, static_cast<int>(typeIn)) { } // Delegating Constructor
};

#endif
