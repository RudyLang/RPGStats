#include "pch.h"
#include <iostream>
#include "../Include/GameState.h"
#include "../Include/DEFINITIONS.h"

GameState::GameState(GameDataRef data) : _data(data)
{

}

void GameState::Init()
{
	gameState = STATE_MAIN_MENU;
	std::cout << "Main Menu" << "\n";
}

void GameState::HandleInput()
{
	//std::cout << "Select a task: " << "\n";
}

void GameState::Update()
{

}
