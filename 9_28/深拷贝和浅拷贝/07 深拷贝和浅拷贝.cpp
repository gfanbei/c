#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person
{
public:

	//�޲�
	Person()
	{}
	//��ʼ������

	//�вι��캯��
	Person(char * name,int age)
	{
		m_Name = (char*)malloc(strlen(name) + 1);//��������ռ�+1������\0��
		strcpy(m_Name, name);//��name�е����ݿ�����m_name

		m_age = age;
	}
	//�������� ϵͳ���ṩĬ�Ͽ������죬�����Ǽ򵥵�ֵ����
	//�Լ��ṩ�������죬ԭ��򵥵�ǳ�������ͷŶ����ռ�2�Σ����¹ҵ�
	
	//���  ���¸�Ŀ�����ĳ�Ա������ָ�룩����ռ䣬����2���ͷ�ͬһ���ڴ棨�����ڴ�й©��
	
	//�������캯��
	Person(const Person&p)
	{
		m_age = p.m_age;
		m_Name = (char*)malloc(strlen(p.m_Name) + 1);
		strcpy(m_Name, p.m_Name);
	}

	~Person()
	{
		cout << "������������" << endl;
		if (m_Name!=NULL)
		{
			free(m_Name);
			m_Name = NULL;//����Ұָ��
		}
	}

	//Ұָ��
	//���� ��1.ָ�����δ��ʼ�� 2.ָ���ͷ�֮��δ�ÿ�3.ָ�������Խ����������
    //����� 1.��ʼ��ʱ��NULL   2 .�ͷ�ʱ ��NULL


	//����
	char * m_Name;
	//����
	int m_age;
};


void test01()
{
	Person p1("�з�df ",10);
	Person p2(p1); //���ÿ������� Person p2 = Person (p1)

	
}


int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}