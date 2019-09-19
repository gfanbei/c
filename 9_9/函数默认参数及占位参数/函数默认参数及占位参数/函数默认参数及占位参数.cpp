#include<iostream>
using namespace  std;

//函数的默认参数  参数的后面 = 默认值
//函数参数注意事项 ，如果一个位置有了默认参数，那么从这个位置开始，从左往右都必须默认值
//传入参数，如果有参数就用默认值，没有就用所传参数


//如果函数声明里 有了默认参数， 则函数实现时必须没有，即声明与实现中只能出现1次，不要同时出现
void m_fun(int a = 10, int b = 20);//声明
void m_fun(int a = 1, int b = 20) {};

void fun( int a, int b = 20, int c = 6)
{
	cout << "a + b + c = " << a + b + c << endl;
}

//函数占位参数
//如果有了占位参数，函数调用时必须提供该参数，但用不到
//占位参数没有大用途，只有后面重载 ++符号才有用
void fun2(int a, int)
{

}

void test01()
{
	fun2(10,1);
}


int main()
{
	//fun(1,2);
	fun(4,5,6);
	test01();
	return 0;
 }
