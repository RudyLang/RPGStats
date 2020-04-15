#ifndef _I_STATE_H
#define _I_STATE_H

class IState
{
public:
	virtual void Update(float update);
	virtual void HandleInput();

	virtual void Enter(params object[] args);
	virtual void Exit();
};

#endif

