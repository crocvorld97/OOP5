#pragma once
#include "Merchandise.h"

class Product :	public Merchandise
{
	int shelfLife;

public:
	void toConsole();
	Product(int value, std::string productName, int date);

	void setShelfLife(int date);
	int getShelfLife();

};