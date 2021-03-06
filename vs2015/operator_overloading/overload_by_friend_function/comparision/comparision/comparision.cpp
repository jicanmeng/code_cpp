// comparision.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class Point
{
private:
	double m_dX, m_dY, m_dZ;
public:
	Point(double dX = 0.0, double dY = 0.0, double dZ = 0.0) {
		m_dX = dX;
		m_dY = dY;
		m_dZ = dZ;
	}
	friend bool operator== (Point &cP1, Point &cP2);
	friend bool operator!= (Point &cP1, Point &cP2);
	double GetX() { return m_dX; }
	double GetY() { return m_dY; }
	double GetZ() { return m_dZ; }
};

bool operator== (Point &cP1, Point &cP2)
{
	return (cP1.m_dX == cP2.m_dX &&
		cP1.m_dY == cP2.m_dY &&
		cP1.m_dZ == cP2.m_dZ);
}

bool operator!= (Point &cP1, Point &cP2)
{
	return !(cP1 == cP2);
}

int main()
{
	Point cPoint1(2.0, 3.0, 4.0);
	Point cPoint2(6.0, 7.0, 8.0);

	if (cPoint1 == cPoint2) {
		cout << "cPoint == cPoint2" << endl;
	} else {
		cout << "cPoint != cPoint2" << endl;
	}

	return 0;
}
