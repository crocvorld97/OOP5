// OOP3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Cake.h"
#include "Candy.h"
#include "Flowers.h"
#include "Merchandise.h"
#include "Product.h"
#include "Watch.h"
#include "Transport.h"
#include "Sportcar.h"
using namespace std;

int Watch::countOfObjects = 0;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	
	Merchandise a(3, "Евроопт");

	Product b(3, "Алми", 10);

	Cake c(4, "Коммунарка", 10, "Бисквитный");

	Flowers e(30, "Цветник", "Роза");


	Watch f(1000, "Apple", "SmartWatch");
	

	Candy d(1, "Коммунарка", 100, "Леденец");
	Candy::Notation notation("Информация отсутствует!");
	notation.setNotation("Очень вкусные конфеты!");
	

	cout << "Название конфет через метов вложенного класса: " << notation.getCandyName(d) << endl << endl;
	

	if (d.isNotation(notation))
	{
		cout << "Поле описания не пусто!!!\n\n\n\n";
	}
	else
	{
		cout << "Поле описания пусто!!!\n\n\n\n";
	}

	Base *ptr;
	ptr = &a;
	ptr->toConsole();
	ptr = &b;
	ptr->toConsole();
	ptr = &c;
	ptr->toConsole();
	ptr = &d;
	ptr->toConsole();
	ptr = &e;
	ptr->toConsole();
	ptr = &f;
	ptr->toConsole();

	Sportcar car(3, "BMW", "Полноприводная", 1000);
	//car.setLabel("BMW");
	car.setPower(1000);
	//car.setValue(500);
	car.setWorkType("Полноприводная");
	

	const Watch glass, moreGlass;
	std::cout << glass.getWatchType() << std::endl;
	//glass.setWathType("Apple");     -   ошибка: для константного объекта можно вызвать только константные методы

	Inspector inspector;
	inspector.iKnowAllAboutYou(e);
	cout << "Количество объектов типа Watch: " << Watch::getCountOfObjects() << endl;

	cout << "\n Использование класса Printer для всех объектов иерархии:\n";
	Printer printer;
	printer.iAmPrinting(a);
	printer.iAmPrinting(b);
	printer.iAmPrinting(c);
	printer.iAmPrinting(d);
	printer.iAmPrinting(e);
	printer.iAmPrinting(f);

	cout << "\n\nИспользование операторов приведения типа:\n";
	Cake *test1 = new Cake (4, "Коммунарка", 10, "Бисквитный");
	Product *test3;
	cout << typeid(dynamic_cast<Product*> (test1)).name() << endl;

	float flt = 5.2;
	cout << flt << endl;
	int integer = static_cast<int> (flt);
	cout << "Static_cast - " << integer << endl;

	cout << "\n\nИспользование операторов приведения типа:\n";
	Cake *test6 = new Cake(4, "Коммунарка", 10, "Бисквитный");
	int *p;
	p = const_cast<int*>(&(f.secret));
	*p = 15000;
	cout << endl << f.secret;
	cout << endl << endl;

	Flowers flower(30, "Цветник", "Роза");
	cout << "Компания производитель: " << flower.getLabel() << ", стоимость товара: " << flower.getCost()
		<< ", вид цветов: " << flower.getFlowerName() << endl << endl;
	Curator changer;
	changer.iCanModifyYou(flower);
	cout << "Компания производитель: " << flower.getLabel() << ", стоимость товара: " << flower.getCost()
		<< ", вид цветов: " << flower.getFlowerName() << endl << endl;

    return 0;
}

