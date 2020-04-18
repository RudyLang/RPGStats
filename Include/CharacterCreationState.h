#ifndef CHARACTER_CREATION_STATE_H
#define CHARACTER_CREATION_STATE_H

#include "State.h"
#include "Game.h"

class CharacterCreationState : public State
{
public:
	CharacterCreationState(GameDataRef data);

	void Init();

	void HandleInput();
	void Update();

private:
	GameDataRef _data;
};

#endif