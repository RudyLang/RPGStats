#ifndef ITEM_H
#define ITEM_H

class Item
{
public:
	std::string name;
	std::string description;
	float modifier; // Temporary stat modifier

	Item();
	Item(std::string nameIn, std::string descriptionIn, float modifierIn);
	std::string GetItemName();
	std::string GetItemDescription();
	float GetModifier();
	void EquipItem();
	void UnequipItem();
};

#endif