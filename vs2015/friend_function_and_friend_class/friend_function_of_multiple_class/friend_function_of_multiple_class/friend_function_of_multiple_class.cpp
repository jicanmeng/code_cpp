// friend_function_of_multiple_class.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>

class Humidity;

class Temperature
{
private:
	int m_nTemp;
public:
	Temperature(int nTemp) { m_nTemp = nTemp; }
	friend void PrintWeather(Temperature &cTemperature, Humidity &cHumidity);
};

class Humidity
{
private:
	int m_nHumidity;
public:
	Humidity(int nHumidity) { m_nHumidity = nHumidity; }
	friend void PrintWeather(Temperature &cTemperature, Humidity &cHumidity);
};

void PrintWeather(Temperature &cTemperature, Humidity &cHumidity)
{
	std::cout << "The temperature is " << cTemperature.m_nTemp <<
		" and the humidity is " << cHumidity.m_nHumidity << std::endl;
}

int main()
{
	Temperature cTemperature(25);
	Humidity cHumidity(30);
	PrintWeather(cTemperature, cHumidity);
	return 0;
}
