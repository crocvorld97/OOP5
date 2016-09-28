#include "stdafx.h"
#include "Product.h"

Product::Product(int value, std::string productName, int date) : Merchandise(value, productName)
{
	this->shelfLife = date;
}

void Product::setShelfLife(int date)
{
	this->shelfLife = date;
}

int Product::getShelfLife()
{
	return this->shelfLife;
}