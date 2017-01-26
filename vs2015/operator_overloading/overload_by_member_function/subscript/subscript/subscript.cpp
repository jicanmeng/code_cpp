// subscript.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cassert> // for assert()
using namespace std;

class IntList
{
private:
	int m_anList[10];

public:
	int& operator[] (const int nIndex);
};

int& IntList::operator[] (const int nIndex)
{
	assert(nIndex >= 0 && nIndex < 10);
	return m_anList[nIndex];
}

int main()
{
	IntList cMyList;
	cMyList[2] = 3; 			// set a value
	cout << cMyList[2] << endl; // get a value
	return 0;
}

