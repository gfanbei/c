#include<iostream>
#include<string>
using namespace std;


//�쳣�Ķ�̬ʹ��


//�쳣����
class BaseEcxeption
{
public:
	virtual void Printerror()
	{
	
	}

};

class NullPointerexception :public BaseEcxeption
{
public:
	virtual void Printerror()
	{
		cout << "��ָ���쳣" << endl;
	}


};

class Outrangsexception :public BaseEcxeption
{
public:
	virtual void Printerror()
	{
		cout << "Խ���쳣" << endl;
	}


};

void dowork()
{
	//throw NullPointerexception();//��������
	throw Outrangsexception();
}
void test01()
{
	try
	{
		dowork();
	}
	//������̬���������� ָ���������
	catch (BaseEcxeption &e)//�������Ч�� ��ֻ��һ������
	{
		e.Printerror();//����virtual ���������Ա������д��֮����ᣨ��̬�󶨣����
		
	}
}

int  main()
{

	test01();
	system("pause");
	return 0;
}