#include<iostream>
#include<string>
using namespace std;


class Person
{
public:
	//�������޸�����
	//this��Զָ����
	//const Person * const this
	Person()
	{
		m_A = 0;
		m_B = 0;
	}

	void showinfo() const  //������  �������޸�ָ��ָ���ֵ
	{

		//this->m_A = 100;//�����޸�
		this->m_B = 100;//���޸ģ�mutable ����֮��
		//const Person * const this
		cout << "m_A = " << this->m_A << endl;
		cout << "m_B = " << this->m_B << endl;
	}

	int m_A;
	mutable int m_B;//������ Ҳ���޸�
};
void test01()
{
	Person p1;
	p1.showinfo();//0  100

	 //������  �������޸�����
	const Person p2;
	cout << p2.m_A << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}