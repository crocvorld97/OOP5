#pragma once
#include "Merchandise.h"
#include "Product.h"

class Candy : public Product
{
	std::string candyType;
	
public:
	void toConsole();
	Candy(int value, std::string productName, int date, std::string type);

	void setCandyType(std::string candyType);
	std::string getCandyType();

	class Notation
	{
		std::string text;

	public:
		std::string getCandyName(Candy &a);
		Notation(std::string n);

		void setNotation(std::string notationText);
		std::string getNotation();

	};
	bool isNotation(Notation &);
};