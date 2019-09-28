#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person
{
public:

	//无参
	Person()
	{}
	//初始化属性

	//有参构造函数
	Person(char * name,int age)
	{
		m_Name = (char*)malloc(strlen(name) + 1);//堆上申请空间+1（算上\0）
		strcpy(m_Name, name);//将name中的内容拷贝到m_name

		m_age = age;
	}
	//拷贝构造 系统会提供默认拷贝构造，而且是简单的值拷贝
	//自己提供拷贝构造，原因简单的浅拷贝会释放堆区空间2次，导致挂掉
	
	//深拷贝  重新给目标对象的成员变量（指针）申请空间，避免2次释放同一块内存（导致内存泄漏）
	
	//拷贝构造函数
	Person(const Person&p)
	{
		m_age = p.m_age;
		m_Name = (char*)malloc(strlen(p.m_Name) + 1);
		strcpy(m_Name, p.m_Name);
	}

	~Person()
	{
		cout << "析构函数调用" << endl;
		if (m_Name!=NULL)
		{
			free(m_Name);
			m_Name = NULL;//避免野指针
		}
	}

	//野指针
	//成因 ：1.指针变量未初始化 2.指针释放之后未置空3.指针操作超越变量作用域
    //解决： 1.初始化时置NULL   2 .释放时 置NULL


	//姓名
	char * m_Name;
	//年龄
	int m_age;
};


void test01()
{
	Person p1("敌法df ",10);
	Person p2(p1); //调用拷贝构造 Person p2 = Person (p1)

	
}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}