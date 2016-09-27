#include "stdafx.h"
#include "Candy.h"

void Candy::setCandyType(std::string candyType)
{
	this->candyType = candyType;
}

std::string Candy::getCandyType()
{
	return this->candyType;
}

void Candy::Notation::setNotation(std::string notationText)
{
	this->text = notationText;
}

std::string Candy::Notation::getNotation()
{
	return this->text;
}