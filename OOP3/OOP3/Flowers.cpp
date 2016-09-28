#include "stdafx.h"
#include "Flowers.h"

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

