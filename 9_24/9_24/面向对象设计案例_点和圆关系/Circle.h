#pragma once// ��ֹͷ�ļ��ظ���д
#include <iostream>
using namespace std;

#include"Point.h"




//Բ��
class Circle
{
private:

	/*
	int m_x0;//Բ��x
	int m_y0;//Բ��y
	*/

	Point m_center;//Բ��,�ࣨԲ�ࣩ��������ࣨ���ࣩ
	int m_r;//�뾶r

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

	//����Բ��

	void setcenter(Point p2);
	/*{
		m_center = p2;
	}*/

	Point getcenter();
	/*{
		return m_center;
	}*/

	//���ð뾶
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
			cout << "��Ա������������Բ��" << endl;

		if (distance > r_diastance)
			cout << "��Ա������������Բ��" << endl;


		if (distance < r_diastance)
			cout << "��Ա������������Բ��" << endl;

	}*/



};
