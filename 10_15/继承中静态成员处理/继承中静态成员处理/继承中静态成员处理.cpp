#include<iostream>
#include<string>
using namespace std;

//继承中静态成员处理

class Base
{
public:
	
	static void fun()//若没有static则需要 new一个对象来访问
	{
		cout << "Base的fun" << endl;
	}

	static void fun(int a)
	{
		cout << "Base的fun(int a)" << endl;
	}

	static int m_A;

};
int Base::m_A = 10;

class Son:public Base
{
public:
	
	static void fun()
	{
		cout << "Son的fun" << endl;
	}

	static void fun(int a)
	{
		cout << "Son的fun(int a)" << endl;
	}

	static int m_A;

};

 int Son::m_A = 20;

//静态成员属性 子类可以访问
void test01()
{
	cout << Son::m_A << endl;//20

	//访问父类m_A
	cout << Son::Base::m_A << endl;//10

	Son::fun();
	Son::fun(10);

	//访问父类fun
	Son::Base::fun();
	Son::Base::fun(100);

	


}

int main()
{
 
	test01();
	system("pause");
	return 0;
}