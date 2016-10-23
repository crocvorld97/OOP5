// OOP3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Cake.h"
#include "Candy.h"
#include "Flowers.h"
#include "Merchandise.h"
#include "Product.h"
#include "Watch.h"
#include "Contener.h"
#include "Controller.h"

using namespace std;

int Watch::countOfObjects = 0;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	Merchandise a(3, "Евроопт", 5);
	Product b(3, "Алми", 6, 10);
	Cake c(4, "Коммунарка", 4, 10, "Бисквитный");
	Flowers e(30, "Цветник", 5, "Роза");
	Watch f(1000, "Apple", 6, "SmartWatch");
	Flowers flower(30, "Цветник", 10, "Роза");
	
	Conteiner gift;
	gift.add(f);
	gift.add(flower);
	gift.add(c);
	gift.add(e);
	gift.consolePrint();

	Controller giftController(gift);
	cout << "Стоимость подарка: " << giftController.getCostOfGift() << endl;
	cout << "Подарок самой маленькой массы: " << giftController.theWorstWeightObject() << endl;
	giftController.sortWeight();

	cout << "После сортировки: \n\n";
	gift.consolePrint();

    return 0;
}

