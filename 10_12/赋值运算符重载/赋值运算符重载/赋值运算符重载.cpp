
#define _CRT_SECURE_NO_WARNING
#include<iostream>

using namespace std;


//һ����Ĭ�ϴ��� Ĭ�Ϲ��졢�������������� operator=��ֵ����� ���м�ֵ����
class Person
{
public:
	Person(int a)
	{
		this->m_A = a;
	}



	int m_A;
};


void test01()
{
	Person p1(10);
	Person p2(0);

	p2 = p1;//��ֵ p2 = 10

	cout << "p2��m_A = " << p2.m_A << endl;

}

class Person2
{
public:

	Person2(const char* name)
	{
		this->pname = new char[strlen(name) + 1];
		strcpy(this->pname, name);
	}


	//���� = ��ֵ�����
	void operator= (const Person2 & p)
	{
		if (this->pname != NULL)
		{
			delete[] this->pname;
			this->pname = NULL;
		}


		this->pname = new char[strlen(p.pname) + 1];
		strcpy(this->pname, p.pname);
	}

	~Person2()
	{
		if (this->pname != NULL)
		{
			delete[]this->pname;
			this->pname = NULL;

	    }
	
	}
	char *pname;
};


void test02()
{
	Person2 p1("����");

	Person2 p2("��ʣ");
	p2 = p1;
	cout << p2.pname << endl;

}



int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}



