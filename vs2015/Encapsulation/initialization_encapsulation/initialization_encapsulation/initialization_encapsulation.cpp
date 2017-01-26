// initialization_encapsulation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class CPoint
{
public:
	CPoint(int x, int y) {
		xPos = x;
		yPos = y;
		cout << "CPoint overloaded constructor! xPos=" << xPos << ",yPos=" << yPos << endl;
	}
    CPoint() {
        cout << "CPoint explicit default constructor!" << endl;
    }
private:
	int xPos, yPos;
};
class CRect
{
public:
	CRect(int x1, int y1, int x2, int y2)
	{
		cout << "CRect overloaded constructor!" << endl;
		m_ptLT = CPoint(x1, y1);
		m_ptRB = CPoint(x2, y2);
	}
private:
	CPoint m_ptLT, m_ptRB;
};
int main()
{
	CRect rc(10, 100, 80, 250);
	return 0;
}


