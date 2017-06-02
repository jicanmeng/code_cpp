#include "stdafx.h"
#include "c2dpoint.h"
#include <iostream>
#pragma warning( disable : 4996)

C2DPoint::C2DPoint() {
	std::cout << "CPoint default constructor called." << std::endl;
	m_xPos = 0;
	m_yPos = 0;
	m_pchString = NULL;
	m_nLength = 0;
}
C2DPoint::C2DPoint(int x, int y, const char *pchString) {
	std::cout << "CPoint overload constructor called: " << x << ", " << y << std::endl;
	m_xPos = x;
	m_yPos = y;

	// Find the length of the string plus one character for a terminator
	m_nLength = strlen(pchString) + 1;

	// Allocate a buffer equal to this length
	m_pchString = new char[m_nLength];

	// Copy the parameter into our internal buffer
	strncpy(m_pchString, pchString, m_nLength);

	// Make sure the string is terminated
	m_pchString[m_nLength - 1] = '\0';
}
C2DPoint::~C2DPoint() {
	std::cout << "CPoint destructor called. " << m_xPos << ", " << m_yPos << std::endl;
	if (m_pchString) {
		std::cout << "m_pchString is " << m_pchString << std::endl;
		delete[] m_pchString;
	}
	m_pchString = NULL;
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