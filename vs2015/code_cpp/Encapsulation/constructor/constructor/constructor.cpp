// constructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class CA
{
public:
	CA(int x = 5, int y = 5) {
		a = x;
		b = y;
		cout << "constructor function called" << endl;
	}
	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
private:
	int a, b;
};

int main()
{
	CA objectOne(3, 4);
	cout << "objectOne.getA() is " << objectOne.getA() << endl;
	cout << "objectOne.getB() is " << objectOne.getB() << endl;

	CA objectTwo;
	cout << "objectTwo.getA() is " << objectTwo.getA() << endl;
	cout << "objectTwo.getB() is " << objectTwo.getB() << endl;

	return 0;
}

