#include "pch.h"
#include <iostream>
#include "../Include/MainMenuState.h"

MainMenuState::MainMenuState(GameDataRef data) : _data(data)
{

}

void MainMenuState::Init()
{
	std::cout << "Main Menu" << "\n";
}

void MainMenuState::HandleInput()
{
	std::cout << "Select a task: " << "\n";
}

void MainMenuState::Update()
{

}
