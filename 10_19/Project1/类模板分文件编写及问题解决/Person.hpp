#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);//可以有默认类型
	/*{
		m_name = name;
		m_age = age;
	}*/

	void Showperson();
	//{

	//	cout << "Person的name " << m_name << endl;
	//	cout << "Person的age " << m_age << endl;
	//}


	T1 m_name;
	T2 m_age;
};

template<class T1, class T2>

Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}



template<class T1, class T2>

void Person<T1, T2>::Showperson()
{
	cout << "Person的姓名 " << m_name << endl;
	cout << "Person的年龄 " << m_age << endl;
}
