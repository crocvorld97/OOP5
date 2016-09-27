#include "stdafx.h"
#include "Product.h"

void Product::setShelfLife(int date)
{
	this->shelfLife = date;
}

int Product::getShelfLife()
{
	return this->shelfLife;
}