#include<iostream>
#include<string>
using namespace std;

//�̳��о�̬��Ա����

class Base
{
public:
	
	static void fun()//��û��static����Ҫ newһ������������
	{
		cout << "Base��fun" << endl;
	}

	static void fun(int a)
	{
		cout << "Base��fun(int a)" << endl;
	}

	static int m_A;

};
int Base::m_A = 10;

class Son:public Base
{
public:
	
	static void fun()
	{
		cout << "Son��fun" << endl;
	}

	static void fun(int a)
	{
		cout << "Son��fun(int a)" << endl;
	}

	static int m_A;

};

 int Son::m_A = 20;

//��̬��Ա���� ������Է���
void test01()
{
	cout << Son::m_A << endl;//20

	//���ʸ���m_A
	cout << Son::Base::m_A << endl;//10

	Son::fun();
	Son::fun(10);

	//���ʸ���fun
	Son::Base::fun();
	Son::Base::fun(100);

	


}

int main()
{
 
	test01();
	system("pause");
	return 0;
}