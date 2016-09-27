#pragma once

class Merchandise
{
	int cost;
	std::string label;

public:

	Merchandise(int, std::string);
	
	void setValue(int value);
	int getCost();

	void setLabel(std::string);
	std::string getLabel();

	~Merchandise();
};