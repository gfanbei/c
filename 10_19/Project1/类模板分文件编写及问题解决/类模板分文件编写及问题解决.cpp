#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include"Person.hpp"
//#include"Person.cpp"(���Ƽ�ʹ��)
using namespace std;

//.h ��Ԫ���룬��ģ��ĳ�Ա����һ��ʼ���ᴴ��������ʱ�Ŵ������޷������ⲿ����
//���������
//1.���.cpp�ļ�(���Ƽ�ʹ��)
//2.��������ʵ��д��ͬһ���ļ� ��׺��Ϊ.hpp
void test01()
{
	Person<string, int> p("��������", 10);
	p.Showperson();//��ģ��ĳ�Ա����һ��ʼ���ᴴ��������ʱ����

}

//.h ��Ԫ����
int main()
{
	test01();

	system("pause");
	return 0;
}