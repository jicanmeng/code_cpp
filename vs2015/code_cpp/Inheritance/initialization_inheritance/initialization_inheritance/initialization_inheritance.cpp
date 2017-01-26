// initialization_inheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cstring>
using namespace std;

class CPoint
{
public:
	CPoint(int x = 0, int y = 0) {
		xPos = x;
		yPos = y;
		cout << "CPoint constructor! xPos=" << xPos << ",yPos=" << yPos << endl;
	}
private:
	int xPos, yPos;
};

class Base
{
public:
	int m_nValue;
	Base(int nValue = 0)
		:m_nValue(nValue)
	{
		cout << "Base constructor! nValue=" << nValue << endl;
	}
};

class Derived : public Base
{
public:
	double m_dValue;
	Derived(double dValue = 0.0, int nValue = 0)
		:m_dValue(dValue), m_point(3, 4), Base(nValue)
	{
		cout << "Derived constructor! dValue=" << dValue << endl;
	}
private:
	CPoint m_point;
};

int main()
{
	Derived one(5.5, 2);
	return 0;
}

