#include<iostream>
#include<string>
using namespace std;





class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int  m_age;
};

template<class T>
bool compare(T &a, T &b)
{
	if (a == b)
	{
		return true;
	}
	return false;
}
//ͨ��(������)���廯�Զ����������� �����������
//������廯�ܹ�����ƥ�䣬��ô��ѡ����廯
//�﷨ template<> ����ֵ ������<��������>��������
template<> bool compare<Person>(Person &a, Person &b)//����ģ�� ����ֵ ���������ܱ䣩���������͸�Ϊ���� �򱨴� 
{
	if (a.m_age == b.m_age) 
	{
		return true;
	}
	return false;
}

void  test01()
{
	int a = 10;
	int b = 20;
	int ret1 = compare(a, b);
	cout <<"ret1 = " << ret1 << endl;

	Person p1 ("TOM",10);
	Person p2("JERRY", 10);

	int ret2 = compare(p1, p2);
	cout << "ret2 = " << ret2 << endl;
}


int main()
{
	test01();
	
	system("pause");
	return 0;
}