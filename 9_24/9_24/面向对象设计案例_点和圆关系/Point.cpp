# pragma once
# include<iostream>
#include"Point.h"
using namespace std;



void Point::setp_x(int x1)
{
	m_x1 = x1;
}
//��ȡ��x����
int Point::getp_x()
{
	return m_x1;
}

//���õ�y����
void Point::setp_y(int y1)
{
	m_y1 = y1;
}

//��ȡ��y����
int Point::getp_y()
{
	return m_y1;
}
