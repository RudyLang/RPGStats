#ifndef STAT_MODIFIER_H
#define STAT_MODIFIER_H

/* It's important to track the order of which a stat is applied.
*  If a flat stat is added after a percent stat, that percentage will
*  be applied to that item or skill!
*/

#include "StatModType.h"
#include "SourceType.h"

class StatModifier
{
public:
	float value;
	StatModType type;
	int order;
	SourceType source;

	StatModifier(float valueIn, StatModType typeIn, int orderIn, SourceType sourceIn)
	{
		value = valueIn;
		type = typeIn;
		order = orderIn;
		source = sourceIn;
	}

	// Now we can set the order of the modifiers
	StatModifier(float valueIn, StatModType typeIn) : StatModifier(valueIn, typeIn, static_cast<int>(typeIn), SourceType::None) { } // Delegating Constructor

	StatModifier(float valueIn, StatModType typeIn, int orderIn) : this(valueIn, typeIn, orderIn, SourceType::None) { }

	StatModifier(float valueIn, StatModType typeIn, SourceType sourceIn) : this(valueIn, typeIn, static_cast<int>(typeIn), sourceIn) { }
};

#endif
