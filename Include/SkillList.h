#ifndef _SKILL_LIST_H
#define _SKILL_LIST_H

#include "Skill.h"

namespace combat
{
	/* MELEE */

	/* MAGIC */
	Skill thunder_wave("Thunder Wave", "Hold onto your hat!", false, true, std::make_pair(60, 80), MagicType::Electric);
	Skill fire_ball("Fire Ball", "Blessed be thy fire ball.", false, true, std::make_pair(50, 100), MagicType::Fire);
	Skill acid_cage("Acid Cage", "Rip.", false, true, std::make_pair(20, 70), MagicType::Acid);

}
#endif
