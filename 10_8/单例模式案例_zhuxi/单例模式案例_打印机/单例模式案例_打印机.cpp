#define _CRT_SECURE_NO_WARNING
#include<iostream>
#include<string>
using namespace std;


//����ģʽ  ��ӡ��
//ģ�⹫˾Ա��ʹ�ô�ӡ����������ӡ�����Դ�ӡԱ��Ҫ��������ݣ����ҿ����ۻ���ӡʹ�ô���
class Printer
{

public:
	static Printer* Getinstance()//�����ṩGetinstance()�����ʸ�ָ��
	{
		return Singleprinter;
	}

	void printext(string text)//�ṩ��ӡ����
	{
		cout << text << endl;
		m_count++;
		cout <<"��ӡ���ۻ�ʹ�ô���  " << m_count << endl;
	}

private://Ĭ���뿽������˽��
	Printer()
	{
		m_count = 0;
	}
	Printer(const Printer& c)
	{}



private:
	static Printer* Singleprinter;//˽��Ψһָ��

	int m_count;

};


Printer* Printer::Singleprinter = new Printer;//�����ʼ��

void test01()
{
	//��� ��ӡ��
	Printer* printer = Printer::Getinstance(); 

	printer->printext("��ְ����");
	printer->printext("��ְ����");
	printer->printext("��������"); 
	printer->printext("��н����");
	printer->printext("��������");

}

int main()
{
	
	test01();
	system("pause");
	return 0;
}