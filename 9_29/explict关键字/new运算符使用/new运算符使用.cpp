#include<iostream>
#include<string>
using namespace std;


class Person
{
public:
	Person()
	{
	
		cout<<"Ĭ�Ϲ��캯������"<<endl;
	}

	Person(int a)
	{
		cout << "�вι��캯������" << endl;
	 
	}


	~Person()
	{

		cout << "������������" << endl;
	}


};


void test01()
{
	//Person p1;//ջ�Ͽ���
	Person * p2 = new Person;//��������

	//����new�����Ķ��� ���᷵�ظ����͵�ָ��
	//malloc ���� void* ��Ҫǿת
    //malloc ����ù���� ���� new����ù���
    // new ���������  malloc��ϵͳ�ṩ������

	//�ͷŶ����ռ�
	//deleteҲ������� ���newʹ�ã�malloc���freeʹ��

	delete p2;

}

void test02()
{

	void * p = new Person(10);
	// ����void* ����new������ָ�� ��������ͷŵ�����
	delete p;
	//�޷��ͷ�p������Ҫ��������д��
}

void test03()
{

	//ͨ��new��������  һ�������Ĭ�Ϲ��캯�� һ��Ҫ�ṩĬ�Ϲ���
	Person * pArray = new Person[10];

	//Person pArray2[2] = { Person(1), Person(2) };//��ջ�Ͽ������飬����ָ���вι���


	//�ͷ�����  delete []
	delete [] pArray;
}

int main()
{

	test03();
	//test02();
	//test01();
	system("pause");
	return 0;
}