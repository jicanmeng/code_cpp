#ifndef C2DPOINT_H
#define C2DPOINT_H

class C2DPoint
{
public:
	void setAxis(int x, int y);
	int getXAxis();
	int getYAxis();

private:
	int m_xPos;
	int m_yPos;
};

#endif