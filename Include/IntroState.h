#ifndef INTRO_STATE_H
#define INTRO_STATE_H

#include "State.h"
#include "Game.h"
#include <thread>
#include <chrono>

class IntroState : public State
{
public:
	IntroState(GameDataRef data);

	void Init();

	void HandleInput();
	void Update();

private:
	GameDataRef _data; // Pointer to GameDataRef
};

#endif
