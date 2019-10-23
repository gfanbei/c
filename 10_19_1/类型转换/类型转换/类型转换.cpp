#include<iostream>
#include<string>
using namespace std;


//静态转换 与动态转换  常量转换  重新解释转换

//静态转换   static_cast<目标类型>(原数据)
//基础类型转换
void test01()
{
	char a = 'a'	;
	double  b = static_cast<double>(a);
	cout << b << endl;


	double c = 3.142569;
	int  d = static_cast<int>(c);
	cout << d<< endl;
}

//父子类转换
class Base 
{
     virtual void fun()
	 {}
};


class Child :public Base 
{
	virtual void fun()
	{}
};


class Other {};


void test02()
{
	Base * base = NULL ;//引用也可以 
	Child * child = NULL ;

	//将child转为 Base*类型  向上转换 不安全
	Base * base2 = static_cast<Base *>(child);

	//将base转为Child *  向下 安全
	Child * child2 = static_cast<Child *>(base);

	//转Other类型   转换无效
	//Other * child2 = static_cast<Other *>(base);
}



//动态转换 dynamic_cast<目标类型>(原类型); 

void test03()
{
	//1.基础类型不可转换
	char c = 'a';
	//double d = dynamic_cast<double>(c);

	
}

void test04()
{
	Base * base = NULL;
	Child * child = NULL;


	Base * base3 = dynamic_cast<Base *>(child);

	//3.如果发生多态 ynamic_cast则可以
	Child * child4 = dynamic_cast<Child *>(base); //2.向下不可以

}


//常量转换  const_cast
void test05()
{
	const  int * p = NULL;//位于符号表
	//去掉const
	int * newp = const_cast<int *>(p);

	int * d = NULL;
	const int * d1  = const_cast<const int *>(d);


	//非指针或者非引用不能进行转换
	//const  int a1 = 10;
	//int a2 = const_cast< int >(a1);


	//引用

	int c = 10;
	int &cref = c;
	const int& cref2 = const_cast<const int&>(cref);

}

//重新解释转换  reinterpret_cast
void test06()
  {
	int a = 10;
	reinterpret_cast<int *>(a);


	Base * base = NULL;
	Other * child2 = reinterpret_cast<Other *>(base);//可以转换  ，不安全 不推荐使用
}


int main()
{


	test01();
	system("pause");
	return 0;
}