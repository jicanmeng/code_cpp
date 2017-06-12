// function_template_specialization2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

template <class T>
class Storage
{
private:
	T m_value;
public:
	Storage(T value) {
		m_value = value;
	}

	~Storage() {
	}

	void print() {
		std::cout << m_value << '\n';
	}
};

template<>
void Storage<double>::print() {
	std::cout << std::scientific << m_value << '\n';
}

template<>
Storage<char *>::Storage(char *value) {
	int length = strlen(value) + 1;
	m_value = new char[length];

	// Copy the actual value string into the m_value memory we just allocated
	for (int count = 0; count < length; ++count) {
		m_value[count] = value[count];
	}
}
template <>
Storage<char*>::~Storage()
{
	if (m_value) {
		delete[] m_value;
	}
}

int main()
{
	// 1. one example --start
	// Define some storage units
	Storage<int> nValue(5);
	Storage<double> dValue(6.7);

	// Print out some values
	nValue.print();
	dValue.print();
	// 1. one example --end

	// 2. another example --start
	// Dynamically allocate a temporary string
	char *string = new char[40];

	// Ask user for their name
	std::cout << "Enter your name: ";
	std::cin >> string;

	// Store the name
	Storage<char*> value(string);

	// Delete the temporary string
	delete[] string;

	// Print out our value
	value.print(); // This will print garbage
	// 2. another example --end
}




