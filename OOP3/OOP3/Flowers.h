#pragma once
#include "Merchandise.h"

class Flowers;

class Curator
{
public:
	void iCanModifyYou(Flowers &example);
};

class Inspector;


class Flowers : public Merchandise
{
private:
	std::string flowerName;
	friend Inspector;
	friend void Curator::iCanModifyYou(Flowers &example);

public:
	void toConsole();
	Flowers(int value, std::string productName, int weight, std::string flower);

	void setFlowerName(std::string flower);
	std::string getFlowerName();
};

class Inspector
{
public:
	void iKnowAllAboutYou(Flowers &example)
	{
		std::cout << example.flowerName << " " << example.getCost() << " " << example.getLabel() << std::endl;
	}
};

