// increment_decrement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class Digit
{
private:
	int m_nDigit;

public:
	Digit(int nDigit = 0) {
		m_nDigit = nDigit;
	}

	Digit& operator++(); // prefix
	Digit& operator--(); // prefix
	Digit operator++(int); // postfix
	Digit operator--(int); // postfix

	int GetDigit() const {
		return m_nDigit;
	}
};

Digit& Digit::operator++()
{
	// If our number is already at 9, wrap around to 0
	if (m_nDigit == 9)
		m_nDigit = 0;
	// otherwise just increment to next number
	else
		++m_nDigit;
	return *this;
}
Digit& Digit::operator--()
{
	// If our number is already at 0, wrap around to 9
	if (m_nDigit == 0)
		m_nDigit = 9;
	// otherwise just decrement to next number
	else
		--m_nDigit;
	return *this;
}

Digit Digit::operator++(int)
{
	// Create a temporary variable with our current digit
	Digit cResult(m_nDigit);
	// Use prefix operator to increment this digit
	++(*this);             // apply operator
						   // return temporary result
	return cResult;       // return saved state
}

Digit Digit::operator--(int)
{
	// Create a temporary variable with our current digit
	Digit cResult(m_nDigit);
	// Use prefix operator to increment this digit
	--(*this);             // apply operator
						   // return temporary result
	return cResult;       // return saved state
}

int main()
{
	Digit cDigit1(5), cDigit2(5), digit1, digit2;

	digit1 = ++cDigit1; // calls Digit::operator++();
	digit2 = cDigit2++; // calls Digit::operator++(int);
	cout << "digit1 is " << digit1.GetDigit() << endl;
	cout << "digit2 is " << digit2.GetDigit() << endl;

	return 0;
}

