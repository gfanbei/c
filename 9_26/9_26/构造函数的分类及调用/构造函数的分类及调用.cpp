#include<iostream>
#include<string>
using namespace std;


////����
//���ղ������з���  �޲ι��캯����Ĭ�Ϲ��캯����  �вι��캯��
//�������ͽ��з���   ��ͨ���캯��   �������캯��

class Person
{
public://�������������д��public�²ſ��Ե��õ�


	Person()//Ĭ�ϡ��޲ι��캯��
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
	}

	//�в�
	Person(int  a)
	{
		cout << "�вι��캯��(int a)" << endl;
	}

	//��������
	~Person()
	{

		cout << "��������" << endl;
	}


	//�������캯��
	Person(const Person &p)//const�����,const��֤ԭ���󲻱��޸�
	{
		//p.m_age = 100;
		m_age = p.m_age;
		cout << "�������캯��" << endl;
	}

	int m_age;
};

void test01()
{
	/*
	
	//���캯�����÷�ʽ
//���ŷ�����
	Person p1(1);
	p1.m_age = 10;
	Person p2(p1);//����
	cout << "p2������" << p2.m_age << endl;
	*/

	//Person p3;//mĬ�Ϲ��캯�� ��Ҫ�ӣ�����Person p3����;��������Ϊ�����Ǻ���������
	//Person p3();



#if 0
//��ʾ�����á�
	Person p4 = Person(100);//�вΣ��ں���ִ����֮��Ż��ͷ�
	Person p5 = Person(p4);//����,�ں���ִ����֮��Ż��ͷ�

	Person(100);//�������������������ص㣬��������������˶����������ģ���ô���д�������󣬾��ͷ��������

	//cout << "aaaaaa" << endl;//��֤�ϱ�

	//�����ÿ������캯������ʼ����������
	//Person ��p5��;//��������Ϊ ��д��Person p5�����������
	Person p6 = Person(p5);//���д����ֵ����������Ϊ��д��Person p5����������������д����ֵ��ô����

#endif


	Person p7 = 100;//�൱�ڵ�����Person p7 = Person ��100������ʽ����ת�� �в�
	Person p8 = p7;//�൱��Person p8 = Person ��p7��  �������캯��

}


int main()
{
	test01();
	system("pause");
	return 0;
}