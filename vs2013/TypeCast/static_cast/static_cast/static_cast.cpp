// static_cast.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main(int argc, _TCHAR* argv[])
{
    float a = 3.2f;
    int b = (int)a;
    //int b = static_cast<int>(a);

    std::cout << b << std::endl;
	return 0;
}

