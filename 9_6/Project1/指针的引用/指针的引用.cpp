#include<iostream>
using namespace std;


struct Person
{
	int age;
};

void allocatmemary(Person ** p)//**p�����Person����    *p�����ָ��   pָ���ָ��
{
	*p = (Person *)malloc(sizeof(Person));//c++�нṹ������ڴ�ʱ����ǿת
	(*p)->age = 100;
}
void test01()
{
	Person *p = NULL;
	allocatmemary(&p);
	cout << p->age << endl;
}


//����ָ�����ÿ��ٿռ�
void allocatmemaryByref(Person *  &p) //Person 8 ���� &p
{
	p = (Person *)malloc(sizeof(Person));
	(p)->age = 1000;
}
void test02()
{
	Person *p = NULL;
	allocatmemaryByref(p);//ֻ�贫һ��p������Ϊ��ַ
	cout << p->age << endl;
}




//��������
void test03()
{
	//int &a = 10; //�����˲��Ϸ����ڴ棬������
	const  int &a = 10;//����const�󣬱���������ʽΪ��int temp = 10��const int &a = temp

	//a = 10;

	int * p = (int *)&a;//���Ƿ����ڴ�Ķ����Ա��޸�
	*p = 100;

	cout << "a = " << a << endl;

}

//��������ʹ�ó���  ���������β�
void showValue( const int &val)
{
	//val += 1000;//���ֻ����ʾ���ݣ������޸����ݣ�����const���θ��β�

	cout << "val=" << val << endl;
}


void test04()
{
	int a = 10;
	showValue(a);
}


int main()
{

	//test01();
	//test02();

	//test03();
	test04();
	return 0;
}