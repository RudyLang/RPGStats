#ifndef GAME_STATE_H
#define GAME_STATE_H

#include "State.h"
#include "Game.h"

class GameState : public State
{
public:
	GameState(GameDataRef data);

	void Init();

	void HandleInput();
	void Update();

private:
	GameDataRef _data;

	int gameState;
};

#endif
