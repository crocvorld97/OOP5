#pragma once
#include "Merchandise.h"
#include "Product.h"

class Cake : public Product
{
	std::string cakeType;

public:
	void toConsole();
	Cake(int value, std::string productName, int weight, int date, std::string type);
	
	void setCakeType(std::string type);
	std::string getCakeType();
};