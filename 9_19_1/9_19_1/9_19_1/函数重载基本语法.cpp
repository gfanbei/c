#include<iostream>
using namespace std;



//c++�к����������ظ�
//������ͬһ�������� ����������ͬ
//�����Ĳ���  ���� ��ͬ �������Ͳ�ͬ  ����˳��ͬ

//��������
void func()//����
{
	cout << "�޲�func����" << endl;
}

void func(int a)//�Ӳ���֮�󣬱���ͨ��
{
	cout << "func��int a ��" << endl;
}

#if 0
class Person
{
	void func();//�������أ�������ͬ

};
#endif

void func(double a)//����
{
	cout << "func��double a ��" << endl;
}


void func(int a,double b)//����˳��
{
	cout << "func��int a , double b ��" << endl;
}

void func(double a, int b)
{
	cout << "func��double a , int b ��" << endl;
}


#if 0
//��������ֵ������Ϊ�������ص������  ������
int func(double a, int b)//��֪�������ĸ����� ����������������
{
	cout << "func��double a , int b ��" << endl;
}

#endif

void test01()
{
	//func();
	func(3.14,1); //�������������������жϵ���
}


//����������������Ĭ�ϲ�����ʱ��Ҫ�������������
void func2(int a,int b = 10)
{
 
}
void func2(int a)
{

}

void test02()
{
	//func2(10);//���������Ե��ã���������������
}


//���õ����ذ汾
void func3(int &a)//���ñ���Ҫ���úϷ����ڴ�ռ�
{
	cout << "int &a" << endl;
}

void func3(const int &a)//constҲ�ǿ�����Ϊ���ص�����  int temp = 10��const int &a = temp
{
	cout << "const int &a" << endl;
}
void test02()
{
	//int a = 10;
	func3(10);
}


int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}