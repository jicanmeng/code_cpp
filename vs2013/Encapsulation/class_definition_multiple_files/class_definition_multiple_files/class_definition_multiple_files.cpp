// class_definition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "c2dpoint.h"

using namespace std;

int main()
{
	C2DPoint ptA;
	ptA.setAxis(5, 6);
	cout << "point axis is (" << ptA.getXAxis() <<
		", " << ptA.getYAxis() << ")" << endl;

	return 0;
}

