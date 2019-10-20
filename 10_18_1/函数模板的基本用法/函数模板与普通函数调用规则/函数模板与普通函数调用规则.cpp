#include<iostream>
#include<string>
using namespace std;



template<class T>
T plus1(T a, T b)
{
	return a + b;
}

int plus2(int a, int b)
{
	return a + b;
}


void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//plus1(a, c);//不确定类型，函数模板不可以进行隐式类型转换
	plus2(a, c);
}

//2.普通函数与模板函数调用规则

//函数模板
template<class T>
void fun(T a, T b)
{
	cout << "模板函数调用fun()" << endl;
}


//通过模板生成的函数叫  模板函数
void fun(int a, int b)
{
	
}


template<class T>
void fun(T a, T b, T c)
{
	cout << "模板函数调用fun(a,b,c)" << endl;
}


//普通函数
void fun(int a, int b)
{
	cout << "普通函数调用fun()" << endl;
}

void test02()
{
	int a = 10;
	int b = 20;
	fun(a,b);//2.如果出现重载优先使用普通函数调用，如果没有实现，则报错

	//如果想强制调用模板 可以使用空参数列表
	fun<>(a, b);

	//3.函数模板可以发生重载

	int c = 30;
	fun(a, b, c);

	//4.如果函数模板可以产生更好的匹配 ，那么优先调用模板
	char c1 = 'c';
	char d = 'd';
	fun(c1, d);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}