#include<iostream>
#include<string>
using namespace std;


//自定义异常
class Myexcepyion
{
public:
	void  Print()
	{
		cout << "自定义的异常" << endl;
	}

};
class Person
{
public:
	Person()
	{
		cout << "Person的构造" << endl;
	}
	~Person()
	{
		cout << "Person析构" << endl;
	}


};
//异常基本处理
int myDevide(int a,int b)
{

	//若果b为0  抛出异常
	if(b == 0)
	{
		//return -1;
		//throw - 1;//抛出int类型异常

		//throw 3.14;//抛出double类型异常，抛出异常必须处理
		//throw 'a';

		//栈解旋
	    //从try开始到throw抛出异常之前所有栈上的对象都被释放

		Person  p1;
		Person  p2;
		throw  Myexcepyion();//匿名对象
	}
	return a / b;
}

void test01()
{
	int a = 10;
	int b = 0;

	//int ret = myDevide(a, b);//早期返回-1，无法明确是返回结果 还是异常
//	cout << ret << endl;

	//c++中异常处理
	try 
	{
		myDevide(a, b);

	}

	catch(int)//捕获异常
	{
		cout << "int 类型异常捕获" << endl;
	}

	catch (double)//捕获异常
	{
		//如果不想处理这个异常，可以继续向上抛出
		throw;
		cout << "double 类型异常捕获" << endl;
	}
	catch (Myexcepyion(e))
	{
		e.Print();
	}
	catch (...)//捕获异常
	{
		cout << "其它 类型异常捕获" << endl;
	}
}

int main()
{
	try
	{
		test01();
	}//
	catch (char)//如果 异常都没有处理，那么调用terminate函数，使程序中断
	{
		cout << "main函数中double 类型异常捕获" << endl;
	}

	catch (...)//捕获异常
	{
		cout << "main函数中其它 类型异常捕获" << endl;
	}
	//test01();
	system("pause");
	return 0;
}