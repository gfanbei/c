#include<iostream>
#include<string.h>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<"无参(默认)构造调用"<<endl;
	}


	Person(int a)
	{
		cout << "有参构造函数调用" << endl;
	}

	Person(const Person& p) //必须有引用 如果没有 则陷入死循环
	{
		m_age = p.m_age;
		cout << "拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "析构函数调用" << endl;
	}

	int m_age;
};


//拷贝构造函数调用时机

//1.用已经创建好的对象来初始化新得对象
void test01()
{
	Person p1;//无参
	p1.m_age = 10;
	
	//Person p2(100);

	Person p2(p1);//拷贝

}

//2.以值传递的方式给函数参数传值 
void dowork(Person p1) //传进一个p相当于 Person p1 = Person （p），调用一次拷贝构造，执行完 析构一次
{
	                           //如果使用引用void dowork(Person &p1)则避免开销，不调用拷贝
}

void test02()
{
	Person p;  //调用默认，函数test02执行完 析构一次
	p.m_age = 10;

	dowork(p);
}


//3.以值方式 返回局部对象
Person  dowork2()
{
	Person  p1;
	return  p1;
}


void test03()
{
	Person p = dowork2();

	//Release  下优化成什么样？结果 1次默认构造，1次析构
/*
Person p ;不调用默认构造函数
	dowork2(p);

void dowork2(Person &p); //使用引用
{
	   Person p1;//调用默认构造
}
*/

}

int main()
{

	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}