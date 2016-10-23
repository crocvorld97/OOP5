#include "stdafx.h"
#include "Contener.h"
#include "Merchandise.h"
void Conteiner::add(Merchandise &object)
{
	list* temp = new list;
	temp->object = &object;
	temp->next = current;
	current = temp;
	this->length++;
}

Merchandise* Conteiner::get(unsigned int number)
{
	unsigned int currentNumber = 0;
	list* temp = current;
	while (temp != NULL)
	{
		if (currentNumber == number)
		{
			return temp->object;
			break;
		}

		else
		{
			temp = temp->next;
			currentNumber++;
		}
	}
	return NULL;
}

void Conteiner::remove(unsigned int number)
{
	list *temp = current;
	if (number == 0)
	{
		current = current->next;
		delete temp;
	}

	else
	{
		unsigned int currentNumber = 0;
		number--;
		while (temp != NULL)
		{
			if (currentNumber == number)
			{
				list* nextItem = temp->next;
				temp->next = nextItem->next;
				delete nextItem;
				this->length--;
			}

			else
			{
				temp = temp->next;
				currentNumber++;
			}
		}
	}
}

void Conteiner::consolePrint()
{
	list *temp = current;
	Base *base;
	while (temp != NULL)
	{
		base = dynamic_cast<Base*>(temp->object);
		base->toConsole();
		temp = temp->next;
	}
}