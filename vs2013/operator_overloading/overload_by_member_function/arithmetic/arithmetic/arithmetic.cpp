// arithmetic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class Cents
{
private:
	int m_nCents;

public:
	Cents(int nCents) {
		m_nCents = nCents;
	}

	//Overload Cents + Cents
	friend Cents operator+(const Cents &c1, const Cents &c2);

	// Overload cCents + int
	Cents operator+(int nCents);

	int GetCents() {
		return m_nCents;
	}
};

//note: this function is not a member function!
Cents operator+(const Cents &c1, const Cents &c2)
{
	//use the Cents constructor and operator+(int, int)
	return Cents(c1.m_nCents + c2.m_nCents);
}

Cents Cents::operator+(int nCents)
{
	return Cents(m_nCents + nCents);
}

int main()
{
	Cents cCents1(6);
	Cents cCents2(8);

	Cents cCentsSum1 = cCents1 + cCents2;
	Cents cCentsSum2 = cCents1 + 7;
	cout << "sum1 have " << cCentsSum1.GetCents() << " cents" << endl;
	cout << "sum2 have " << cCentsSum2.GetCents() << " cents" << endl;

	return 0;
}

