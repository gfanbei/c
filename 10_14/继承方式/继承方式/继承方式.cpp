#include<iostream>
#include<string>
using namespace std;


//�̳з�ʽ  public  protected  private
// ���ܹ��м̳С�����������˽�У������е�˽�����ԣ� �������Լ̳���ȥ

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;


};

//���м̳�///
class Son1 :public Base1
{
public:
	void func()
	{
		//cout << m_C << endl;// ������˽�е�����  ���ɼ̳�
		cout << m_A << endl;//�����й��е����� �ɼ̳�  �������� public  ������Է���
		cout << m_B << endl;//�����б��������� �ɼ̳�  �������� protected  ���ⲻ�ɷ���


	}
	

};

void Myfunc()
{
	Son1  s1;
	s1.m_A;
	//s1.m_B;

}

//////////////////�����̳�////////////////////
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;


};


class Son2 :protected Base2
{
public:
	void func()
	{
		//cout << m_C << endl;// ������˽�е�����  ���ɼ̳�
		cout << m_A << endl;//�����й��е����� �ɼ̳�  �������� protected  ���ⲻ�ɷ���
		cout << m_B << endl;//�����б��������� �ɼ̳�  �������� protected  ���ⲻ�ɷ���


	}

};


void Myfunc()
{
	Son2  s2;
	//s2.m_A;//protested Ȩ��   ���ⲻ�ɷ���
	//s2.m_B;

}

//////////////////˽�м̳�///////////////
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;


};
class Son3 :private Base3
{
public:
	void func()
	{ 
		//cout << m_C << endl;// ������˽�е�����  ���ɼ̳�
		cout << m_A << endl;//�����й��е����� �ɼ̳�  �������� private  ���ⲻ�ɷ���
		cout << m_B << endl;//�����б��������� �ɼ̳�  �������� private  ���ⲻ�ɷ���


	}

};

class Grandson :public Son3
{
public:

	void Myfunc()
	{
	
		//cout << m_A << endl;//�������з��ʲ���m_A  ����Ϊ��Son3���Ѿ���˽��������
	
	
	}


};

int main()
{

	system("pause");
	return 0;
}