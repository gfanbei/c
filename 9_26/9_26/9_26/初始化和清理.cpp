#include<iostream>
#include<string>
using namespace std;


class Person
{
public:

//构造函数写法
//与类名相同，没有返回值，不写void，可发生重载（可以有参数）
//构造函数由编译器自动调用，而不是手动，且只会调用一次


	Person()
	{
		cout << "构造函数" << endl;
	}
 

	Person(int  a)
	{
		cout << "构造函数(int a)" << endl;
	}
	//析构函数写法
	//与类名相同 类名前面加“~”，没有返回值，不写void，不可有参数（不能发生重载）
	//自动调用，只会调用一次

	~Person()
	{
	
		cout << "析构函数" << endl;
	}
};


void test01()
{
 
	//Person  p1;//默认调用了构造和析构函数，是系统提供的两个空实现的函数
	Person  p1(10);//发生重载
}

int main()
{

	test01();
	//Person  p1;//放到主函数里看不到 析构（没有窗口了）
	system("pause");
	return 0;
}