// function_template_before.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int& max(const int& x, const int& y)
{
	return (x > y) ? x : y;
}
const double& max(const double& x, const double& y)
{
	return (x > y) ? x : y;
}
const char& max(const char& x, const char& y)
{
	return (x > y) ? x : y;
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