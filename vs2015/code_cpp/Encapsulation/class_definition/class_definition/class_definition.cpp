// class_definition.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;

class CPoint
{
private:
	int m_x;
	int m_y;
public:
	void setAxis(int a, int b) {
		m_x = a;
		m_y = b;
	}
	void getAxis() {
		cout << "value of x is " << m_x << endl;
		cout << "value of y is " << m_y << endl;
	}
};

int main()
{
	CPoint var;
	var.setAxis(5, 6);
	var.getAxis();

	return 0;
}

