#define _CRT_SECURE_NO_WARNING
#include<iostream>
#include<string>
using namespace std;


#pragma pack(1)
class Person
{

public:
	int m_A;//�Ǿ�̬��Ա���������ڶ�������
	void func1() {};//�Ǿ�̬��Ա����  �����ڶ�������
	static int m_B;//��̬��Ա���� �����ڶ�������
	static void func2() {};// ��̬��Ա���� �����ڶ�������

	double m_C;// ���16���ֽڶ��룩  ����12��#pragma pack(1)�²��ǣ�
};


//����  ֻ�зǾ�̬��Ա���� �����ڶ�������

void  test01()
{

	cout<<"sizeof(Person) = "<<sizeof(Person)<<endl;//���Ϊ1
	//����Ĵ�СΪ1��ÿһ��ʵ���Ķ����ж�һ�޶��ĵ�ַ����charά�������ַ
    //Person p[10]  p [0]  p[1] ҲҪ����
}


int main()
{

	test01();
	system("pause");
	return 0;
}