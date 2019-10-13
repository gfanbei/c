#include<iostream>
#include<string>
using namespace std;

//+运算符重载
//如果想让自定义数据类型 进行 + 运算 则需要重载 + 运算
//运算符重载可提供多个版本

class Person
{
public:
	Person(){};

	Person(int a, int b) :m_A(a), m_B(b) {}//初始化列表

	//+运算符重载   成员函数
	/*Person operator+(Person& p)  //2元 没有参数1元
	{
		Person tmp;
		tmp.m_A = this->m_A + p.m_A;
		tmp.m_B = this->m_B + p.m_B;
		return tmp;
	
	}*/




	int m_A;
	int m_B;


};


//+运算符重载   全局函数
Person operator+ (Person & p1,Person & p2)//2元
{
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;

}

Person operator+ (Person & p1, int a)//2元
{
	Person tmp;
	tmp.m_A = p1.m_A + a;
	tmp.m_B = p1.m_B + a;
	return tmp;

}

void test01()
{
	Person p1(10,10);
	Person p2(20,30);
	Person p3 = p1 + p2;//p1+p2等价于 p1.operator+(p2),  operator(p1,p2)
	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;

	Person p4 = p1 + 10;//重载 函数重载
	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;

}


int main()
{
	test01();
	system("pause");
	return 0;
}