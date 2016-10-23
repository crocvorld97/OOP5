#include "stdafx.h"
#include "Product.h"

void Product::toConsole()
{
	std::cout << "Тип текущего класса: " << typeid(this).name() << ". " << " Срок годности продукта: " << this->shelfLife << std::endl;
}

Product::Product(int value, std::string productName, int weight, int date) : Merchandise(value, productName, weight)
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