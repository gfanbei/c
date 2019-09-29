#include<iostream>
#include<string>

using namespace std;


class Person
{
  public:
	Person()
{
	 // m_age = 10;
}
  static int m_age;//加入static就是静态成员变量，会共享数据

//静态成员变量，在类内声明，类外进行初始化
  //静态成员变量 也是有权限的


  int m_A;
  //静态成员函数
  //不可以访问普通成员变量
  //可以访问静态成员 变量
  static   void func()
  {

	  //m_A = 10;
	  m_age = 2000;//访问静态成员变量
	  cout<<"func的调用"<<endl;
  
  }


  //普通成员函数  可以访问普通成员变量 也可以访问静态成员变量
  void m_func()
  {
	  m_A = 100; //访问普通成员
	  m_age = 100;//访问静态成员变量
	  func2();

  }

private:
	static   int m_other;//私有权限，在类外不能访问

	static void func2()
	{
	
		cout << "func2的调用" << endl;
	}
};

int Person::m_age = 10;//类外进行初始化(加作用域 相当于 类内)

//int Person::m_other = 1000;//（加作用域 编译器认为相当于 在 类内）

void test01()
{
	//1.通过对象访问属性
	Person p1;
	p1.m_age = 10;

	Person p2;
	p2.m_age = 20;

	cout << "p1= " << p1.m_age << endl;//10 或者20 ?    20
	cout << "p2= " << p2.m_age << endl;
	//共享数据

	//2.通过类名访问数据
	cout << "通过类名访问age " << Person::m_age << endl;
	//cout << "other= " << Person::m_other << endl;//私有权限在类外无法访问

	//静态成员函数调用
	//1.通过对象访问  2.通过类名访问
	p1.func();
	p2.func();
	Person::func();

	//静态成员函数也是有权限的
	//Person::func2();//私有不可访问
}

int main()
{

	test01();
	system("pause");
	return 0;
}