#pragma once
#include "Merchandise.h"
#include "Product.h"

class Candy : public Product
{
	std::string candyType;
	
public:
	Candy(int value, std::string productName, int date, std::string type);

	void setCandyType(std::string candyType);
	std::string getCandyType();

	class Notation
	{
		std::string text;

	public:

		Notation(std::string notation);

		void setNotation(std::string notationText);
		std::string getNotation();
	};
};