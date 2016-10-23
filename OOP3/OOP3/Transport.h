#pragma once
#include "Merchandise.h"
#include <iostream>
class Transport : protected Merchandise
{
protected:
	std::string workType;

public:
	int power;

	Transport(int cost, std::string label, int weight, std::string type, int power) : Merchandise(cost, label, weight)
	{
		this->workType = type;
		this->power = power;
	}

	void setWorkType(std::string type)
	{
		this->workType = type;
	}

	std::string getWorkType()
	{
		return this->workType;
	}

	void setPower(int powerForSet)
	{
		this->power = powerForSet;
	}

	int getPower()
	{
		return this->power;
	}

	void toConsole()
	{
		std::cout << "Тип авто: " << this->workType << ". Лошадиные силы: " << this->power << std::endl;
	}
};