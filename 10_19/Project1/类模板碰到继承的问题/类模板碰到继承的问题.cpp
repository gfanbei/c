#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//��ģ�������̳�����
template<class T>
class Base
{
public:
	Base()
	{
		cout << typeid(T).name() << endl;
	}

public:

	T  m_A;//double
	
};

//�ڼ̳�ʱ ���ø��� �����г�Ա���� ���Ͳ�֪����� Ҫ���ߣ������޷������ڴ�
class Child :public Base<int>
{



};

//Child2Ҳ��ģ����
template<class T1,class T2>
class Child2 :public Base<T2>//���û�ָ������
{
public:

	Child2()
	{
		cout << typeid(T1).name() << endl;
		cout << typeid(T2).name() << endl;
	}


public:
	T1  m_B;//int
};
void test01()
{
	Child2<int,double> c1;//��ʽָ������

}


int main()
{
	test01();
	
	system("pause");
	return 0;
}