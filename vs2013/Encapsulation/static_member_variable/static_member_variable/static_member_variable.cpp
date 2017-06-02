// static_member_variable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Something
{
public:
	static int s_nValue;
};

int Something::s_nValue = 1;

int main()
{
	Something cFirst;
	cFirst.s_nValue = 2;

	Something cSecond;
	cout << cSecond.s_nValue << endl;

	Something::s_nValue = 3;
	cout << cSecond.s_nValue << endl;

	return 0;
}
