#include "stdafx.h"

#include "Controller.h"
#include "Merchandise.h"

int Controller::getCostOfGift()
{
	int price = 0;

	for (int i = 0; i < this->gift->getSize(); i++)
	{
		
		Merchandise *temp = dynamic_cast<Merchandise*>(this->gift->get(i));
		price += temp->getCost();
	}
	return price;
}

int Controller::theWorstWeightObject()
{
	Merchandise* minWight = new Merchandise(0, "", INT_MAX);
	Merchandise* temp;
	for (int i = 0; i < this->gift->getSize(); i++)
	{
		temp = dynamic_cast<Merchandise*>(this->gift->get(i));
		if (temp->getWeight() < minWight->getWeight())
		{
			minWight->setWeight(temp->getWeight());
		}
	}
	return minWight->getWeight();
	delete minWight;
}

void Controller::sortWeight()
{
	Merchandise* temp = new Merchandise(0, "", 0);
	int swap, swap2;
	for (int i = 0; i < this->gift->getSize(); i++)
	{
		for (int j = this->gift->getSize() - 1; j > i; j--)
		{
			
			if (this->gift->get(j)->getWeight() < this->gift->get(j - 1)->getWeight())
			{
				*temp = *gift->get(j - 1);
				*this->gift->get(j - 1) = *this->gift->get(j);
				*this->gift->get(j) = *temp;
				
			}
		}
	}
	
}