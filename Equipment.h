#include "Item.h"
#include "Slot.h"
#include "Stats.h"

class Equipment : public Item
{
private:
	Slot slot;
	Stats stats;

public:
	Equipment(std::string nameIn, std::string descriptionIn, float modifierIn, Slot slotIn, Stats statsIn);
};
