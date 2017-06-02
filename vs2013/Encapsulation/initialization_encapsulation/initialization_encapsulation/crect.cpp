#include "stdafx.h"
#include <iostream>
#include "crect.h"

using namespace std;

CRect::CRect() {
	cout << "CRect default constructor called." << endl;
}

// 对象成员列表方式
CRect::CRect(int x1, int y1, int x2, int y2) :
	m_ptRB(x2, y2),
	m_ptLT(x1, y1) {
	cout << "CRect overload constructor called." << endl;
}

// 函数构造方式. 注意: 在本例子中使用这种方式程序会崩溃. 这涉及到了另外一个知识点: assignment operator overloading.
//CRect::CRect(int x1, int y1, int x2, int y2) {
//	m_ptLT = C2DPoint(x1, y1);
//	m_ptRB = C2DPoint(x2, y2);
//	cout << "CRect overload constructor called." << endl;
//}

CRect::~CRect() {
	cout << "CRect destructor called." << endl;
}
