#include "stdafx.h"
#include "Candy.h"

Candy::Candy(int value, std::string productName, int date, std::string type) : Product(value, productName, date)
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