#pragma once
#include "Merchandise.h"

class Watch : public Merchandise
{
	static int countOfObjects;
	const std::string type = "Standart";
	std::string watchType;

public:
	void toConsole();
	const int secret = 10;
	Watch();
	Watch(int value, std::string productName, int weight, std::string type);

	static int getCountOfObjects();

	void setWathType(std::string type);
	std::string getWatchType() const;
	~Watch() { countOfObjects--; }

};
