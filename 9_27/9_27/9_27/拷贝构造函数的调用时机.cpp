#include<iostream>
#include<string.h>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<"�޲�(Ĭ��)�������"<<endl;
	}


	Person(int a)
	{
		cout << "�вι��캯������" << endl;
	}

	Person(const Person& p) //���������� ���û�� ��������ѭ��
	{
		m_age = p.m_age;
		cout << "�������캯������" << endl;
	}

	~Person()
	{
		cout << "������������" << endl;
	}

	int m_age;
};


//�������캯������ʱ��

//1.���Ѿ������õĶ�������ʼ���µö���
void test01()
{
	Person p1;//�޲�
	p1.m_age = 10;
	
	//Person p2(100);

	Person p2(p1);//����

}

//2.��ֵ���ݵķ�ʽ������������ֵ 
void dowork(Person p1) //����һ��p�൱�� Person p1 = Person ��p��������һ�ο������죬ִ���� ����һ��
{
	                           //���ʹ������void dowork(Person &p1)����⿪���������ÿ���
}

void test02()
{
	Person p;  //����Ĭ�ϣ�����test02ִ���� ����һ��
	p.m_age = 10;

	dowork(p);
}


//3.��ֵ��ʽ ���ؾֲ�����
Person  dowork2()
{
	Person  p1;
	return  p1;
}


void test03()
{
	Person p = dowork2();

	//Release  ���Ż���ʲô������� 1��Ĭ�Ϲ��죬1������
/*
Person p ;������Ĭ�Ϲ��캯��
	dowork2(p);

void dowork2(Person &p); //ʹ������
{
	   Person p1;//����Ĭ�Ϲ���
}
*/

}

int main()
{

	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}