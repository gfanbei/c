#pragma once// ��ֹͷ�ļ��ظ���д
#include <iostream>
using namespace std;

//���� 
//����
class	Point
{
private:
	int m_x1;
	int m_y1;

public:
	//���õ�x����
	void setp_x(int x1);
	/*{
		m_x1 = x1;
	}*/
	//��ȡ��x����
	int getp_x();
	/*{
		return m_x1;
	}*/

	//���õ�y����
	void setp_y(int y1);
	/*{
		m_y1 = y1;
	}*/

	//��ȡ��y����
	int getp_y();
	/*{
		return m_y1;
	}*/

};