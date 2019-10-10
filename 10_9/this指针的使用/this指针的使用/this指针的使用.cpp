#include<iostream>
#include<string>
using namespace std;

//1.this可以解决命名冲突
class Person
{
public:
	Person(int age)
	{
		this->age = age;//可以看出this指向当前属性
	}

	int age;

	//年龄对比
	void compareage(Person & p)
	{
		if (this->age == p.age)
		{
			cout << "年龄相等" << endl;
		}
		else
		{
			cout << "年龄不相等" << endl;
		}
	}

	//年龄相加
	//void Pluseage(Person & p)
	//{
	//	this->age += p.age;

	//}

	Person & Pluseage(Person & p)
	{
		this->age += p.age;

		return  *this;//*this指向对象本体
	}
};

//什么情况下 函数调用可以作为左值 （返回引用时）
void test01()
{
	Person p1(10);
	cout<<"p1的年龄 "<<p1.age<<endl;
	Person p2(10);
	p1.compareage(p2);

	p1.Pluseage(p2).Pluseage(p2).Pluseage(p2);//链式编程 p1.Pluseage(p2)相当于p1
	cout << "p1的年龄 " << p1.age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}