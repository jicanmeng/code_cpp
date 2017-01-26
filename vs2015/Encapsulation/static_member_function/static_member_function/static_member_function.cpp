// static_member_function.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>

class IDGenerator
{
private:
	static int s_nNextID;

public:
	static int GetNextID() {
		return s_nNextID++;
	}
};

// We'll start generating IDs at 1
int IDGenerator::s_nNextID = 1;

int main()
{
	for (int i = 0; i < 5; i++) {
		std::cout << "The next ID is: " << IDGenerator::GetNextID() << std::endl;
	}

	return 0;
}
