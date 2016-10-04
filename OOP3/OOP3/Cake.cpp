#include "stdafx.h"
#include "Cake.h"

void Cake::toConsole()
{
	std::cout << "Тип торта: " << this->cakeType << std::endl;
}

Cake::Cake(int value, std::string productName, int date, std::string type) : Product(value, productName, date)
{
	this->cakeType = type;
}

void Cake::setCakeType(std::string type)
{
	this->cakeType = type;
}

std::string Cake::getCakeType()
{
	return this->cakeType;
}