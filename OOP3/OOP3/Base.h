#pragma once

class Base
{

public:
	virtual void toConsole() = 0;
};

class Printer
{
public:
	void iAmPrinting(Base &obj)
	{
		obj.toConsole();
	}
};