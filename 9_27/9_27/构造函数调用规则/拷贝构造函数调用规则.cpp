#include<iostream>
#include<string>
using namespace std;


//ϵͳĬ���ṩ Ĭ�Ϲ��캯�� �вι��캯��  �������캯��

//1.����ṩ���вι��캯������ôϵͳ�Ͳ����ṩĬ�ϵĹ����ˣ�
//���ǻ��ṩ�������캯�������м򵥵�ֵ����
class m_class
{
public:
	/*m_class()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}*/

	m_class(int a)
	{
		cout << "�вι��캯��" << endl;
	}

	~m_class()
	{
		cout << "��������" << endl;
	}

	int m_a;
};

void test01()
{
	m_class c1(1);//
	c1.m_a = 10;

	m_class c2(c1);//���м򵥵�ֵ����
	cout<<c2.m_a<<endl;
}

//2.����ṩ�˿������캯������ôϵͳ�Ͳ����ṩ�����Ĺ��캯��

class m_class2
{
public:
	/*m_class2()
	{
		cout << "Ĭ�Ϲ��캯��" << endl;
	}*/

	//m_class2(int a)
	//{
	//	cout << "�вι��캯��" << endl;
	//}


	m_class2(const m_class2 & p)
	{
		cout << "�������캯��" << endl;
	}


	~m_class2()
	{
		cout << "��������" << endl;
	}

	int m_a;
};

void test02()
{
	//m_class2 c2;
}
int main()
{
	test01();
	system("pause");
	return 0;
}