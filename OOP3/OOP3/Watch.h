#pragma once
#include "Merchandise.h"

class Watch : public Merchandise
{
	std::string watchType;

public:
	Watch(int value, std::string productName, std::string type) : Merchandise(value, productName)
	{
		this->watchType = type;
		std::cout << "Вызван конструктор Watch!\n";
	}

	void setWathType(std::string type);
	std::string getWatchType();

	~Watch()
	{
		std::cout << "Вызван диструктор Watch!\n";
	}
};