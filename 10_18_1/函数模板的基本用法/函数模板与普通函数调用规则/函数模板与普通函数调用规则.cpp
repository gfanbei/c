#include<iostream>
#include<string>
using namespace std;



template<class T>
T plus1(T a, T b)
{
	return a + b;
}

int plus2(int a, int b)
{
	return a + b;
}


void test01()
{
	int a = 10;
	int b = 20;
	char c = 'c';
	//plus1(a, c);//��ȷ�����ͣ�����ģ�岻���Խ�����ʽ����ת��
	plus2(a, c);
}

//2.��ͨ������ģ�庯�����ù���

//����ģ��
template<class T>
void fun(T a, T b)
{
	cout << "ģ�庯������fun()" << endl;
}


//ͨ��ģ�����ɵĺ�����  ģ�庯��
void fun(int a, int b)
{
	
}


template<class T>
void fun(T a, T b, T c)
{
	cout << "ģ�庯������fun(a,b,c)" << endl;
}


//��ͨ����
void fun(int a, int b)
{
	cout << "��ͨ��������fun()" << endl;
}

void test02()
{
	int a = 10;
	int b = 20;
	fun(a,b);//2.���������������ʹ����ͨ�������ã����û��ʵ�֣��򱨴�

	//�����ǿ�Ƶ���ģ�� ����ʹ�ÿղ����б�
	fun<>(a, b);

	//3.����ģ����Է�������

	int c = 30;
	fun(a, b, c);

	//4.�������ģ����Բ������õ�ƥ�� ����ô���ȵ���ģ��
	char c1 = 'c';
	char d = 'd';
	fun(c1, d);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}