#define _CRT_SECURE_NO_WARNING
#include<iostream>
#include<string>
using namespace std;


#pragma pack(1)
class Person
{

public:
	int m_A;//非静态成员变量，属于对象身上
	void func1() {};//非静态成员函数  不属于对象身上
	static int m_B;//静态成员变量 不属于对象身上
	static void func2() {};// 静态成员函数 不属于对象身上

	double m_C;// 结果16（字节对齐）  不是12（#pragma pack(1)下才是）
};


//结论  只有非静态成员变量 才属于对象身上

void  test01()
{

	cout<<"sizeof(Person) = "<<sizeof(Person)<<endl;//结果为1
	//空类的大小为1，每一个实例的对象都有独一无二的地址，用char维护这个地址
    //Person p[10]  p [0]  p[1] 也要区分
}


int main()
{

	test01();
	system("pause");
	return 0;
}