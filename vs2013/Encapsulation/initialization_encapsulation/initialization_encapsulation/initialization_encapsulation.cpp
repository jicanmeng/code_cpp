// initialization_encapsulation.cpp : 一个class类型的对象中的成员的初始化次序
//

#include "stdafx.h"
#include <iostream>
#include "crect.h"

int main(int argc, char* argv[])
{
	CRect var(1, 1, 4, 4);
	std::cout << "hello,world" << std::endl;
	return 0;
}

