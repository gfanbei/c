#include<iostream>
#include<string>
using namespace std;

//--ǰ�� �������������

class Person
{

	friend ostream& operator<<(ostream& cout, Person& person);
public:
	Person()
	{
		m_num = 10;
	}


	//--ǰ�����������
	Person& operator--()
	{
		this->m_num--;
		return *this;
	}


	//--���������������
	Person operator--(int)
	{
		Person tmp;
		tmp.m_num = this->m_num--;
		//this->m_num--;
		return tmp;
	}


	int m_num;


};


//<< ���������
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
