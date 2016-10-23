#include "stdafx.h"
#include "Candy.h"

void Candy::toConsole()
{
	std::cout << "Тип текущего класса: " << typeid(this).name() << ". " << " Тип конфет: " << this->candyType << std::endl;
}

Candy::Candy(int value, std::string productName, int weight, int date, std::string type) : Product(value, productName, weight, date)
{
	this->candyType = type;
}

void Candy::setCandyType(std::string candyType)
{
	this->candyType = candyType;
}

std::string Candy::getCandyType()
{
	return this->candyType;
}

Candy::Notation::Notation(std::string notation)
{
	this->text = notation;
}

void Candy::Notation::setNotation(std::string notationText)
{
	this->text = notationText;
}

std::string Candy::Notation::getNotation()
{
	return this->text;
}

std::string Candy::Notation::getCandyName(Candy &a)
{
	return a.getCandyType();
}

bool Candy::isNotation(Candy::Notation &a)
{
	if (a.getNotation() == "")
		return false;

	else
		return true;
}