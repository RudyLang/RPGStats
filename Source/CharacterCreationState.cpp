#include "pch.h"
#include <iostream>
#include "../Include/CharacterCreationState.h"
#include "../Include/CharacterClass.h"
#include "../Include/Character.h"
#include "../Include/Helper.h"

CharacterCreationState::CharacterCreationState(GameDataRef data) : _data(data)
{

}

void CharacterCreationState::Init()
{
	// TODO: Ask for character name here
	std::cout << "Character Creation" << "\n";
}

void CharacterCreationState::HandleInput()
{
	std::string enteredName;
	std::cout << "Enter Character Name: ";
	std::cin >> enteredName;

	std::string enteredClass;
	std::cout << "Choose from one of 6 Classes: " << "\n";
	std::cout << "Warrior" << "\n";
	std::cout << "Rogue" << "\n";
	std::cout << "Wizard" << "\n";
	std::cout << "Cleric" << "\n";
	std::cout << "Barbarian" << "\n";
	std::cout << "Bard" << "\n";
	std::cout << "Enter Class Name: ";
	std::cin >> enteredClass;

	CharacterClass selectedClass(helper::ConvertStringToClassType(enteredClass));
	Character character(enteredName, selectedClass);

}

void CharacterCreationState::Update()
{

}
