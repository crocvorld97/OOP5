#include "stdafx.h"
#include "Cake.h"

void Cake::toConsole()
{
	std::cout << "��� �������� ������: " << typeid(this).name() << ". ��� �����: " << this->cakeType << ". ���: " << this->getWeight() << std::endl;
}

Cake::Cake(int value, std::string productName, int weight, int date, std::string type) : Product(value, productName, weight, date)
{
	this->cakeType = type;
}

void Cake::setCakeType(std::string type)
{
	this->cakeType = type;
}

std::string Cake::getCakeType()
{
	return this->cakeType;
}