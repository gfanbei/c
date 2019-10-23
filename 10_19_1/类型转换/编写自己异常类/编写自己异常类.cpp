#include<iostream>
#include<string>
using namespace std;


//系统标准异常使用
class Myoutofrangeexception:public exception
{
public:
	Myoutofrangeexception(string  errorinfo)
	{
		this->Errorinfo = errorinfo;
	}

	virtual ~Myoutofrangeexception() noexcept//继承与原exception类
	{
		//不用释放  （没有在堆区开辟）
	}

	virtual const char* what() const   //重写虚析构 what
	{
	    //返回错误信息  ，如何将string转为const char*   .c_str()
		return this->Errorinfo.c_str();
	}

	string Errorinfo;//维护一个错误信息

};

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		if (this->m_Age < 0 || this->m_Age > 200)
		{
			//年龄检测
			//throw Myoutofrangeexception("我的越界异常错误 ");//2个都可以
			throw Myoutofrangeexception(string("我的越界异常错误 "));
		}
	}





	string  m_Name;
	int m_Age;
};

void test01()
{
	try
	{
		Person p("张三丰", 300);
	}
	catch (Myoutofrangeexception &e)
	{
		cout << e.what() << endl;
	}
	
}


int  main()
{

	test01();
	system("pause");
	return 0;
}