# pragma once
# include<iostream>
#include"Circle.h"
#include"Point.h"
using namespace std;

//设置圆心

//注意函数实现里，要有作用域

void Circle::setcenter(Point p2)
{
	m_center = p2;
}

Point Circle::getcenter()
{
	return m_center;
}

//设置半径
void Circle::setcircle_r(int r0)
{
	m_r = r0;
}

int Circle::getcircle_r()//获取半径
{

	return m_r;
}

//成员函数判断，点和圆的关系
void Circle::isInCiraleByClass(Point &p1)
{
	int  distance = (p1.getp_x() - m_center.getp_x())*(p1.getp_x() - m_center.getp_x()) + (p1.getp_y() - m_center.getp_y()) * (p1.getp_y() - m_center.getp_y());

	int r_diastance = m_r * m_r;

	if (distance == r_diastance)
		cout << "成员函数：：点在圆上" << endl;

	if (distance > r_diastance)
		cout << "成员函数：：点在圆外" << endl;


	if (distance < r_diastance)
		cout << "成员函数：：点在圆内" << endl;

}
