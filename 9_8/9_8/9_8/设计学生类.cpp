#include<iostream>
#include<string>
using namespace std;


//���һ��ѧ���� ѧ������ ���� ��ѧ��  ����ʾ
class Student
{
public:
	void set_name(string name)//��Ա��������������
	{
		m_name = name;
	}


	void set_ID(int id)//��Ա����������ѧ��
	{
		 m_ID = id;

	}


	void show()
	{
		cout << "����" << m_name << "  " << "ѧ��" << m_ID << endl;
	
	}
	string m_name;//��Ա���� 
	int m_ID;
};

void test02()
{
	Student st;//����һ��ѧ��ʵ������ͨ��������������Ĺ���
	st.set_name("����");
	st.set_ID(2);

	//ͨ��st�����Դ�ӡst����Ϣ
	cout << "st������" << st.m_name <<"  "<<"st��ѧ��" << st.m_ID << endl;

	//ͨ����Ա���� ��ӡst����Ϣ
	st.show();
}


int main()
{
	test02();
	return 0;
}