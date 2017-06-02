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
	Cents(int nCents = 0) {
		m_nCents = nCents;
	}

	// Overload -cCents
	friend Cents operator-(const Cents &cCents);

	// Return true if use default constructor
	friend bool operator! (const Cents &cCents);

	int GetCents() {
		return m_nCents;
	}
};

// note: this function is not a member function!
Cents operator-(const Cents &cCents)
{
	return Cents(-cCents.m_nCents);
}

// Return true if use default constructor
bool operator! (const Cents &cCents)
{
	return (cCents.m_nCents == 0);
}

int main()
{
	Cents cCents1(6);
	Cents cCentsSum = -cCents1;
	cout << "I have " << cCentsSum.GetCents() << " cents" << endl;

	Cents cCents2; // use default contructor to set to m_nCents = 0
	if (!cCents2) {
		cout << "cCents2 was set use default constructor." << endl;
	} else {
		cout << "cCents2 was set use reload constructor." << endl;
	}

	return 0;
}
