#include<iostream>
#include<string>
using namespace std;

class Person
{
public:

	//���� ֻдȨ��
	void setname(string m_name)
	{
		name = m_name;
	}


	//��ȡ���� ֻ��Ȩ��
	string getname()
	{
	
		return name;
	}

	//ֻд ����
	void setlover(string m_lover)
	{
		lover = m_lover;
	}

	
	//��������  дȨ��
	void setage(int m_age)
	{
		if (m_age < 0 || m_age > 100)
		{
			cout << "�����������" << endl;
			return;
		}
		age = m_age;
	}


	//��ȡ���� ֻ��Ȩ��
	int getage()
	{
		return  age;
	}


private://˽��Ȩ�ޣ����ڿ��Է������ⲻ���Է���

	string name;//���� ��дȨ��
	string lover;//ֻдȨ��
	int age = 0;//���� ֻ��

};

void Init()
{
	Person p1;
	p1.setname("����");
	cout << "p1������" << p1.getname() << endl;
	
	//����
	p1.setage(120);
	cout << "p1������" << p1.getage()<< endl;

	//����  ֻ������ �ⲿ ���ܸ�����
	p1.setlover("�־�");
}

//�ܽ�;
//���齫���г�Ա��������Ϊ˽��
//�Լ��ṩ�����Ķ���ӿڽ��� set (����)����get����ȡ������

int main()
{

	Init();
	system("pause");
	return 0;
}