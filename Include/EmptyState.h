#ifndef _EMPTY_STATE_H
#define _EMPTY_STATE_H

class EmptyState : public IState
{
public:
	void Update(float update) {};
	void HandleInput() {};
	void Enter(params object[] args) {};
	void Exit() {};
};

#endif
