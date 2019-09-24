#include<iostream>
#include<string>
using namespace std;

class Person
{
public:

	//名字 只写权限
	void setname(string m_name)
	{
		name = m_name;
	}


	//获取名字 只读权限
	string getname()
	{
	
		return name;
	}

	//只写 情人
	void setlover(string m_lover)
	{
		lover = m_lover;
	}

	
	//设置年龄  写权限
	void setage(int m_age)
	{
		if (m_age < 0 || m_age > 100)
		{
			cout << "你这个老妖怪" << endl;
			return;
		}
		age = m_age;
	}


	//获取年龄 只读权限
	int getage()
	{
		return  age;
	}


private://私有权限，类内可以访问类外不可以访问

	string name;//姓名 读写权限
	string lover;//只写权限
	int age = 0;//年龄 只读

};

void Init()
{
	Person p1;
	p1.setname("老王");
	cout << "p1的名字" << p1.getname() << endl;
	
	//年龄
	p1.setage(120);
	cout << "p1的年龄" << p1.getage()<< endl;

	//情人  只能设置 外部 不能告诉你
	p1.setlover("仓井");
}

//总结;
//建议将所有成员属性设置为私有
//自己提供公共的对外接口进行 set (设置)或者get（读取）方法

int main()
{

	Init();
	system("pause");
	return 0;
}