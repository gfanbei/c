#include<iostream>
#include<string>
using namespace std;


class mystring
{
public:
	mystring(const char * str)
	{
	
	}

	explicit mystring(int a)
	{
		m_size = a;
	}

	char *mstr;
	int m_size;
};

void test01()
{

	mystring   str = "acd";
	mystring   str2(10);
	//mystring   str3 = 10;//��ʲô��;��str2���ַ���10 �����ַ�������Ϊ10
	//��ʿ����ת�� �൱�� mystring str3 = mystring��10��
	////explicit�ؼ��� ��ֹ��ʽ����ת��

}
int main()
{
	test01();
	system("pause");
	return 0;
}