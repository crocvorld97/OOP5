#include "stdafx.h"
#include "Cake.h"

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