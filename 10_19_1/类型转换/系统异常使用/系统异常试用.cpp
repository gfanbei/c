#include<iostream>
#include<string>
#include<stdexcept>//系统标准异常库
using namespace std;


//系统标准异常使用

class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		if (this->m_Age < 0 || this->m_Age > 200)
		{
			//抛出越界异常
			//throw out_of_range("年龄越界");
			throw length_error("长度超出指定范围");
		}
	}





	string  m_Name;
	int m_Age;
};

void test01()
{
	try 
	{
		Person p("张三丰",300);
	}
	catch (out_of_range & e)
	{
		cout << e.what() << endl;//输出异常信息
	}
	catch (length_error & e)
	{
		cout << e.what() << endl;//输出异常信息
	}
}
int  main()
{

	test01();
	system("pause");
	return 0;
}