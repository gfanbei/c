#include<iostream>
#include<string>
using namespace std;


class Person
{
public:

//���캯��д��
//��������ͬ��û�з���ֵ����дvoid���ɷ������أ������в�����
//���캯���ɱ������Զ����ã��������ֶ�����ֻ�����һ��


	Person()
	{
		cout << "���캯��" << endl;
	}
 

	Person(int  a)
	{
		cout << "���캯��(int a)" << endl;
	}
	//��������д��
	//��������ͬ ����ǰ��ӡ�~����û�з���ֵ����дvoid�������в��������ܷ������أ�
	//�Զ����ã�ֻ�����һ��

	~Person()
	{
	
		cout << "��������" << endl;
	}
};


void test01()
{
 
	//Person  p1;//Ĭ�ϵ����˹����������������ϵͳ�ṩ��������ʵ�ֵĺ���
	Person  p1(10);//��������
}

int main()
{

	test01();
	//Person  p1;//�ŵ��������￴���� ������û�д����ˣ�
	system("pause");
	return 0;
}