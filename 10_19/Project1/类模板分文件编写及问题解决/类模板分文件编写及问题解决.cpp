#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"Person.hpp"
//#include"Person.cpp"(不推荐使用)
using namespace std;

//.h 单元编译，类模板的成员函数一开始不会创建，运行时才创建，无法解析外部命令
//解决方法：
//1.添加.cpp文件(不推荐使用)
//2.将声明与实现写到同一个文件 后缀改为.hpp
void test01()
{
	Person<string, int> p("德玛西亚", 10);
	p.Showperson();//类模板的成员函数一开始不会创建，运行时创建

}

//.h 单元编译
int main()
{
	test01();

	system("pause");
	return 0;
}