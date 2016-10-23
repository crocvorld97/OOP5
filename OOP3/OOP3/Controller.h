#pragma once

#include "Contener.h"

class Controller
{
private:
	Conteiner *gift;

public:
	Controller(Conteiner &init) { gift = &init; };

	int getCostOfGift();
	int theWorstWeightObject();
	void sortWeight();
};