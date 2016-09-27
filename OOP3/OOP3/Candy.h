#pragma once
#include "Merchandise.h"
#include "Product.h"

class Candy : public Product
{
	std::string candyType;
	
public:
	Candy(int value, std::string productName, int date, std::string type) : Product(value, productName, date)
	{
		this->candyType = type;
		std::cout << "Вызван конструктор Candy!\n";
	}

	void setCandyType(std::string candyType);
	std::string getCandyType();

	class Notation
	{
		std::string text;

	public:

		void setNotation(std::string notationText);
		std::string getNotation();
	};

	~Candy()
	{
		std::cout << "Вызван диструктор Candy!\n";
	}
};