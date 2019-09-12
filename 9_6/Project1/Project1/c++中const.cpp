#include<iostream>
#include<string.h>
using  namespace std;


void test_1()
{
	extern  const int a;


	cout << a << endl;
}


void myswap(int &a, int &b)//引用 &a = a,&b = b //参数交换
{
	int temp = a;
	a = b;
	b = temp;
}

void test_2()
{
	int a = 10;
	int b = 20;

	myswap(a,b);

	cout << "a=" << a << " " << "b=" << b<<endl;
}


int& dowork()
{
	int a = 10;
	return a;
}


void test_4()
{
	int &ret = dowork();
	cout << "ret = " << ret << endl;//第一次为10是编译器做了优化
	cout << "ret = " << ret << endl;//乱码
	cout << "ret = " << ret << endl;
	cout << "ret = " << ret << endl;
}


int& dowork2()
{
	static int a = 10;
	return a;
}

void test_5()
{
	 int&ret = dowork2();
	cout<< "ret = " << ret << endl;
	cout<< "ret = " << ret << endl;
	cout<< "ret = " << ret << endl;
	cout<< "ret = " << ret << endl;
}


int main()
{ 
	//test_1();
	//test_2();
	//test_4();

	test_5();

	system("pause");
	return 0;
}