// InitInheritance.cpp : 一个派生的class类型的对象中的成员的初始化次序。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class C2DClosedShape
{
public:
	C2DClosedShape() {
		m_area = 0;
		m_perimeter = 0;
		cout << "C2DClosedShape default constructor called." << endl;
	}
	~C2DClosedShape() {
		cout << "C2DClosedShape default destructor called." << endl;
	}
	int getPerimeter() {
		return m_perimeter;
	}
	int getArea() {
		return m_area;
	}

private:
	int m_area;
	int m_perimeter;
};

class CPoint
{
public:
	CPoint() {
		cout << "CPoint default constructor called." << endl;
	}
	CPoint(int x, int y) {
		m_xPos = x;
		m_yPos = y;
		cout << "CPoint overload constructor called: " << x << ", " << y << endl;
	}
	~CPoint() {
		cout << "CPoint destructor called. " << m_xPos << ", " << m_yPos << endl;
	}

private:
	int m_xPos, m_yPos;
};

class CRect : public C2DClosedShape
{
public:
	CRect() {
		cout << "CRect default constructor called." << endl;
	}
	//	CRect(int x1, int y1, int x2, int y2) {
	//		m_ptLT = CPoint(x1, y1);
	//		m_ptRB = CPoint(x2, y2);
	//		cout << "CRect overload constructor called." << endl;
	//	}
	CRect(int x1, int y1, int x2, int y2) :
		m_ptRB(x2, y2),
		m_ptLT(x1, y1),
		C2DClosedShape() {
		cout << "CRect overload constructor called." << endl;
	}
	~CRect() {
		cout << "CRect destructor called." << endl;
	}

private:
	CPoint m_ptLT, m_ptRB;
};

int main(int argc, char* argv[])
{
	CRect var(1, 1, 4, 4);
	return 0;
}