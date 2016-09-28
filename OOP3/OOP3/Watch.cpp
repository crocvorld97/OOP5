#include "stdafx.h"
#include "Merchandise.h"
#include "Watch.h"

Watch::Watch(int value, std::string productName, std::string type) : Merchandise(value, productName)
{
	this->watchType = type;
}

void Watch::setWathType(std::string type)
{
	this->watchType = type;
}

std::string Watch::getWatchType()
{
	return this->watchType;
}