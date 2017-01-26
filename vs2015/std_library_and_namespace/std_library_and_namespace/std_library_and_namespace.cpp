// std_library_and_namespace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	cout << "hello,world" << endl;
	cout << "typeid(int).name() is " << typeid(int).name() << endl;
	cout << "typeid(double).name() is " << typeid(double).name() << endl;

    return 0;
}

