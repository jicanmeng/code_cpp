// this_pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Simple
{
private:
	int m_nID;
public:
	Simple(int nID) {
		m_nID = nID;
	}
	void SetID(int m_nID) {
		this->m_nID = m_nID;
	}
	int GetID() {
		return m_nID;
	}
};

int main()
{
	Simple cSimple(1);
	cSimple.SetID(2);
	cout << cSimple.GetID() << endl;

	return 0;
}


