#pragma once
#include "Merchandise.h"
#include "Product.h"

class Cake : public Product
{
	std::string cakeType;

public:
	Cake(int value, std::string productName, int date, std::string type) : Product(value, productName, date)
	{
		this->cakeType = type;
		std::cout << "Вызван конструктор Cake!\n";
	}

	void setCakeType(std::string type);
	std::string getCakeType();

	~Cake()
	{
		std::cout << "Вызван диструктор Cake!\n";
	}
};