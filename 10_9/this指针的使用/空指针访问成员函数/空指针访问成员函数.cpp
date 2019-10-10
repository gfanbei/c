#include<iostream>
#include<string>
using namespace std;


//空指针访问成员函数
class Person
{
public:
	void show()
	{
		cout<<"Person show"<<endl;
	}

	void showage()//showage(Person *this)
	{
	
		if (this == NULL)//加if判断 保证运行不出错
		{
			return;
		}
		cout<<age<<endl;//this->age 相当于 NULL-> age;
	}


	int age;
};

//结论;
//1.如果成员函数没有用到this  那么空指针可以直接访问
//2.如果成员函数使用到this指针  注意 可加if判断 如果 this为NULL直接return
void test01()
{
	Person * p1 = NULL;
	p1->show();//可以调用，没用到this指针
	p1->showage();//不可以调用，出现异常 

}

int main()
{
	test01();
	system("pause");
	return 0;
}