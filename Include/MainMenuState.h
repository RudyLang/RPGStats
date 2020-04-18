#ifndef MAIN_MENU_STATE_H
#define MAIN_MENU__TATE_H

#include "State.h"
#include "Game.h"

class MainMenuState : public State
{
	MainMenuState(GameDataRef data);

	void Init();

	void HandleInput();
	void Update();

private:
	GameDataRef _data;
};

#endif
