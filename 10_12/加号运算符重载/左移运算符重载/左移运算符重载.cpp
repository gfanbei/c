#include<iostream>
#include<string>
using namespace std;

//�������������
//cout<<ֱ�Ӷ�Person�Զ����������� �������
//д��ȫ�ֺ����� ostream & operator<<(ostream& cout, Person &p1)
//������ʱ�����p1��˽�г�Ա ��ôȫ�ֺ���Ҫ��Person����Ԫ����

class Person
{

	friend ostream & operator<<(ostream& cout, Person &p1);
public:
	Person() {};
	Person(int a, int b)
	{
		this->m_A = a;
		this->m_B = b;
	}



	//void operator<<()//������������� ������д����Ա������ ������Ϊcout<< ,����Ա��Ϊp1<<
	
	//{
	//
	//}
private:
	int m_A;
	int m_B;

};


ostream & operator<<(ostream& cout, Person &p1) //��һ������Ϊcout �ڶ�������Ϊp1(����+����)
{
	cout << "m_A = " << p1.m_A << "m_B = " << p1.m_B;
	return cout;
}

//��������Ϊostream & ���ƴ��
void  test01()
{
	Person  p1(10, 10);
	cout << p1;
	cout << p1 << endl;//cout << p1 ����������Ϊvoid ����void<< endl ���󣬲������� Ӧ����cout������
}


int main()
{
	test01();
	system("pause");
	return 0;
}