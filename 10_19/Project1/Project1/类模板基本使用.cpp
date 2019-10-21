#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//类模板与函数模板区别
//1.类模板可以有默认类型参数
//2.函数模板可进行 自动类型 推导  ，类模板不行


//类模板
template<class Nametype,class Agetype = int>
class Person
{
public:
	Person(Nametype name, Agetype age)//可以有默认类型
	{
		m_name = name;
		m_age = age;
	}

	void Showperson()
	{

		cout << "Person的name " << m_name << endl;
		cout << "Person的age " << m_age << endl;
	}
	Nametype m_name;
	Agetype m_age;
};
void test01()
{
	//1.自动推导 类模板  不支持
	//Person p("寒冰"，20);

	//2.显示指定类型
	Person<string ,int> p("寒冰",20);
	p.Showperson();
}



class Person1
{
public:
	void ShowPerson1()
	{
		cout << "Person1的调用" << endl;
	}
};


class Person2
{
public:
	void ShowPerson2()
	{
		cout << "Person2的调用" << endl;
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
	//m.fun2();//成员函数 一开始不会创建出来 而是在运行时才去创建
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}