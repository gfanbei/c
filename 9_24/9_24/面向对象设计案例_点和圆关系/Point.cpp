# pragma once
# include<iostream>
#include"Point.h"
using namespace std;



void Point::setp_x(int x1)
{
	m_x1 = x1;
}
//读取点x坐标
int Point::getp_x()
{
	return m_x1;
}

//设置点y坐标
void Point::setp_y(int y1)
{
	m_y1 = y1;
}

//读取点y坐标
int Point::getp_y()
{
	return m_y1;
}
