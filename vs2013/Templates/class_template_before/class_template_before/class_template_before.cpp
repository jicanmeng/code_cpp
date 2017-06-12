// class_template_before.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "IntArray.h"
#include "DoubleArray.h"

int main()
{
	IntArray intArray(12);
	DoubleArray doubleArray(12);

	for (int count = 0; count < intArray.getLength(); ++count) {
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
	}

	for (int count = intArray.getLength() - 1; count >= 0; --count) {
		std::cout << intArray[count] << "\t" << doubleArray[count] << '\n';
	}

	return 0;
}

