#include "pch.h"
#include <iostream>
#include <sstream>
#include "../Include/IntroState.h"
#include "../Include/CharacterCreationState.h"

IntroState::IntroState(GameDataRef data) : _data(data)
{

}

void IntroState::Init()
{
	std::cout << "Game Initialized" << "\n";
}

void IntroState::HandleInput()
{
	// Consider adding some sort of 'exit' input here.
}

void IntroState::Update()
{
	std::this_thread::sleep_for(std::chrono::seconds(1)); // Hold Intro State for 1 second.

	// Switch to Character Creation here.
	this->_data->machine.AddState(StateRef(new CharacterCreationState(_data)), true); // Override current state
}