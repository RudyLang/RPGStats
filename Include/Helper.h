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
	float Round(float var, int decimalPlaces);
}

#endif
