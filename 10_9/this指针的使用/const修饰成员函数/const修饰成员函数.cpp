#include<iostream>
#include<string>
using namespace std;


class Person
{
public:
	//构造中修改属性
	//this永远指向本体
	//const Person * const this
	Person()
	{
		m_A = 0;
		m_B = 0;
	}

	void showinfo() const  //长函数  不允许修改指针指向的值
	{

		//this->m_A = 100;//不可修改
		this->m_B = 100;//可修改，mutable 修饰之后
		//const Person * const this
		cout << "m_A = " << this->m_A << endl;
		cout << "m_B = " << this->m_B << endl;
	}

	int m_A;
	mutable int m_B;//常函数 也可修改
};
void test01()
{
	Person p1;
	p1.showinfo();//0  100

	 //常对象  不允许修改属性
	const Person p2;
	cout << p2.m_A << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}