#include "pch.h"
#include <iostream>
#include "../Include/Stats.h"

Stats::Stats()
{
	STR = 0;
	DEX = 0;
	CON = 0;
	INT = 0;
	WIS = 0;
	CHA = 0;
}

Stats::Stats(int STRin, int DEXin, int CONin, int INTin, int WISin, int CHAin)
{
	STR = STRin;
	DEX = DEXin;
	CON = CONin;
	INT = INTin;
	WIS = WISin;
	CHA = CHAin;
}

void Stats::SetStats(const int& STRin, const int& DEXin, const int& CONin, const int& INTin, const int& WISin, const int& CHAin)
{
	STR = STRin;
	DEX = DEXin;
	CON = CONin;
	INT = INTin;
	WIS = WISin;
	CHA = CHAin;
}