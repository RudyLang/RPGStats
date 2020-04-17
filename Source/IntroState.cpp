#include "pch.h"
#include <sstream>
#include "../Include/IntroState.h"
#include <iostream>

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

	// Switch to Main Menu here.
	std::cout << "Go to Main Menu" << "\n";
}