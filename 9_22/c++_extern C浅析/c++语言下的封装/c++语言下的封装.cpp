#include<iostream>
using namespace std;


struct Person
{
	char name[64];
	int age;

	void PersonEat()
	{
		cout<<name << "�ڳ��˷�" << endl;
	}
};


struct Dog
{
	char name[64];
	int age;

	void DogEat()
	{
		cout << name << "�ڳԹ���" << endl;
	}
};

void test01()
{
	 Person p1;
	 strcpy(p1.name,"����");
	 p1.PersonEat();
	// p1.DogEat();//P1��û��DogEat()
 
}
//c++�еķ�װ �ϸ�����ת����⣬�����Ժ���Ϊ�󶨵�һ��
//1.���Ժ���Ϊ��Ϊһ����������ʾ�����е�����
//2.����Ȩ�� public ����Ȩ�� protected ����Ȩ�� private ˽��Ȩ��


//struct��calss��һ����˼  Ψһ�Ĳ�ͬ�� Ĭ��Ȩ�� struct��public����calss��private

class Anamall
{
    private://��ʡ�ԣ���дĬ��˽��
	//���������Ȩ�ޣ���Ĭ��Ϊ˽��
	void eat() { age = 100; };
	int age;

public:

	void width();
	int wid;

    protected:// protected��//����Ȩ��  ���ڲ����Է��ʣ�����ǰ���������Է��ʣ������ⲿ�����Է���

	int deep;
	void deepth() { deep = 100; };//�����ڿ��Է���
};

//˽��Ȩ�޾���˽�г�Ա�����ԡ������������ڲ����Է��ʣ����ⲿ������
//����Ȩ�ޣ������ڡ����ⶼ���Է���

void test02()
{
	Anamall se;
	//se.eat();û������Ȩ�ޣ�Ĭ��˽�У������ⲻ�ܷ���

	//se.age;

	se.wid = 100;//������������Է���
	//se.deep = 100;//����Ȩ�������ⲻ�ɷ���
}
//public ���� ������Է���
//protected   ���ڿ��Է��� ���ⲻ���Է��ʣ�������Է��ʣ���������ӿ��Լ̳и��׵ĲƲ���
//private ���ڿ��Է��� ���ⲻ���Է��ʣ����಻���Է��ʣ������Լ�������˭������˵��

int main()
{

	test01();
	system("pause");
	return 0;
}