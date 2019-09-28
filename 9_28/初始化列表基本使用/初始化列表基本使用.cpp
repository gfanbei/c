#define   _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:

#if 0
	//传统初始化方式
	Person(int a, int b, int c)
	{
	
		m_A = a;
		m_B = b;
		m_C = c;
	}

#endif



	//初始化列表方式初始化
	//初始化成员列表（参数列表），只能在构造函数使用
	Person() :m_A(10), m_B(20), m_C(30)//无参形式 初始化列表
	{}


	//格式 构造函数 +:属性（值，参数）,属性（值，参数）,属性（值，参数）,.....
	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{}


	int m_A;
	int m_B;
	int m_C;
};

void test01()
{
	Person p1(10,20,30);
	cout << "p1的m_A " << p1.m_A << endl;
	cout << "p1的m_B " << p1.m_B << endl;
	cout << "p1的m_C " << p1.m_C << endl;

	Person p2;
	cout << "p2的m_A " << p1.m_A << endl;
	cout << "p2的m_B " << p1.m_B << endl;
	cout << "p2的m_C " << p1.m_C << endl;
}


int main()
{


	test01();
	system("pause");
	return 0;
}