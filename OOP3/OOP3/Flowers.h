#pragma once
#include "Merchandise.h"

class Flowers : public Merchandise
{
	std::string flowerName;

public:
	Flowers(int value, std::string productName, std::string flower);

	void setFlowerName(std::string flower);
	std::string getFlowerName();
};