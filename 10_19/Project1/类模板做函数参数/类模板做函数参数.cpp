#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//类模板做函数参数

//类模板
template<class Nametype, class Agetype >
class Person
{
public:
	Person(Nametype name, Agetype age)
	{
		m_name = name;
		m_age = age;
	}

	void Showperson()
	{

		cout << "Person的姓名 " << m_name << endl;
		cout << "Person的年龄 " << m_age << endl;
	}
	Nametype m_name;
	Agetype m_age;
};

//1.显式指定类型传参
void dowork(Person<string , int> &p)
{
	p.Showperson();
}
void test01()
{
	Person<string, int> p("德玛西亚",10);
	dowork(p);

}


//2.参数模板化
template <class T1,class T2>
void dowork2(Person<T1, T2> &p)
{
	p.Showperson();

	//如何查看类型
	cout << typeid(T1).name() << endl;
	cout << typeid(T2).name() << endl;
}


void test02()
{
	Person<string, int> p("吕布", 20);
	dowork2(p);

}


//3.整体模板化
template <class T>
void dowork3(T &p)
{
	p.Showperson();
	cout << typeid(T).name() << endl;
}

void test03()
{
	Person<string, int> p("赵云", 18);
	dowork3(p);

}
int main()
{
    //test01();
	test02();
	test03();
	system("pause");
	return 0;
}