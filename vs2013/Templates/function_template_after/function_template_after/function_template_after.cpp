// function_template_after.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
//#include <algorithm>	//这个标准库中定义了max()函数模板，所以如果包含本头文件，就会和下面的max()模板的定义冲突

using namespace std;

template <typename T>  // this is the template parameter declaration
const T& max(const T& x, const T& y)
{
	return (x > y) ? x : y;
}

int main(int argc, char* argv[])
{
	int i = max(3, 7);
	std::cout << i << '\n';

	double d = max(6.34, 18.523);
	std::cout << d << '\n';

	char ch = max('a', '6');
	std::cout << ch << '\n';

	return 0;
}