#pragma once// 防止头文件重复编写
#include <iostream>
using namespace std;

#include"Point.h"




//圆类
class Circle
{
private:

	/*
	int m_x0;//圆心x
	int m_y0;//圆心y
	*/

	Point m_center;//圆心,类（圆类）里面包含类（点类）
	int m_r;//半径r

public:

# if 0
	void setcircle_x(int x0)
	{
		m_x0 = x0;
	}

	int getcircle_x()
	{

		return m_x0;
	}


	void setcircle_y(int y0)
	{
		m_y0 = y0;
	}

	int getcircle_y()
	{

		return m_y0;
	}

#endif

	//设置圆心

	void setcenter(Point p2);
	/*{
		m_center = p2;
	}*/

	Point getcenter();
	/*{
		return m_center;
	}*/

	//设置半径
	void setcircle_r(int r0);
	/*{
		m_r = r0;
	}*/

	int getcircle_r();
	/*{

		return m_r;
	}*/

	void isInCiraleByClass(Point &p1);
	/*{
		int  distance = (p1.getp_x() - m_center.getp_x())*(p1.getp_x() - m_center.getp_x()) + (p1.getp_y() - m_center.getp_y()) * (p1.getp_y() - m_center.getp_y());

		int r_diastance = m_r * m_r;

		if (distance == r_diastance)
			cout << "成员函数：：点在圆上" << endl;

		if (distance > r_diastance)
			cout << "成员函数：：点在圆外" << endl;


		if (distance < r_diastance)
			cout << "成员函数：：点在圆内" << endl;

	}*/



};
