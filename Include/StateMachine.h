#ifndef _STATE_MACHINE_H
#define _STATE_MACHINE_H

#include "pch.h"
#include <iostream>
#include <unordered_map>
#include "IState.h"
#include "EmptyState.h"

class StateMachine
{
public:
	std::unordered_map<std::string, IState> _stateMap;
	EmptyState _current; // Runs the empty state until it's changed.

	// Consider moving these definitions to a source file.
	IState Current() {  return _current; }
	void Add(std::string id, IState state) { _stateMap.emplace(id, state); } // Will only insert if id is unique.
	void Remove(std::string id) { _stateMap.erase(id); }
	void Clear() { _stateMap.clear(); }
};

#endif

