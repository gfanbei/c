#include<iostream>
#include<string>
using namespace std;


//�̳��еĹ��� ����������˳��
//���ഴ������ʱ���ȵ��ø���ģ�Ĭ�ϣ�����Ȼ���ڵ���������  �������빹���෴
//���಻����� ����Ĺ������������
//ֻ�и����Լ�֪����ι���������Լ�������

class Base
{
public:
	Base()
	{
		cout << "Base�Ĺ������" << endl;
	}

	~Base()
	{
		cout <<"Base����������" << endl;
	}

};


class Son :public Base
{
public:
	Son()
	{
		cout << "Son�Ĺ������" << endl;
	}

	~Son()
	{
		cout << "Son����������" << endl;
	}

};

void test01()
{
	//Base b1;
	Son S1;
}



class Base2
{
public:
	Base2(int a)//�вι���
	{
		this->m_A = a;
		cout << "�вι��캯������" << endl;
	}

	int m_A;
};

class Son2 :public Base2
{
public:
	Son2(int a):Base2(a)//���ó�ʼ���б� ���ø��� �вι���
	{

	}

};

void test02()
{
	Son2 s2(100);

}

int main()
{
	test01();
	system("pause");
	return 0;
}