#include "pch.h"
#include "../Include/Game.h"
#include "../Include/IntroState.h"

Game::Game()
{
	// Add first state:
	_data->machine.AddState(StateRef(new IntroState(this->_data)));

	this->Run();
}

void Game::Run()
{
	while (1) // Keep the game loop running until the console is closed.
	{
		// Process any state changes during this time.
		this->_data->machine.ProcessStateChanges();
		this->_data->machine.GetActiveState()->HandleInput();
		this->_data->machine.GetActiveState()->Update();
	}
}