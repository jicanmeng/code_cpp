// function_template_instance1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

template <typename T> // this is the template parameter declaration
const T& max(const T& x, const T& y)
{
	return (x > y) ? x : y;
}

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents)
		: m_cents(cents)
	{
	}
	friend bool operator>(const Cents &c1, const Cents &c2) {
		return (c1.m_cents > c2.m_cents) ? true : false;
	}
	int getCents() {
		return m_cents;
	}
};

int main()
{
	Cents nickle(5);
	Cents dime(10);

	Cents bigger = max(nickle, dime);
	std::cout << "bigger number is " << bigger.getCents() << std::endl;

	return 0;
}

