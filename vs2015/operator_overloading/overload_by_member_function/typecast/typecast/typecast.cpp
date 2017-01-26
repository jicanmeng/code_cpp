// typecast.cpp : Defines the entry point for the console application.
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
	// Overloaded int cast
	operator int() {
		return m_nCents;
	}
	int GetCents() {
		return m_nCents;
	}
	void SetCents(int nCents) {
		m_nCents = nCents;
	}
};

class Dollars
{
private:
	int m_nDollars;

public:
	Dollars(int nDollars = 0) {
		m_nDollars = nDollars;
	}

	// Allow us to convert Dollars into Cents
	operator Cents() {
		return Cents(m_nDollars * 100);
	}
};

void PrintInt(int nValue)
{
	cout << nValue;
}

void PrintCents(Cents cCents)
{
	//    cout << cCents.GetCents();		//use this line of code or next line
	PrintInt(cCents);
}

int main()
{
	Cents cCents(7);
	PrintInt(cCents); // cCents will be cast to a int
	cout << endl;

	int nCents = static_cast<int>(cCents);
	cout << "using explicitly cast: nCents is " << nCents << endl;

	Dollars cDollars(9);
	PrintCents(cDollars); // cDollars will be cast to a Cents
	cout << endl;

	return 0;
}

