#pragma once
#include "Base.h"

class Merchandise : public Base
{
	int cost;
	std::string label;

public:
	void toConsole();
	
	Merchandise(int, std::string);
	
	void setValue(int value);
	int getCost();

	void setLabel(std::string);
	std::string getLabel();

};