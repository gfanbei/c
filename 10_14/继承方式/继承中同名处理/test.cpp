#include<iostream>
#include<string>
using namespace std;


//�̳��е�ͬ������
class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void fun()
	{
		cout<<"Base��fun����"<<endl;
	}

	void fun(int  a)//��Ա��������
	{
		cout << "Base��fun(int a)����" << endl;
	}

	int m_A;
};


class Son:public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void fun()
	{
		cout << "Son��fun����" << endl;
	}


	int m_A;
};


void test01()
{
	Son s1;
	
	cout << s1.m_A << endl;//200
	//��ε��ø����m_A
	cout << s1.Base::m_A << endl;//100

	s1.fun();//���ͽ������Son����û��fun�����ø����е�fun
	//���ø����fun
	s1.Base::fun();

	//s1.fun(10);
	s1.Base::fun(10);

}



//�������͸���ӵ��ͬ���ĺ��� ���ԣ��������ø���ĳ�Ա��  ����
//��������븸��ĳ�Ա����������ͬ �����Ѹ�������е�ͬ���汾���ص�
//������ø���ķ��� �����������
int main()   
{
	test01();
	system("pause");
	return 0;
}