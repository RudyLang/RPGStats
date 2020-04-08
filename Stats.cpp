#include "pch.h"
#include <iostream>
#include "Stats.h"

Stats::Stats()
{
	STR = 0;
	DEX = 0;
	CON = 0;
	INT = 0;
	WIS = 0;
	CHA = 0;

	std::cout << "Initialized base stats.";
}