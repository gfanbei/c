#include<iostream>
#include<string>
using namespace std;



// ==  !=
class Person
{
public:
	Person(string name,int age )
	{
		this->m_age = age;
		this->m_name = name;
	}

	//==运算符重载
	bool operator==(Person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return true;
		}
		else 
			return false;
	}


	//！=运算符重载 
	bool operator!=(Person& p)
	{
		if (this->m_age != p.m_age && this->m_name != p.m_name)
		{
			return true;
		}
		else
			return false;
	}
	int  m_age;
	string m_name;

};
void test01()
{
	Person p1("小明", 20);

	Person p2("小强", 24);

	Person p3("小强", 24);


	if (p2 == p1)
	{
		cout << "p1与p2相等 " << endl;

	}
	else
	{
		cout << "p1与p2不相等 " << endl;

	}


	if (p3 != p2)
	{
		cout << "p3与p2不相等 " << endl;

	}

	else
	{
		cout << "p3与p2相等 " << endl;

	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}