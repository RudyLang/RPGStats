#ifndef _CHARACTER_H
#define _CHARACTER_H

#include "CharacterClass.h"

class Character
{
public:
	std::string characterName;
	CharacterClass characterClass;

	Character();
	Character(std::string nameIn, CharacterClass& classIn);
	void SetName(std::string nameIn);
	void SetClass(CharacterClass& classIn);
};

#endif
