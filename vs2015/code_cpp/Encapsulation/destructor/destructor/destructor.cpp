// destructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#pragma warning( disable : 4996)

#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
	char *m_pchString;
	int m_nLength;

public:
	MyString(const char *pchString = "") {
		// Find the length of the string
		// Plus one character for a terminator
		m_nLength = strlen(pchString) + 1;
		m_pchString = new char[m_nLength];
		strncpy(m_pchString, pchString, m_nLength);
		// Make sure the string is terminated
		m_pchString[m_nLength - 1] = '\0';
		cout << "MyString constructor called" << endl;
	}

	~MyString() {
		// We need to deallocate our buffer
		if (m_pchString) {
			cout << "MyString destructor called. m_pchString is " << m_pchString << endl;
			delete[] m_pchString;
			m_pchString = NULL;
		}
	}
	char* GetString() { return m_pchString; }
	int GetLength() { return m_nLength; }
};

int main()
{
	MyString NameOne("Alex");
	cout << "My name is: " << NameOne.GetString() << endl;

	// Allocate a MyString dynamically
	MyString *pNameTwo = new MyString("Lilei");
	cout << "My name is: " << pNameTwo->GetString() << endl;
	delete pNameTwo;

	{
		MyString NameThree("HanMeimei");
		cout << "My name is: " << NameThree.GetString() << endl;
	}

	cout << "program would exit!" << endl;
	return 0;
} // NameOne destructor called here!s

