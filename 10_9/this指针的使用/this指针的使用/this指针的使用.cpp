#include<iostream>
#include<string>
using namespace std;

//1.this���Խ��������ͻ
class Person
{
public:
	Person(int age)
	{
		this->age = age;//���Կ���thisָ��ǰ����
	}

	int age;

	//����Ա�
	void compareage(Person & p)
	{
		if (this->age == p.age)
		{
			cout << "�������" << endl;
		}
		else
		{
			cout << "���䲻���" << endl;
		}
	}

	//�������
	//void Pluseage(Person & p)
	//{
	//	this->age += p.age;

	//}

	Person & Pluseage(Person & p)
	{
		this->age += p.age;

		return  *this;//*thisָ�������
	}
};

//ʲô����� �������ÿ�����Ϊ��ֵ ����������ʱ��
void test01()
{
	Person p1(10);
	cout<<"p1������ "<<p1.age<<endl;
	Person p2(10);
	p1.compareage(p2);

	p1.Pluseage(p2).Pluseage(p2).Pluseage(p2);//��ʽ��� p1.Pluseage(p2)�൱��p1
	cout << "p1������ " << p1.age << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}