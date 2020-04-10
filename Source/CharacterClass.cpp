#include "pch.h"
#include "../Include/CharacterClass.h"

CharacterClass::CharacterClass(ClassType selectedClass)
{
	Stats stats;

	switch (selectedClass)
	{
	case ClassType::Warrior:
		className = "Warrior";
		stats.SetStats(18, 12, 12, 12, 12, 12);
		classStats = stats;
		std::cout << "Welcome Warrior!" << "\n";
		break;
	
	case ClassType::Rogue:
		className = "Rogue";
		stats.SetStats(12, 18, 12, 12, 12, 12);
		classStats = stats;
		std::cout << "Welcome Rogue!" << "\n";
		break;

	case ClassType::Barbarian:
		className = "Barbarian";
		stats.SetStats(12, 12, 18, 12, 12, 12);
		classStats = stats;
		std::cout << "Welcome Barbarian!" << "\n";
		break;

	case ClassType::Wizard:
		className = "Wizard";
		stats.SetStats(12, 12, 12, 18, 12, 12);
		classStats = stats;
		std::cout << "Welcome Wizard!" << "\n";
		break;

	case ClassType::Cleric:
		className = "Cleric";
		stats.SetStats(12, 12, 12, 12, 18, 12);
		classStats = stats;
		std::cout << "Welcome Cleric!" << "\n";
		break;

	case ClassType::Bard:
		className = "Bard";
		stats.SetStats(12, 12, 12, 12, 12, 18);
		classStats = stats;
		std::cout << "Welcome Bard!" << "\n";
		break;

	default:
		className = "Jack";
		stats.SetStats(15, 15, 15, 15, 15, 15);
		classStats = stats;
		std::cout << "Welcome Jack of all Trades!" << "\n";
		break;
	}


}