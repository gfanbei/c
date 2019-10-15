#include<iostream>
#include<string>
using namespace std;


//继承中的同名处理
class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void fun()
	{
		cout<<"Base的fun调用"<<endl;
	}

	void fun(int  a)//成员函数重载
	{
		cout << "Base的fun(int a)调用" << endl;
	}

	int m_A;
};


class Son:public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void fun()
	{
		cout << "Son的fun调用" << endl;
	}


	int m_A;
};


void test01()
{
	Son s1;
	
	cout << s1.m_A << endl;//200
	//如何调用父类的m_A
	cout << s1.Base::m_A << endl;//100

	s1.fun();//（就近）如果Son类中没有fun则会调用父类中的fun
	//调用父类的fun
	s1.Base::fun();

	//s1.fun(10);
	s1.Base::fun(10);

}



//如果子类和父类拥有同名的函数 属性，子类会调用父类的成员吗？  不会
//如果子类与父类的成员函数名称相同 子类会把父类的所有的同名版本隐藏掉
//若想调用父类的方法 必须加作用域
int main()   
{
	test01();
	system("pause");
	return 0;
}