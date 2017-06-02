// destructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include "c2dpoint.h"

using namespace std;

int main()
{
	C2DPoint ptA(0, 0, "origin");
	cout << "ptA is : " << ptA.GetString() << endl;

	// Allocate a CPoint dynamically
	C2DPoint *pptB = new C2DPoint(-2, 2, "left top point");
	cout << "pptB points to: " << pptB->GetString() << endl;
	delete pptB;

	{
		C2DPoint ptC(2, -2, "right bottom point");
		cout << "ptC is: " << ptC.GetString() << endl;
	}

	cout << "program would exit!" << endl;
	return 0;
} // ptA destructor called here!

