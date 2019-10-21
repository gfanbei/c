#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//类模板遇到继承问题
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

//在继承时 调用父类 父类中成员变量 类型不知，因此 要告诉，否则无法分配内存
class Child :public Base<int>
{



};

//Child2也是模板类
template<class T1,class T2>
class Child2 :public Base<T2>//由用户指定类型
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
	Child2<int,double> c1;//显式指定类型

}


int main()
{
	test01();
	
	system("pause");
	return 0;
}