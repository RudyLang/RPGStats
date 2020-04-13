#ifndef STATS_H
#define STATS_H

/* Class used to describe character stats.
*  Consists of 6 different statistics:
*  Strength (STR)
*  Dexterity (DEX)
*  Constitution (CON)
*  Intelligence (INT)
*  Wisdom (WIS)
*  Charisma (CHA)
*/

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