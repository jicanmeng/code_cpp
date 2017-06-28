// class_definition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class C2DPoint
{
private:
	int m_xPos;
	int m_yPos;
public:
	void setAxis(int x, int y) {
		m_xPos = x;
		m_yPos = y;
	}
	int getXAxis() {
		return m_xPos;
	}
	int getYAxis() {
		return m_yPos;
	}
};

int main()
{
	C2DPoint ptA;

	ptA.setAxis(5, 6);
	cout << "point axis is (" << ptA.getXAxis() <<
		", " << ptA.getYAxis() << ")" << endl;

	return 0;
}

