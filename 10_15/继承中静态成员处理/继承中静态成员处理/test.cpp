#include<iostream>
#include<string>
using namespace std;

//多继承概念及问题（二义性）
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

//多继承
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

	//s1.m_A//产生二义性 若两个父类中的成员 命名相同 在子类中访问时 会发生冲突

	//解决方法  加作用域
	cout << s1.::Base1::m_A << endl;
	cout << s1.::Base2::m_A << endl;

}

int main()
{

	test01();
	system("pause");
	return 0;
}