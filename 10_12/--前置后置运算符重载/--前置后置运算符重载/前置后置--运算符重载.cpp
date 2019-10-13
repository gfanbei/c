#include<iostream>
#include<string>
using namespace std;

//--前置 后置运算符重载

class Person
{

	friend ostream& operator<<(ostream& cout, Person& person);
public:
	Person()
	{
		m_num = 10;
	}


	//--前置运算符重载
	Person& operator--()
	{
		this->m_num--;
		return *this;
	}


	//--后置置运算符重载
	Person operator--(int)
	{
		Person tmp;
		tmp.m_num = this->m_num--;
		//this->m_num--;
		return tmp;
	}


	int m_num;


};


//<< 运算符重载
ostream& operator<<(ostream& cout, Person& person)
{
	cout << person.m_num << endl;
	return cout;
}

void test01()
{
	Person person;

	-- person;
	cout << person;
	person --;
	cout << person;

}


int main()
{
	test01();
	system("pause");
	return 0;
}
