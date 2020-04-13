#include "pch.h"
#include <iostream>
#include "../Include/CharacterClass.h"
#include "../Include/Character.h"

int main()
{
	std::string selectedName = "Rudy";
	CharacterClass selectedClass(ClassType::Wizard);
	Character character(selectedName, selectedClass);

	return 0;
}
