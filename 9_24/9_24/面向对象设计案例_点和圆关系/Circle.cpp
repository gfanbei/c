# pragma once
# include<iostream>
#include"Circle.h"
#include"Point.h"
using namespace std;

//����Բ��

//ע�⺯��ʵ���Ҫ��������

void Circle::setcenter(Point p2)
{
	m_center = p2;
}

Point Circle::getcenter()
{
	return m_center;
}

//���ð뾶
void Circle::setcircle_r(int r0)
{
	m_r = r0;
}

int Circle::getcircle_r()//��ȡ�뾶
{

	return m_r;
}

//��Ա�����жϣ����Բ�Ĺ�ϵ
void Circle::isInCiraleByClass(Point &p1)
{
	int  distance = (p1.getp_x() - m_center.getp_x())*(p1.getp_x() - m_center.getp_x()) + (p1.getp_y() - m_center.getp_y()) * (p1.getp_y() - m_center.getp_y());

	int r_diastance = m_r * m_r;

	if (distance == r_diastance)
		cout << "��Ա������������Բ��" << endl;

	if (distance > r_diastance)
		cout << "��Ա������������Բ��" << endl;


	if (distance < r_diastance)
		cout << "��Ա������������Բ��" << endl;

}
