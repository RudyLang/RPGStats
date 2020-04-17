#ifndef GAME_H
#define GAME_H

#include <memory>
#include <string>
#include "StateMachine.h"

struct GameData
{
	StateMachine machine;
};

typedef std::shared_ptr<GameData> GameDataRef;

class Game
{
public:
	Game();

private:
	GameDataRef _data = std::make_shared<GameData>(); // Use in different states to access game data.

	void Run();
};

#endif

