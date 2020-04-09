#include "pch.h"
#include <iostream>
#include "Item.h"

Item::Item()
{
	name = "Undefined";
	description = "Undefined";
	modifier = 1.0;
}


Item::Item(std::string nameIn, std::string descriptionIn, float modifierIn)
{
	name = nameIn;
	description = descriptionIn;
	modifier = modifierIn;
}

std::string Item::GetItemName()
{
	return name;
}

std::string Item::GetItemDescription()
{
	return description;
}

float Item::GetModifier()
{
	return modifier;
}