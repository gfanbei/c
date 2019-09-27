#include<iostream>
#include<string>
using namespace std;


//系统默认提供 默认构造函数 有参构造函数  拷贝构造函数

//1.如果提供了有参构造函数，那么系统就不会提供默认的构造了，
//但是会提供拷贝构造函数，进行简单的值拷贝
class m_class
{
public:
	/*m_class()
	{
		cout << "默认构造函数" << endl;
	}*/

	m_class(int a)
	{
		cout << "有参构造函数" << endl;
	}

	~m_class()
	{
		cout << "析构函数" << endl;
	}

	int m_a;
};

void test01()
{
	m_class c1(1);//
	c1.m_a = 10;

	m_class c2(c1);//进行简单的值拷贝
	cout<<c2.m_a<<endl;
}

//2.如果提供了拷贝构造函数，那么系统就不会提供其它的构造函数

class m_class2
{
public:
	/*m_class2()
	{
		cout << "默认构造函数" << endl;
	}*/

	//m_class2(int a)
	//{
	//	cout << "有参构造函数" << endl;
	//}


	m_class2(const m_class2 & p)
	{
		cout << "拷贝构造函数" << endl;
	}


	~m_class2()
	{
		cout << "析构函数" << endl;
	}

	int m_a;
};

void test02()
{
	//m_class2 c2;
}
int main()
{
	test01();
	system("pause");
	return 0;
}