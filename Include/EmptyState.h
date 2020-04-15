#ifndef EMPTY_STATE_H
#define EMPTY_STATE_H

class EmptyState : public IState
{
public:
	void Update(float update) {};
	void HandleInput() {};
	void Enter(int enter, ...) {}; //Variadic argument, need to update
	void Exit() {};
};

#endif
