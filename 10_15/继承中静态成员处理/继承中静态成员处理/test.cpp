#include<iostream>
#include<string>
using namespace std;

//��̳и�����⣨�����ԣ�
class Base1
{
public:
	Base1()
	{
		m_A = 10;
	}

public:
	int m_A;

};


class Base2
{

public:
	Base2()
	{
		m_A = 20;
	}

public:
	int m_A;

};

//��̳�
class Son:public Base1, public Base2
{
public:
	int m_C;
	int m_D;

};

void test01()
{
	cout << sizeof(Son) << endl;//16
	Son s1;

	//s1.m_A//���������� �����������еĳ�Ա ������ͬ �������з���ʱ �ᷢ����ͻ

	//�������  ��������
	cout << s1.::Base1::m_A << endl;
	cout << s1.::Base2::m_A << endl;

}

int main()
{

	test01();
	system("pause");
	return 0;
}