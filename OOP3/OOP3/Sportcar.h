#pragma once
#include "Transport.h"

class Sportcar : public Transport
{
public:
	Sportcar(int cost, std::string label, int a, std::string type, int power) : Transport(cost, label, a, power) {}

	void toConsole()
	{
		std::cout << "Тип машины: " << this->workType << ". Мощность: " << this->power << std::endl;
	}
};