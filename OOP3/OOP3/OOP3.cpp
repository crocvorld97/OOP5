// OOP3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Cake.h"
#include "Candy.h"
#include "Flowers.h"
#include "Merchandise.h"
#include "Product.h"
#include "Watch.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	Merchandise a(3, "Евроопт");
	cout << "Компания производитель: " << a.getLabel() << ", стоимость товара: " << a.getCost() << endl;
	a.setLabel("Гиппо");
	a.setValue(4);
	cout << "Компания производитель: " << a.getLabel() << ", стоимость товара: " << a.getCost() << endl << endl;

	Product b(3, "Алми", 10);
	cout << "Компания производитель: " << b.getLabel() << ", стоимость товара: " << b.getCost()
		 << ", срок годности: " << b.getShelfLife() << " дней" << endl;

	b.setLabel("Гиппо");
	b.setValue(8);
	b.setShelfLife(15);
	cout << "Компания производитель: " << b.getLabel() << ", стоимость товара: " << b.getCost()
		 << ", срок годности: " << b.getShelfLife() << " дней" << endl << endl;

	Cake c(4, "Коммунарка", 10, "Бисквитный");
	cout << "Компания производитель: " << c.getLabel() << ", стоимость товара: " << c.getCost()
		 << ", срок годности: " << c.getShelfLife() << " дней, " << " тип торта: " << c.getCakeType() << endl;

	c.setCakeType("Песочный");
	c.setLabel("Минский");
	c.setShelfLife(15);
	c.setValue(13);
	cout << "Компания производитель: " << c.getLabel() << ", стоимость товара: " << c.getCost()
		 << ", срок годности: " << c.getShelfLife() << " дней, " << " тип торта: " << c.getCakeType() << endl << endl;

	Candy d(1, "Коммунарка", 100, "Леденец");
	Candy::Notation notation;
	notation.setNotation("Очень вкусные конфеты!");
	cout << "Компания производитель: " << d.getLabel() << ", стоимость товара: " << d.getCost()
		<< ", срок годности: " << d.getShelfLife() << " дней, " << " тип конфет: " << d.getCandyType()
		<< ". Небольшая характеристика: " << notation.getNotation() <<  endl << endl;

	d.setCandyType("Шоколадный");
	d.setLabel("ROSHEN");
	d.setShelfLife(50);
	d.setValue(3);
	cout << "Компания производитель: " << d.getLabel() << ", стоимость товара: " << d.getCost()
		<< ", срок годности: " << d.getShelfLife() << " дней, " << " тип конфет: " << d.getCandyType() << endl << endl;

	Flowers e(30, "Цветник", "Роза");
	cout << "Компания производитель: " << e.getLabel() << ", стоимость товара: " << e.getCost()
		 << ", вид цветов: " << e.getFlowerName() << endl << endl;

	e.setFlowerName("Астра");
	e.setValue(15);
	cout << "Компания производитель: " << e.getLabel() << ", стоимость товара: " << e.getCost()
		<< ", вид цветов: " << e.getFlowerName() << endl << endl;

	Watch f(1000, "Apple", "SmartWatch");
	cout << "Компания производитель: " << f.getLabel() << ", стоимость товара: " << f.getCost()
		<< ", тип часов: " << f.getWatchType() << endl << endl;

	f.setLabel("Rolex");
	f.setWathType("Механические");
	cout << "Компания производитель: " << f.getLabel() << ", стоимость товара: " << f.getCost()
		<< ", тип часов: " << f.getWatchType() << endl << endl;

    return 0;
}

