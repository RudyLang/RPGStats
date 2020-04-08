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

	std::cout << "Initialized base stats." << "\n";
}

Stats::Stats(int STRin, int DEXin, int CONin, int INTin, int WISin, int CHAin)
{
	STR = STRin;
	DEX = DEXin;
	CON = CONin;
	INT = INTin;
	WIS = WISin;
	CHA = CHAin;

	std::cout << "Initialized base stats." << "\n";
}