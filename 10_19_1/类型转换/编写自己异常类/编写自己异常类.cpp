#include<iostream>
#include<string>
using namespace std;


//ϵͳ��׼�쳣ʹ��
class Myoutofrangeexception:public exception
{
public:
	Myoutofrangeexception(string  errorinfo)
	{
		this->Errorinfo = errorinfo;
	}

	virtual ~Myoutofrangeexception() noexcept//�̳���ԭexception��
	{
		//�����ͷ�  ��û���ڶ������٣�
	}

	virtual const char* what() const   //��д������ what
	{
	    //���ش�����Ϣ  ����ν�stringתΪconst char*   .c_str()
		return this->Errorinfo.c_str();
	}

	string Errorinfo;//ά��һ��������Ϣ

};

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		if (this->m_Age < 0 || this->m_Age > 200)
		{
			//������
			//throw Myoutofrangeexception("�ҵ�Խ���쳣���� ");//2��������
			throw Myoutofrangeexception(string("�ҵ�Խ���쳣���� "));
		}
	}





	string  m_Name;
	int m_Age;
};

void test01()
{
	try
	{
		Person p("������", 300);
	}
	catch (Myoutofrangeexception &e)
	{
		cout << e.what() << endl;
	}
	
}


int  main()
{

	test01();
	system("pause");
	return 0;
}