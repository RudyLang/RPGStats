#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

/* State machine is based on a stack.
*  Top state will run, popping it off
*  will return to game state.
*/

#include <memory>
#include <stack>
#include "State.h"

typedef std::unique_ptr<State> StateRef;

class StateMachine
{
private:
	std::stack<StateRef> _states;
	StateRef _newState;

	bool _isRemoving;
	bool _isAdding;
	bool _isReplacing;

public:
	StateMachine() { }
	~StateMachine() { }

	void AddState(StateRef newState, bool isReplacing = true); // Replace the current state rather than just adding it ontop
	void RemoveState();

	void ProcessStateChanges();

	StateRef &GetActiveState();
};

#endif
