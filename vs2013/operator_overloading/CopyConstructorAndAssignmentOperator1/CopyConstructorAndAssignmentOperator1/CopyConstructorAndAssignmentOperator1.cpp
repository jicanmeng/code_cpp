// CopyConstructorAndAssignmentOperator1.cpp : copy constructor¡£
//

#include "stdafx.h"
#include <iostream>

using namespace std;

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

	// Copy constructor
	CPoint(const CPoint &pt){
		m_xPos = pt.m_xPos;
		m_yPos = pt.m_yPos;
		cout << "CPoint copy constructor called" << endl;
	}

	// assignment operator overloading
	CPoint& operator= (const CPoint &pt);

	~CPoint() {
		cout << "CPoint destructor called. " << m_xPos << ", " << m_yPos << endl;
	}

private:
	int m_xPos, m_yPos;
};

CPoint& CPoint::operator= (const CPoint &pt)
{
	cout << "CPoint assignment operator overload function called" << endl;

	// check for self-assignment by comparing the address of the
	// implicit object and the parameter
	if (this == &pt)
		return *this;

	// do the copy
	m_xPos = pt.m_xPos;
	m_yPos = pt.m_yPos;

	// return the existing object
	return *this;
}

int _tmain(int argc, _TCHAR* argv[])
{
	CPoint ptA(1, 1);
	CPoint ptB(2, 3);
	
	ptA = ptB;			//assignment operator overloading
	CPoint ptC(ptA);	//copy constructor

	return 0;
}

