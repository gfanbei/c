#include<iostream>
#include<string>
using namespace std;


//�Զ����쳣
class Myexcepyion
{
public:
	void  Print()
	{
		cout << "�Զ�����쳣" << endl;
	}

};
class Person
{
public:
	Person()
	{
		cout << "Person�Ĺ���" << endl;
	}
	~Person()
	{
		cout << "Person����" << endl;
	}


};
//�쳣��������
int myDevide(int a,int b)
{

	//����bΪ0  �׳��쳣
	if(b == 0)
	{
		//return -1;
		//throw - 1;//�׳�int�����쳣

		//throw 3.14;//�׳�double�����쳣���׳��쳣���봦��
		//throw 'a';

		//ջ����
	    //��try��ʼ��throw�׳��쳣֮ǰ����ջ�ϵĶ��󶼱��ͷ�

		Person  p1;
		Person  p2;
		throw  Myexcepyion();//��������
	}
	return a / b;
}

void test01()
{
	int a = 10;
	int b = 0;

	//int ret = myDevide(a, b);//���ڷ���-1���޷���ȷ�Ƿ��ؽ�� �����쳣
//	cout << ret << endl;

	//c++���쳣����
	try 
	{
		myDevide(a, b);

	}

	catch(int)//�����쳣
	{
		cout << "int �����쳣����" << endl;
	}

	catch (double)//�����쳣
	{
		//������봦������쳣�����Լ��������׳�
		throw;
		cout << "double �����쳣����" << endl;
	}
	catch (Myexcepyion(e))
	{
		e.Print();
	}
	catch (...)//�����쳣
	{
		cout << "���� �����쳣����" << endl;
	}
}

int main()
{
	try
	{
		test01();
	}//
	catch (char)//��� �쳣��û�д�����ô����terminate������ʹ�����ж�
	{
		cout << "main������double �����쳣����" << endl;
	}

	catch (...)//�����쳣
	{
		cout << "main���������� �����쳣����" << endl;
	}
	//test01();
	system("pause");
	return 0;
}