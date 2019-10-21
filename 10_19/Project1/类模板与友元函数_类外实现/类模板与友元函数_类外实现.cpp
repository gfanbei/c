#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//类模板之友元函数类外实现

template<class T1, class T2 >class Person;//3.声明有这个 模板类
template<class T1, class T2 >void Printperson(Person<T1, T2> &p);//2.声明有这么个 模板函数

template<class T1, class T2 >
class Person
{

	friend void Printperson<>(Person<T1, T2> &p);//1.普通函数    加上<>之后 是模板函数
	//{

	//	cout << "Person的姓名 " << p.m_name << endl;
	//	cout << "Person的年龄 " << p.m_age << endl;
	//}
public:
	Person(T1 name, T2 age)
	{
		m_name = name;
		m_age = age;
	}



private:
	T1 m_name;
	T2 m_age;
};

template<class T1, class T2 >
void Printperson(Person<T1, T2> &p)
{

	cout << "Person的姓名 " << p.m_name << endl;
	cout << "Person的年龄 " << p.m_age << endl;
}
void test01()
{
	Person<string, int>p("小明", 20);
	Printperson(p);

}

int main()
{
	test01();

	system("pause");
	return 0;
}