#include<iostream>
#include<string>
#include<stdexcept>//ϵͳ��׼�쳣��
using namespace std;


//ϵͳ��׼�쳣ʹ��

class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		if (this->m_Age < 0 || this->m_Age > 200)
		{
			//�׳�Խ���쳣
			//throw out_of_range("����Խ��");
			throw length_error("���ȳ���ָ����Χ");
		}
	}





	string  m_Name;
	int m_Age;
};

void test01()
{
	try 
	{
		Person p("������",300);
	}
	catch (out_of_range & e)
	{
		cout << e.what() << endl;//����쳣��Ϣ
	}
	catch (length_error & e)
	{
		cout << e.what() << endl;//����쳣��Ϣ
	}
}
int  main()
{

	test01();
	system("pause");
	return 0;
}