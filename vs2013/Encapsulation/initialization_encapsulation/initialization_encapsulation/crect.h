#ifndef CRECT_H
#define CRECT_H

#include "c2dpoint.h"

class CRect
{
public:
	CRect();
	CRect(int x1, int y1, int x2, int y2);
	~CRect();

private:
	C2DPoint m_ptLT, m_ptRB;
};

#endif