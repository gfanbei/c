#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"Array.hpp"
using namespace std;


//��ģ��Ӧ�� �������װ


class Person
{
public:
	Person(){}
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

//���Person����
void Printarray(Myarray<Person> & array)
{
	for (int i = 0; i < array.getSize(); ++i)
	{
		cout << "���� "<<array[i].m_Name<< "���� "<<array[i].m_Age<< endl;
	}


}
//���int����

void Printarray(Myarray<int> & array)
{
	for (int i = 0; i < array.getSize(); ++i)
	{

		cout << array[i] << endl;
	}
	cout << endl;
}


//���double����
void Printarray(Myarray<double> & array)
{
	for (int i = 0; i < array.getSize(); ++i)
	{

		cout << array[i] << endl;
	}
	cout << endl;
}

void test01()
{
	////int ���ͣ���ΪԪ�أ�����
	//Myarray<int >arr(10);
	//for (int i = 0; i < 10; ++ i)
	//{
	//	arr.pushBack(i);
	//}
	//Printarray(arr);


	//double ���ͣ���ΪԪ�أ�����
	Myarray<double>arr1(10);
	for (double i = 0.2; i < 10; ++i)
	{
		arr1.pushBack(i);
	}
	Printarray(arr1);

	//�Զ���Person���ͣ���ΪԪ�أ�����
	Person p1("�ŷ�",20);
	Person p2("����", 10);
	Person p3("С��", 14);
	Person p4("TOM", 16);
    Person p5("JERRY", 18);

	Myarray<Person >arr2(10);
	arr2.pushBack(p1);//���������Ҫ����Person���Ĭ�Ϲ���
	arr2.pushBack(p2);
	arr2.pushBack(p3);
	arr2.pushBack(p4);
	arr2.pushBack(p5);

	Printarray(arr2);
}
int main()
{
	test01();

	system("pause");
	return 0;
}