// function_template_instance2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template <class T>
T average(T *array, int length)
{
	T sum = 0;
	for (int count = 0; count < length; ++count)
		sum += array[count];

	sum /= length;
	return sum;
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
		return (c1.m_cents > c2.m_cents);
	}
	friend ostream& operator<< (ostream &out, const Cents &cCents) {
		out << cCents.m_cents << " cents ";
		return out;
	}
	Cents & operator+= (Cents &c1);
	Cents & operator/= (int length);
};

Cents & Cents::operator+= (Cents &c1) {
	m_cents += c1.m_cents;
	return *this;
}

Cents & Cents::operator/= (int length) {
	m_cents /= length;
	return *this;
}

int main()
{
	int array1[] = { 5, 3, 2, 1, 4 };
	std::cout << average(array1, 5) << '\n';

	double array2[] = { 3.12, 3.45, 9.23, 6.34 };
	std::cout << average(array2, 4) << '\n';

	Cents array3[] = { Cents(5), Cents(10), Cents(15), Cents(14) };
	std::cout << average(array3, 4) << '\n';

	return 0;
}
