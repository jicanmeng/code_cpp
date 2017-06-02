// constructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "c2dpoint.h"

using namespace std;

int main()
{
	C2DPoint ptA(3, 4);
	cout << "pointA axis is (" << ptA.getXAxis() <<
		", " << ptA.getYAxis() << ")" << endl;

	C2DPoint ptB;
	cout << "pointB axis is (" << ptB.getXAxis() <<
		", " << ptB.getYAxis() << ")" << endl;

	return 0;
}

