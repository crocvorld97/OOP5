#pragma once
#include "Merchandise.h"

class Product :	public Merchandise
{
	int shelfLife;

public:

	Product(int value, std::string productName, int date) : Merchandise(value, productName)
	{
		this->shelfLife = date;
		std::cout << "Вызов конструктора Product!\n";
	}

	void setShelfLife(int date);
	int getShelfLife();

	~Product()
	{
		std::cout << "Вызов диструктора Product\n";
	}
};