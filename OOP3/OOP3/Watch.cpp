#include "stdafx.h"
#include "Merchandise.h"
#include "Watch.h"

Watch::Watch(int value, std::string productName, std::string type) : Merchandise(value, productName)
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

Watch::Watch() : Merchandise(10, "Glass")
{
	this->watchType = this->type;
	countOfObjects++;
}

int Watch::getCountOfObjects()
{
	return countOfObjects;
}