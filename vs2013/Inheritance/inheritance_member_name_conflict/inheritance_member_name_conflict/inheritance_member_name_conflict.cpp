// inheritance_member_name_conflict.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Base
{
public:
	int m_nValue;

public:
	Base(int nValue)
		: m_nValue(nValue) {
	}
	void Identify() {
		cout << "I am a Base" << endl;
	}
};

class Derived : public Base
{
public:
	Derived(int nValue)
		:Base(nValue) {
		m_nValue = nValue + 1;
	}
	int GetValue() {
		return m_nValue;
	}

	// Here's our modified function
	void Identify() {
		cout << "I am a Derived" << endl;
	}
	void Identify2() {
		Base::Identify();
	}
public:
	int m_nValue;
};

int main()
{
	Derived one(2);

	cout << one.m_nValue << endl;
	cout << one.Base::m_nValue << endl;

	one.Identify();
	one.Base::Identify();
	one.Identify2();

	return 0;
}

