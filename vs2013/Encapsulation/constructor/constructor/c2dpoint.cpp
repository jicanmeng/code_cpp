#include "stdafx.h"
#include "c2dpoint.h"
#include <iostream>

C2DPoint::C2DPoint() {
	std::cout << "CPoint default constructor called." << std::endl;
	m_xPos = 0;
	m_yPos = 0;
}
C2DPoint::C2DPoint(int x, int y) {
	std::cout << "CPoint overload constructor called: " << x << ", " << y << std::endl;
	m_xPos = x;
	m_yPos = y;
}
void C2DPoint::setAxis(int x, int y) {
	m_xPos = x;
	m_yPos = y;
}

int C2DPoint::getXAxis() {
	return m_xPos;
}

int C2DPoint::getYAxis() {
	return m_yPos;
}