// function_template_specialization1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename T>  // this is the template parameter declaration
const T& max(const T& x, const T& y)
{
	return (x > y) ? x : y;
}

template <>
const double& max(const double& x, const double& y)
{
	cout << "compare double values" << endl;
	return 1.2345;
}

int main()
{
	int i = max(3, 7);
	std::cout << i << '\n';

	double d = max(6.34, 18.523);
	std::cout << d << '\n';

	char ch = max('a', '6');
	std::cout << ch << '\n';

	return 0;
}

