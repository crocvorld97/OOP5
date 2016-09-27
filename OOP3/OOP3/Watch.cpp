#include "stdafx.h"
#include "Merchandise.h"
#include "Watch.h"

void Watch::setWathType(std::string type)
{
	this->watchType = type;
}

std::string Watch::getWatchType()
{
	return this->watchType;
}