#include<iostream>
#include<string.h>


#include"Circle.h"
#include"Point.h"
using namespace std;

//1.���һ��Բ�ࣨCircle������1�����ࣨPoint����������Բ�Ĺ�ϵ
//  ����Բ������Ϊx0��y0���뾶Ϊr���������Ϊx1��y1
//2. ���ļ���д
//3�ֹ�ϵ�ж�
//.h��д��ĳ�Ա����
//.cpp��д��Ա����ʵ��

#if 0

//���Բ�Ĺ�ϵ
 // �㣨x1,x2��,Բ[x0,y0,r]


//����
class	Point
{
private:
	int m_x1;
	int m_y1;

public:
	//���õ�x����
	void setp_x(int x1)
	{
		m_x1 = x1;
	}
	//��ȡ��x����
	int getp_x()
	{
		return m_x1;
	}

	//���õ�y����
	void setp_y(int y1)
	{
		m_y1 = y1;
	}

	//��ȡ��y����
	int getp_y()
	{
		return m_y1;
	}

};

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

	void setcenter(Point p2)
	{
		m_center = p2;
	}

	Point getcenter()
	{
		return m_center;
	}

	//���ð뾶
	void setcircle_r(int r0)
	{
		m_r = r0;
	}

	int getcircle_r()
	{

		return m_r;
	}
};


#endif

//ȫ�ֺ�����ʵ���жϵ��Բ�Ĺ�ϵ
void judge(Point & p1, Circle & c1)//���ã�����Ϊ�ռ䣩
{
	//�����ľ���
	int  distance = (p1.getp_x() - c1.getcenter().getp_x())*(p1.getp_x() - c1.getcenter().getp_x()) + (p1.getp_y() - c1.getcenter().getp_y()) * (p1.getp_y() - c1.getcenter().getp_y());

	int r_diastance = c1.getcircle_r() * c1.getcircle_r(); //Բ�İ뾶��ƽ��
	
		if(distance == r_diastance)
	    cout << "����Բ��" << endl;

		if (distance > r_diastance)
		cout << "����Բ��" << endl;

	
		if (distance < r_diastance)
		cout << "����Բ��" << endl;
}

void test01()
{
	Point  p; //������
	

	p.setp_x(10);//���õ�x����
	p.setp_y(11);//���õ�y����


	Circle c;//����Բ
	Point  center; //����Բ������ࣨ���ࣩ

	center.setp_x(10);
	center.setp_y(0);
	c.setcenter(center);//����Բ�������

	//c.setcircle_x(10);//����Բ��x����
	//c.setcircle_y(0);//����Բ��y����

	c.setcircle_r(10);//����Բ�뾶r

	//ȫ�ֺ����ж�
	judge( p, c);//��ϵ�ж�

	//���ó�Ա�����ж�
	c.isInCiraleByClass(p);
}
int main()
{
	test01();
	system("pause");
	return 0;
}