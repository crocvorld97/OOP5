#include "stdafx.h"
#include "Flowers.h"

void Flowers::toConsole()
{
	std::cout << "Название цветов: " << this->flowerName << std::endl;
}

Flowers::Flowers(int value, std::string productName, std::string flower) : Merchandise(value, productName)
{
	this->flowerName = flower;	
}

void Flowers::setFlowerName(std::string flower)
{
	this->flowerName = flower;
}

std::string Flowers::getFlowerName()
{
	return this->flowerName;
}

