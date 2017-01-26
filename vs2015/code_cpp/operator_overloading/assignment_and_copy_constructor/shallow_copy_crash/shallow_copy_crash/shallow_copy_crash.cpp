// shallow_copy_crash.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <cstring>

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
		// Allocate a buffer equal to this length
		m_pchString = new char[m_nLength];
		// Copy the parameter into our internal buffer
		strncpy(m_pchString, pchString, m_nLength);
		// Make sure the string is terminated
		m_pchString[m_nLength - 1] = '\0';
	}

	~MyString() {
		if (m_pchString) {
			delete[] m_pchString;
		}
		m_pchString = NULL;
	}
	char* GetString() { return m_pchString; }
	int GetLength() { return m_nLength; }
};

int main()
{
	MyString cHello("Hello, world!");
	
	{
		MyString cCopy = cHello; // use default copy constructor
	} // cCopy goes out of scope here

	std::cout << cHello.GetString() << std::endl; // this will crash
}

