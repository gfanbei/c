#include<iostream>
#include<string>
using namespace std;


//��̬ת�� �붯̬ת��  ����ת��  ���½���ת��

//��̬ת��   static_cast<Ŀ������>(ԭ����)
//��������ת��
void test01()
{
	char a = 'a'	;
	double  b = static_cast<double>(a);
	cout << b << endl;


	double c = 3.142569;
	int  d = static_cast<int>(c);
	cout << d<< endl;
}

//������ת��
class Base 
{
     virtual void fun()
	 {}
};


class Child :public Base 
{
	virtual void fun()
	{}
};


class Other {};


void test02()
{
	Base * base = NULL ;//����Ҳ���� 
	Child * child = NULL ;

	//��childתΪ Base*����  ����ת�� ����ȫ
	Base * base2 = static_cast<Base *>(child);

	//��baseתΪChild *  ���� ��ȫ
	Child * child2 = static_cast<Child *>(base);

	//תOther����   ת����Ч
	//Other * child2 = static_cast<Other *>(base);
}



//��̬ת�� dynamic_cast<Ŀ������>(ԭ����); 

void test03()
{
	//1.�������Ͳ���ת��
	char c = 'a';
	//double d = dynamic_cast<double>(c);

	
}

void test04()
{
	Base * base = NULL;
	Child * child = NULL;


	Base * base3 = dynamic_cast<Base *>(child);

	//3.���������̬ ynamic_cast�����
	Child * child4 = dynamic_cast<Child *>(base); //2.���²�����

}


//����ת��  const_cast
void test05()
{
	const  int * p = NULL;//λ�ڷ��ű�
	//ȥ��const
	int * newp = const_cast<int *>(p);

	int * d = NULL;
	const int * d1  = const_cast<const int *>(d);


	//��ָ����߷����ò��ܽ���ת��
	//const  int a1 = 10;
	//int a2 = const_cast< int >(a1);


	//����

	int c = 10;
	int &cref = c;
	const int& cref2 = const_cast<const int&>(cref);

}

//���½���ת��  reinterpret_cast
void test06()
  {
	int a = 10;
	reinterpret_cast<int *>(a);


	Base * base = NULL;
	Other * child2 = reinterpret_cast<Other *>(base);//����ת��  ������ȫ ���Ƽ�ʹ��
}


int main()
{


	test01();
	system("pause");
	return 0;
}