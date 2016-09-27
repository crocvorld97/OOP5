#include "stdafx.h"
#include "Cake.h"


void Cake::setCakeType(std::string type)
{
	this->cakeType = type;
}

std::string Cake::getCakeType()
{
	return this->cakeType;
}