// friend_function_as_member.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

class Humidity;

class Temperature
{
private:
	int m_nTemp;
public:
	Temperature(int nTemp) {
		m_nTemp = nTemp;
	}
	void PrintWeather(Humidity &cHumidity);
};

class Humidity
{
private:
	int m_nHumidity;
public:
	Humidity(int nHumidity) {
		m_nHumidity = nHumidity;
	}
	friend void Temperature::PrintWeather(Humidity &cHumidity);
};

void Temperature::PrintWeather(Humidity &cHumidity)
{
	std::cout << "The temperature is " << m_nTemp <<
		" and the humidity is " << cHumidity.m_nHumidity << std::endl;
}

int main()
{
	Temperature cTemperature(25);
	Humidity cHumidity(30);
	cTemperature.PrintWeather(cHumidity);
	return 0;
}

