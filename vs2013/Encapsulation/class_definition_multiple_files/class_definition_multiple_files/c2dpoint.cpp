#include "stdafx.h"
#include "c2dpoint.h"

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