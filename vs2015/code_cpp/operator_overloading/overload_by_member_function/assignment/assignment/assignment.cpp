// assignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_nCents;

public:
	Cents(int nCents = 0) {
		m_nCents = nCents;
	}
	// Copy constructor
	Cents(const Cents &cSource) {
		m_nCents = cSource.m_nCents;
		cout << "copy constructor function called" << endl;
	}
	// overload the assignment operator
	Cents& operator= (const Cents &cSource);
};

Cents& Cents::operator= (const Cents &cSource)
{
	cout << "assignment operator overload function called" << endl;
	// check for self-assignment by comparing the address of the
	// implicit object and the parameter
	if (this == &cSource)
		return *this;
	// do the copy
	m_nCents = cSource.m_nCents;
	// return the existing object
	return *this;
}

int main()
{
	Cents cCents1(12);
	Cents cCents2(13);

	Cents cCents3 = cCents1;
	cout << "--------" << endl;

	cCents2 = cCents3;

	return 0;
}

