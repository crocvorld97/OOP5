#pragma once
#include "Base.h"

class Merchandise : public Base
{
	int cost = 0;
	std::string label = "None";
	int weight ;

public:
	void toConsole();
	
	Merchandise(int, std::string, int);
	
	void setWeight(int value)
	{
		this->weight = value;
	}

	int getWeight()
	{
		return this->weight;
	}
	void setValue(int value);
	int getCost();

	void setLabel(std::string);
	std::string getLabel();

};