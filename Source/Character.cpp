#include "pch.h"
#include <iostream>
#include "../Include/Character.h"

Character::Character() { };

Character::Character(std::string nameIn, CharacterClass& classIn)
{
	characterName = nameIn;
	characterClass = classIn;
}

void Character::SetName(std::string nameIn)
{
	characterName = nameIn;
}

void Character::SetClass(CharacterClass& classIn)
{
	characterClass = classIn;
}