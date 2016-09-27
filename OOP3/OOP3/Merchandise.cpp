#include "stdafx.h"
#include "Merchandise.h"

Merchandise::Merchandise(int value, std::string productName)
{
	this->cost = value;
	this->label = productName;
	std::cout << "Вызов конструктора Merchandise!\n";
}

Merchandise::~Merchandise()
{
	std::cout << "Вызов диструктора Merchandise\n";
}

void Merchandise::setLabel(std::string productName)
{
	this->label = productName;
}

std::string Merchandise::getLabel()
{
	return this->label;
}

void Merchandise::setValue(int value)
{
	this->cost = value;
}

int Merchandise::getCost()
{
	return this->cost;
}