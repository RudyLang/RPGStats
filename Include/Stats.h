#ifndef STATS_H
#define STATS_H

class Stats
{
private:
	int STR;
	int DEX;
	int CON;
	int INT;
	int WIS;
	int CHA;

public:
	Stats();
	Stats(int STRin, int DEXin, int CONin, int INTin, int WISin, int CHAin);
	void SetStats(const int& STRin, const int& DEXin, const int& CONin, const int& INTin, const int& WISin, const int& CHAin);
};

#endif