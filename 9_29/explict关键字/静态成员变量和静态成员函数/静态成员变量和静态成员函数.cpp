#include<iostream>
#include<string>

using namespace std;


class Person
{
  public:
	Person()
{
	 // m_age = 10;
}
  static int m_age;//����static���Ǿ�̬��Ա�������Ṳ������

//��̬��Ա������������������������г�ʼ��
  //��̬��Ա���� Ҳ����Ȩ�޵�


  int m_A;
  //��̬��Ա����
  //�����Է�����ͨ��Ա����
  //���Է��ʾ�̬��Ա ����
  static   void func()
  {

	  //m_A = 10;
	  m_age = 2000;//���ʾ�̬��Ա����
	  cout<<"func�ĵ���"<<endl;
  
  }


  //��ͨ��Ա����  ���Է�����ͨ��Ա���� Ҳ���Է��ʾ�̬��Ա����
  void m_func()
  {
	  m_A = 100; //������ͨ��Ա
	  m_age = 100;//���ʾ�̬��Ա����
	  func2();

  }

private:
	static   int m_other;//˽��Ȩ�ޣ������ⲻ�ܷ���

	static void func2()
	{
	
		cout << "func2�ĵ���" << endl;
	}
};

int Person::m_age = 10;//������г�ʼ��(�������� �൱�� ����)

//int Person::m_other = 1000;//���������� ��������Ϊ�൱�� �� ���ڣ�

void test01()
{
	//1.ͨ�������������
	Person p1;
	p1.m_age = 10;

	Person p2;
	p2.m_age = 20;

	cout << "p1= " << p1.m_age << endl;//10 ����20 ?    20
	cout << "p2= " << p2.m_age << endl;
	//��������

	//2.ͨ��������������
	cout << "ͨ����������age " << Person::m_age << endl;
	//cout << "other= " << Person::m_other << endl;//˽��Ȩ���������޷�����

	//��̬��Ա��������
	//1.ͨ���������  2.ͨ����������
	p1.func();
	p2.func();
	Person::func();

	//��̬��Ա����Ҳ����Ȩ�޵�
	//Person::func2();//˽�в��ɷ���
}

int main()
{

	test01();
	system("pause");
	return 0;
}