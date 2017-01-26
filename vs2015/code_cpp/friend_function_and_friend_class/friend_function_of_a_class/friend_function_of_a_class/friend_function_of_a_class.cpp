// friend_function_of_a_class.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>

class Value
{
private:
	int m_nValue;
public:
	Value(int nValue) {
		m_nValue = nValue;
	}
	friend bool IsEqual(const Value &cValue1, const Value &cValue2);
};

bool IsEqual(const Value &cValue1, const Value &cValue2)
{
	return (cValue1.m_nValue == cValue2.m_nValue);
}

int main()
{
	Value cValue1(1);
	Value cValue2(2);
	std::cout << (IsEqual(cValue1, cValue2) ? "equal" : "not equal") << std::endl;
	return 0;
}
