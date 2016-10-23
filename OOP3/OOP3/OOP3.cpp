// OOP3.cpp: ���������� ����� ����� ��� ����������� ����������.
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

	Merchandise a(3, "�������", 5);
	Product b(3, "����", 6, 10);
	Cake c(4, "����������", 4, 10, "����������");
	Flowers e(30, "�������", 5, "����");
	Watch f(1000, "Apple", 6, "SmartWatch");
	Flowers flower(30, "�������", 10, "����");
	
	Conteiner gift;
	gift.add(f);
	gift.add(flower);
	gift.add(c);
	gift.add(e);
	gift.consolePrint();

	Controller giftController(gift);
	cout << "��������� �������: " << giftController.getCostOfGift() << endl;
	cout << "������� ����� ��������� �����: " << giftController.theWorstWeightObject() << endl;
	giftController.sortWeight();

	cout << "����� ����������: \n\n";
	gift.consolePrint();

    return 0;
}

