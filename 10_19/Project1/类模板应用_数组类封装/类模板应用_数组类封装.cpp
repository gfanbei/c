#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"Array.hpp"
using namespace std;


//类模板应用 数组类封装


class Person
{
public:
	Person(){}
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

//输出Person类型
void Printarray(Myarray<Person> & array)
{
	for (int i = 0; i < array.getSize(); ++i)
	{
		cout << "姓名 "<<array[i].m_Name<< "年龄 "<<array[i].m_Age<< endl;
	}


}
//输出int类型

void Printarray(Myarray<int> & array)
{
	for (int i = 0; i < array.getSize(); ++i)
	{

		cout << array[i] << endl;
	}
	cout << endl;
}


//输出double类型
void Printarray(Myarray<double> & array)
{
	for (int i = 0; i < array.getSize(); ++i)
	{

		cout << array[i] << endl;
	}
	cout << endl;
}

void test01()
{
	////int 类型（作为元素）测试
	//Myarray<int >arr(10);
	//for (int i = 0; i < 10; ++ i)
	//{
	//	arr.pushBack(i);
	//}
	//Printarray(arr);


	//double 类型（作为元素）测试
	Myarray<double>arr1(10);
	for (double i = 0.2; i < 10; ++i)
	{
		arr1.pushBack(i);
	}
	Printarray(arr1);

	//自定义Person类型（作为元素）测试
	Person p1("张飞",20);
	Person p2("赵云", 10);
	Person p3("小明", 14);
	Person p4("TOM", 16);
    Person p5("JERRY", 18);

	Myarray<Person >arr2(10);
	arr2.pushBack(p1);//数组类必须要调用Person类的默认构造
	arr2.pushBack(p2);
	arr2.pushBack(p3);
	arr2.pushBack(p4);
	arr2.pushBack(p5);

	Printarray(arr2);
}
int main()
{
	test01();

	system("pause");
	return 0;
}