#include "stdafx.h"
#include "Flowers.h"

void Curator::iCanModifyYou(Flowers &example)
{
	example.setFlowerName("None");
	example.setLabel("None");
	example.setValue(0);
}

void Flowers::toConsole()
{
	std::cout << "��� �������� ������: " << typeid(this).name() << ". " << "�������� ������: " << this->flowerName << ". ���: " << this->getWeight() << std::endl;
}

Flowers::Flowers(int value, std::string productName, int weight, std::string flower) : Merchandise(value, productName, weight)
{
	this->flowerName = flower;	
}

void Flowers::setFlowerName(std::string flower)
{
	this->flowerName = flower;
}

std::string Flowers::getFlowerName()
{
	return this->flowerName;
}

