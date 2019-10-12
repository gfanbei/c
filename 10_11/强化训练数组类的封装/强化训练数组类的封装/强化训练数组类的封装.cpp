#include<iostream>
#include<string>
#include"marray.h"
using namespace std;



void test01()
{

	//堆区创建数组
	Marray* array = new Marray(30);



	Marray* array2 = new Marray(*array);//new方式指定调用拷贝构造  array为Marray*类型取*为 空间 ，从而调用拷贝

	Marray array3 = *array2;//构造函数返回的本体

	Marray* array4 = array;//声明一个指针 和array执行的地址相同 所以不会调用拷贝构造
	
	//尾插法测试
	for (int i = 0; i < 10; ++i)
	{
		array2->push_back(i);
	}

	//获取数据测试
	for (int i = 0; i < 10; ++i)
	{
		cout << array2->getdata(i) << endl;;
	}

	//设置值测试
	array2->setdata(0, 100);
	cout << array2->getdata(0) << endl;
	delete array;

	//数组的大小
	cout<<"array2数组的大小  "<<array2->getSize()<<endl;

	//数组的容量
	cout << "array2数组的容量  " << array2->getcapacity() << endl;
}

int main()
{
    test01();
	system("pause");
	return 0;
}