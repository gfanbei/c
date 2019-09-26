#include<iostream>
#include<string>
using namespace std;


////分类
//按照参数进行分类  无参构造函数（默认构造函数）  有参构造函数
//按照类型进行分类   普通构造函数   拷贝构造函数

class Person
{
public://构造和析构必须写在public下才可以调用到


	Person()//默认、无参构造函数
	{
		cout << "默认构造函数调用" << endl;
	}

	//有参
	Person(int  a)
	{
		cout << "有参构造函数(int a)" << endl;
	}

	//析构函数
	~Person()
	{

		cout << "析构函数" << endl;
	}


	//拷贝构造函数
	Person(const Person &p)//const必须加,const保证原对象不被修改
	{
		//p.m_age = 100;
		m_age = p.m_age;
		cout << "拷贝构造函数" << endl;
	}

	int m_age;
};

void test01()
{
	/*
	
	//构造函数调用方式
//括号法调用
	Person p1(1);
	p1.m_age = 10;
	Person p2(p1);//拷贝
	cout << "p2的年龄" << p2.m_age << endl;
	*/

	//Person p3;//m默认构造函数 不要加（），Person p3（）;编译器认为这行是函数的声明
	//Person p3();



#if 0
//显示法调用、
	Person p4 = Person(100);//有参，在函数执行完之后才会释放
	Person p5 = Person(p4);//拷贝,在函数执行完之后才会释放

	Person(100);//叫匿名对象，匿名对象特点，如果编译器发现了对象是匿名的，那么这行代码结束后，就释放这个对象

	//cout << "aaaaaa" << endl;//验证上边

	//不能用拷贝构造函数，初始化匿名对象
	//Person （p5）;//编译器认为 你写成Person p5，对象的声明
	Person p6 = Person(p5);//如果写成左值，编译器认为你写成Person p5，对象的声明，如果写成右值那么可以

#endif


	Person p7 = 100;//相当于调用了Person p7 = Person （100），隐式类型转换 有参
	Person p8 = p7;//相当于Person p8 = Person （p7）  拷贝构造函数

}


int main()
{
	test01();
	system("pause");
	return 0;
}