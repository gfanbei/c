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

	//==���������
	bool operator==(Person& p)
	{
		if (this->m_age == p.m_age && this->m_name == p.m_name)
		{
			return true;
		}
		else 
			return false;
	}


	//��=��������� 
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
	Person p1("С��", 20);

	Person p2("Сǿ", 24);

	Person p3("Сǿ", 24);


	if (p2 == p1)
	{
		cout << "p1��p2��� " << endl;

	}
	else
	{
		cout << "p1��p2����� " << endl;

	}


	if (p3 != p2)
	{
		cout << "p3��p2����� " << endl;

	}

	else
	{
		cout << "p3��p2��� " << endl;

	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}