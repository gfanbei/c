#include<iostream>
#include<string>
using namespace std;

//左移运算符重载
//cout<<直接对Person自定义数据类型 进行输出
//写到全局函数中 ostream & operator<<(ostream& cout, Person &p1)
//若重载时想访问p1的私有成员 那么全局函数要做Person的友元函数

class Person
{

	friend ostream & operator<<(ostream& cout, Person &p1);
public:
	Person() {};
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}



	//void operator<<()//重载左移运算符 不可以写到成员函数中 ，需求为cout<< ,而成员则为p1<<
	
	//{
	//
	//}
private:
	int m_A;
	int m_B;

};


ostream & operator<<(ostream& cout, Person &p1) //第一个参数为cout 第二个参数为p1(参照+重载)
{
	cout << "m_A = " << p1.m_A << "m_B = " << p1.m_B;
	return cout;
}

//返回类型为ostream & 则可拼接
void  test01()
{
	Person  p1(10, 10);
	cout << p1;
	cout << p1 << endl;//cout << p1 若返回类型为void ，则void<< endl 错误，不能重载 应返回cout在重载
}


int main()
{
	test01();
	system("pause");
	return 0;
}