// this_pointer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>

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
	std::cout << cSimple.GetID() << std::endl;

	return 0;
}

