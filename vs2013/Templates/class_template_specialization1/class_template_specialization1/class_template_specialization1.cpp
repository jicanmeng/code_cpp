// class_template_specialization1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

template <class T>
class Storage8
{
private:
	T m_array[8];

public:
	void set(int index, const T &value) {
		m_array[index] = value;
	}

	const T& get(int index) {
		return m_array[index];
	}
};

template <>
class Storage8<double>
{
private:
	double m_array[2];

public:
	void setValue(int index, const double &value) {
		m_array[index] = value;
	}

	const double& getValue(int index) {
		return 3.3333;
	}
};

int main()
{
	// Define a Storage8 for integers
	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
		intStorage.set(count, count);

	for (int count = 0; count < 8; ++count)
		std::cout << intStorage.get(count) << '\n';

	// Define a Storage8 for bool
	Storage8<bool> boolStorage;
	for (int count = 0; count < 8; ++count)
		boolStorage.set(count, !!(count & 3));

	for (int count = 0; count < 8; ++count)
		std::cout << (boolStorage.get(count) ? "true" : "false") << '\n';

	// Define a Storage8 for double
	Storage8<double> doubleStorage;
	for (int count = 0; count < 2; ++count)
		doubleStorage.setValue(count, 1.2345);

	for (int count = 0; count < 2; ++count)
		std::cout << doubleStorage.getValue(count) << '\n';

	return 0;
}

