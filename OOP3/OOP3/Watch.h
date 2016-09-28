#pragma once
#include "Merchandise.h"

class Watch : public Merchandise
{
	std::string watchType;

public:
	Watch(int value, std::string productName, std::string type);

	void setWathType(std::string type);
	std::string getWatchType();

};