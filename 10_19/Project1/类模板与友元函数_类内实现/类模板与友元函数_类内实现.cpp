#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2 >
class Person
{

	friend void Printperson(Person<T1, T2> &p)//全局函数 作友元函数（类内实现）
	{

		cout << "Person的姓名 " << p.m_name << endl;
		cout << "Person的年龄 " <<p.m_age << endl;
	}
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

void test01()
{
	Person<string, int>p("小明",20);
	Printperson(p);

}
int main()
{
	test01();
	
	system("pause");
	return 0;
}