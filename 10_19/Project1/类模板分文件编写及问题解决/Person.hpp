#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);//������Ĭ������
	/*{
		m_name = name;
		m_age = age;
	}*/

	void Showperson();
	//{

	//	cout << "Person��name " << m_name << endl;
	//	cout << "Person��age " << m_age << endl;
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
	cout << "Person������ " << m_name << endl;
	cout << "Person������ " << m_age << endl;
}
