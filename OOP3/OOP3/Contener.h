#pragma once
#include "Base.h"
using namespace std;

class Merchandise;


class Conteiner
{
private:
	unsigned int length = 0;
	struct list
	{
		Merchandise *object;
		list *next;
	} *current;

public:
	Merchandise* get(unsigned int number);
	void add(Merchandise &object);
	void remove(unsigned int number);
	void consolePrint();
	unsigned int getSize()
	{
		return this->length;
	}
};