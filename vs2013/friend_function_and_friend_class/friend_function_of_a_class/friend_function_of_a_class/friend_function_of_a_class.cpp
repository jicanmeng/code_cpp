// friend_function_of_a_class.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

class C2DPoint
{
private:
	int m_xPos;
	int m_yPos;
public:
	C2DPoint() {
		std::cout << "CPoint default constructor called." << std::endl;
		m_xPos = 0;
		m_yPos = 0;
	}
	C2DPoint(int x, int y) {
		std::cout << "CPoint overload constructor called: " << x << ", " << y << std::endl;
		m_xPos = x;
		m_yPos = y;
	}
	void setAxis(int x, int y) {
		m_xPos = x;
		m_yPos = y;
	}
	int getXAxis() {
		return m_xPos;
	}
	int getYAxis() {
		return m_yPos;
	}
	~C2DPoint() {
		std::cout << "CPoint destructor called: " << m_xPos << ", " << m_yPos << std::endl;
	}
	friend bool IsEqual(const C2DPoint &ptA, const C2DPoint &ptB);
};

bool IsEqual(const C2DPoint &ptA, const C2DPoint &ptB)
{
	if (ptA.m_xPos == ptB.m_xPos && ptA.m_yPos == ptB.m_yPos) {
		return true;
	}
	return false;
}

int main()
{
	C2DPoint ptA(1, 1);
	C2DPoint ptB(2, 2);
	std::cout << (IsEqual(ptA, ptB) ? "equal" : "not equal") << std::endl;

	return 0;
}

