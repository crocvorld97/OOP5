#include "stdafx.h"
#include "Merchandise.h"

void Merchandise::toConsole()
{
	std::cout << "��� �������� ������: " << typeid(this).name() << ". " << " ����: " << this->cost << ". �����: " << this->label << ". ���: " << this->getWeight() << ".\n";
}

Merchandise::Merchandise(int value, std::string productName, int weight)
{
	this->cost = value;
	this->label = productName;
	this->weight = weight;
}

void Merchandise::setLabel(std::string productName)
{
	this->label = productName;
}

std::string Merchandise::getLabel()
{
	return this->label;
}

void Merchandise::setValue(int value)
{
	this->cost = value;
}

int Merchandise::getCost()
{
	return this->cost;
}