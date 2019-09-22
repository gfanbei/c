#include<iostream>
using namespace std;



//c++中函数名可以重复
//必须在同一个作用域 函数名称相同
//函数的参数  个数 不同 或者类型不同  或者顺序不同

//函数重载
void func()//个数
{
	cout << "无参func（）" << endl;
}

void func(int a)//加参数之后，编译通过
{
	cout << "func（int a ）" << endl;
}

#if 0
class Person
{
	void func();//不能重载，作用域不同

};
#endif

void func(double a)//类型
{
	cout << "func（double a ）" << endl;
}


void func(int a,double b)//参数顺序
{
	cout << "func（int a , double b ）" << endl;
}

void func(double a, int b)
{
	cout << "func（double a , int b ）" << endl;
}


#if 0
//函数返回值可以作为函数重载的条件嘛？  不可以
int func(double a, int b)//不知道调用哪个函数 ，产生二义性问题
{
	cout << "func（double a , int b ）" << endl;
}

#endif

void test01()
{
	//func();
	func(3.14,1); //根据所传参数，自行判断调用
}


//当函数重载碰到了默认参数的时候，要避免二义性问题
void func2(int a,int b = 10)
{
 
}
void func2(int a)
{

}

void test02()
{
	//func2(10);//两个都可以调用，产生二义性问题
}


//引用的重载版本
void func3(int &a)//引用必须要引用合法的内存空间
{
	cout << "int &a" << endl;
}

void func3(const int &a)//const也是可以作为重载的条件  int temp = 10；const int &a = temp
{
	cout << "const int &a" << endl;
}
void test02()
{
	//int a = 10;
	func3(10);
}


int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}