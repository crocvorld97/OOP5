#include "stdafx.h"
#include "Merchandise.h"
#include "Watch.h"

void Watch::toConsole()
{
	std::cout << "Тип текущего класса: " << typeid(this).name() << ". Тип часов: " << this->watchType << ". Вес: " << this->getWeight() << std::endl;
}

Watch::Watch(int value, std::string productName, int weight, std::string type) : Merchandise(value, productName, weight)
{
	this->watchType = type;
	countOfObjects++;
}

void Watch::setWathType(std::string type)
{
	this->watchType = type;
}

std::string Watch::getWatchType() const
{
	return this->watchType;
}

Watch::Watch() : Merchandise(10, "Glass", 1)
{
	this->watchType = this->type;
	countOfObjects++;
}

int Watch::getCountOfObjects()
{
	return countOfObjects;
}