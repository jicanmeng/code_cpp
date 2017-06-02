#ifndef C2DPOINT_H
#define C2DPOINT_H

class C2DPoint
{
public:
	C2DPoint();
	C2DPoint(int x, int y, const char *pchString = "");
	~C2DPoint();
	void setAxis(int x, int y);
	int getXAxis();
	int getYAxis();

	char* GetString() { return m_pchString; }
	int GetLength() { return m_nLength; }

private:
	int m_xPos;
	int m_yPos;
	char *m_pchString;
	int m_nLength;
};

#endif