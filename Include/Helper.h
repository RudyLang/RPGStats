#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <string>
#include <cctype>
#include "ClassType.h"

namespace helper
{
	ClassType ConvertStringToClassType(std::string classIn);
	bool CompareChar(char& c1, char& c2);
	bool CaseInsensitiveClassCompare(std::string& str1, std::string str2);
	bool CaseInsensitiveStringCompare(std::string& str1, std::string& str2);

	ClassType ConvertStringToClassType(std::string classIn)
	{
		if (CaseInsensitiveClassCompare(classIn, "Warrior"))
		{
			return ClassType::Warrior;
		}

		if (CaseInsensitiveClassCompare(classIn, "Wizard"))
		{
			return ClassType::Wizard;
		}

		if (CaseInsensitiveClassCompare(classIn, "Cleric"))
		{
			return ClassType::Cleric;
		}

		if (CaseInsensitiveClassCompare(classIn, "Rogue"))
		{
			return ClassType::Rogue;
		}

		if (CaseInsensitiveClassCompare(classIn, "Barbarian"))
		{
			return ClassType::Barbarian;
		}

		if (CaseInsensitiveClassCompare(classIn, "Bard"))
		{
			return ClassType::Bard;
		}

		return ClassType::None;
	}

	bool CompareChar(char& c1, char& c2)
	{
		if (c1 == c2)
		{
			return true;
		}
		else if (std::toupper(c1) == std::toupper(c2))
		{
			return true;
		}
		return false;
	}

	bool CaseInsensitiveClassCompare(std::string& str1, std::string str2)
	{
		return ((str1.size() == str2.size()) && std::equal(str1.begin(), str1.end(), str2.begin(), &CompareChar));
	}

	bool CaseInsensitiveStringCompare(std::string& str1, std::string& str2)
	{
		return ((str1.size() == str2.size()) && std::equal(str1.begin(), str1.end(), str2.begin(), &CompareChar));
	}
}

#endif
