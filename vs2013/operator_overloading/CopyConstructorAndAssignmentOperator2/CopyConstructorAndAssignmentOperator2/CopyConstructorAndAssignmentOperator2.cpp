// CopyConstructorAndAssignmentOperator2.cpp : copy constructor¡£
//

#include "stdafx.h"
#include <iostream>
#pragma warning(disable:4996)

using namespace std;

class CPoint
{
public:
	CPoint() {
		cout << "CPoint default constructor called." << endl;
	}
	CPoint(int x, int y, const char *pchString = "") {
		m_xPos = x;
		m_yPos = y;
		cout << "CPoint overload constructor called: " << x << ", " << y << endl;

		// Find the length of the string
		// Plus one character for a terminator
		m_nLength = strlen(pchString) + 1;

		// Allocate a buffer equal to this length
		m_pchString = new char[m_nLength];

		// Copy the parameter into our internal buffer
		strncpy(m_pchString, pchString, m_nLength);

		// Make sure the string is terminated
		m_pchString[m_nLength - 1] = '\0';
	}

	// Copy constructor
	//CPoint(const CPoint &pt){
	//	m_xPos = pt.m_xPos;
	//	m_yPos = pt.m_yPos;
	//	cout << "CPoint copy constructor called" << endl;
	//}

	// assignment operator overloading
	CPoint& operator= (const CPoint &pt);

	~CPoint() {
		cout << "CPoint destructor called. " << m_xPos << ", " << m_yPos << endl;
		if (m_pchString) {
			delete[] m_pchString;
		}
		m_pchString = NULL;
	}

	char* GetString() { return m_pchString; }
	int GetLength() { return m_nLength; }

private:
	int m_xPos, m_yPos;
	char *m_pchString;
	int m_nLength;
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
	CPoint ptA(1, 1, "point axis of left top");

	{
		CPoint ptB = ptA; // use default copy constructor
	} // ptB goes out of scope here

	std::cout << ptA.GetString() << std::endl; // this will crash

	return 0;
}

