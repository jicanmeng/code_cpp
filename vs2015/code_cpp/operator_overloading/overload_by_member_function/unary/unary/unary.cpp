// unary.cpp : Defines the entry point for the console application.
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
	Cents operator-();
	int GetCents() {
		return m_nCents;
	}
};

Cents Cents::operator-()
{
	return Cents(-m_nCents);
}

int main()
{
	Cents cCents1(6);
	Cents cCentsSum = -cCents1;
	cout << "I have " << cCentsSum.GetCents() << " cents" << endl;
	return 0;
}

