// virtual_function_destructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base() {
		cout << "Calling ~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_pnArray;
public:
	Derived(int nLength) {
		m_pnArray = new int[nLength];
	}
	virtual ~Derived() {
		cout << "Calling ~Derived()" << endl;
		delete[] m_pnArray;
	}
};

int main()
{
	Derived *pDerived = new Derived(5);

	Base *pBase = pDerived;
	delete pBase;

	return 0;
}

