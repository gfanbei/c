#include<iostream>
using namespace  std;

const double  pi = 3.14;

//���һ��Բ��  ���ܳ� 
class Circle  //��������һ���� ����������������
{
public://����Ȩ��


	//��������д����
	double  caculat_zc()//��Ա���� ����Բ���ܳ�
	{
		return 2 * pi* m_r;
	}

	//���ð뾶�ĳ�Ա����
	void set_r(int r)//��Ա����
	{
		m_r = r;
	}
	//�뾶(����)  ��Ա����
	int m_r;


};

void test01()
{
	Circle c1;//ͨ���� ������һ��Բ������
	//c1.m_r = 10; //�������������Ը�ֵ

	c1.set_r(10);//ͨ����Ա��������Ӹ���������Ը�ֵ

	cout << "c1=" << c1.caculat_zc() << endl;
}

int main()
{

	test01();
	return 0;
}