#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//��ģ���뺯��ģ������
//1.��ģ�������Ĭ�����Ͳ���
//2.����ģ��ɽ��� �Զ����� �Ƶ�  ����ģ�岻��


//��ģ��
template<class Nametype,class Agetype = int>
class Person
{
public:
	Person(Nametype name, Agetype age)//������Ĭ������
	{
		m_name = name;
		m_age = age;
	}

	void Showperson()
	{

		cout << "Person��name " << m_name << endl;
		cout << "Person��age " << m_age << endl;
	}
	Nametype m_name;
	Agetype m_age;
};
void test01()
{
	//1.�Զ��Ƶ� ��ģ��  ��֧��
	//Person p("����"��20);

	//2.��ʾָ������
	Person<string ,int> p("����",20);
	p.Showperson();
}



class Person1
{
public:
	void ShowPerson1()
	{
		cout << "Person1�ĵ���" << endl;
	}
};


class Person2
{
public:
	void ShowPerson2()
	{
		cout << "Person2�ĵ���" << endl;
	}
};

template<class T>
class Myclass
{
public:
	T obj;

	void fun1()
	{
		obj.ShowPerson1();
	}


	void fun2()
	{
		obj.ShowPerson2();
	}
};

void test02()
{
	Myclass<Person1> m;
	m.fun1();
	//m.fun2();//��Ա���� һ��ʼ���ᴴ������ ����������ʱ��ȥ����
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}