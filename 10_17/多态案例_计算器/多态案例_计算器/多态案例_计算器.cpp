#include<iostream>
#include<string>
using namespace  std;


//��̬����������
class Caculator
{
public:
	void Setval1(int v1)
	{
	
		val1 = v1;
	}

	void Setval2(int v2)
	{

		val2 = v2;
	}


	int Getval1()
	{
		return val1;
	   
	}
	int Getval2()
	{
		return val2;

	}

	int Getresult(string oper)
	{
		if (oper == "+")
		{
			return val1 + val2;
		}


		if (oper == "-")
		{
			return val1 - val2;
		}


		if (oper == "*")
		{
			return val1 * val2;
		}
	}


private:
	int val1;
	int val2;
	string oper;


};

void test01()
{
	Caculator c1;
	c1.Setval1(10);
	c1.Setval2(20);

	cout << c1.Getresult("+") << endl;
	cout << c1.Getresult("*") << endl;

}


//�����Ŀ����У��п���ԭ�� ����ԭ��
//����չ����  ���޸Ĺر�

//���ö�̬ʵ�ּ�����
class Abstractcaculate
{
public:

	//���麯�� virtual int Getresult(){return0;}
    //������������˴��麯�������������޷�ʵ��������
	//������������˴��麯���� ����̳и��� �ͱ���Ҫʵ�� ���麯��
	//��������˴��麯����ͨ����Ϊ ������
	/*virtual int Getresult()
	{
	
		return 0;
	}*/

	virtual int Getresult() = 0;

	void Setval1(int v1)
	{

		val1 = v1;
	}

	void Setval2(int v2)
	{

		val2 = v2;
	}
public:
	int val1;
	int val2;
};

//�ӷ�������
class pluscaculate :public Abstractcaculate
{
public:
	virtual int Getresult()//vitural ��д�ɲ�д
	{
	
		return val1 + val2;
	}

};

//����������
class subcaculate :public Abstractcaculate
{
public:
	virtual int Getresult()//vitural ��д�ɲ�д
	{

		return val1 - val2;
	}

};


//�˷�������
class mutcaculate :public Abstractcaculate
{
public:

	
	virtual int Getresult()//vitural ��д�ɲ�д
	{

		return val1 * val2;
	}

};

//������������˴��麯���� ����̳и��� �ͱ���Ҫʵ�� ���麯��
class A :public Abstractcaculate
{
public:
	virtual int Getresult()
	{
		return  0;
	}

};

void test02()
{
	/*pluscaculate c2;
	c2.Setval1(10);
	c2.Setval2(20);

	cout << c2.Getresult() << endl;*/


	//�ӷ�
	Abstractcaculate * abc;//����ָ��
	abc = new pluscaculate;//����ָ��ָ������ ��������̬��
	abc->Setval1(10);
	abc->Setval2(20);

	cout << abc->Getresult() << endl;


	//����
	delete abc;

	Abstractcaculate * ab;//����ָ��
	ab = new subcaculate;//����ָ��ָ������ ��������̬��
	ab->Setval1(10);
	ab->Setval2(20);

	cout << ab->Getresult() << endl;

	//�˷�
	delete ab;

	Abstractcaculate * a;//����ָ��
	a = new mutcaculate;//����ָ��ָ������ ��������̬��
	a->Setval1(10);
	a->Setval2(20);

	cout << a->Getresult() << endl;

	//A a;

	
	//����������˴��麯��������ʵ��������
	//Abstractcaculate  aaa;
	//Abstractcaculate * cd = new Abstractcaculate;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
    
}