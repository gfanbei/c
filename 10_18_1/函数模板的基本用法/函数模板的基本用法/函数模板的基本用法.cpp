#include<iostream>
#include<string>
using namespace std;


//����ģ�����ʹ��
template<typename T>//template<typename T>�ȼ���template <class T>
void swap4() {}

//����int����2������
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;

}

//����double��������
void swap2(double &c, double &d)
{
	int tmp = c;
	c = d;
	d = tmp;

}

//���͡��߼�����
//���Ͳ�����  ���ͱ��--ģ�弼��

template <class T>//���߱����� �����������T��Ҫ����T��һ��ͨ�õ�����



void swap3(T &a,T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
void test01()
{
	int a = 10;
	int  b = 20;
	char c1 = 'h';
	//swap(a, b);
	swap3(a, b);//1.�Զ������Ƶ������в������Ͳſ����Ƶ�
	//swap3(a, c1);//�����������Ͳ�һ�����޷�ȷ��T������


	swap3<int>(a, b);//2.��ʾָ������ ��


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 3.14;
	double  d = 0.1;

	//swap4<>();
	//swap4<double>();//ģ�����Ҫָ����T�ſ���ʹ��
	//swap2(c, d);
	//cout << "c = " << c << endl; 
	//cout << "d = " << d << endl;


}
int main()
{
	test01();
	system("pause");
	return 0;
}