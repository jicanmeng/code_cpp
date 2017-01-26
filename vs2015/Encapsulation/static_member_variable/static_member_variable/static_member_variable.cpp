// static_member_variable.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>

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
	std::cout << cSecond.s_nValue << std::endl;

	Something::s_nValue = 3;
	std::cout << cSecond.s_nValue << std::endl;

	return 0;
}
