#include<iostream>
#include<string>
using namespace std;

//++���������(ǰ�� ����)
class  Myinteger
{
	friend ostream& operator<<(ostream& cout, Myinteger& integer); //��Ԫ���Է���˽��
public:
	Myinteger() 
	{
		m_num = 0;
	};

	//ǰ��++����   ���� ��++���ڷ���
	Myinteger& operator++()
	{
		this->m_num++;
		return *this; //ȡ* ����    (thisָ����Զָ��ǰ����)

	}

	//����++���������   ����  �ȴ�����ʱ���� ����ԭ��ֵ�����ڲ�++��������ʱ����
	Myinteger  operator++(int) //intռλ �������� ǰ�úͺ���
	{
		Myinteger tmp = *this;//������ʱ
		   //tmp.m_num = this->m_num;//����ԭ��
		m_num++;//ԭ��++

		return tmp;
	}

	//��ʱ���ݷ������û��������


private:
	int m_num;
};

//<< ���������
ostream& operator<<(ostream& cout, Myinteger& integer)
{
	cout<<integer.m_num<<endl;
	return cout;
}

void test01()
{

	Myinteger  integer;

	++ integer;
	cout << integer;
	integer ++;

	cout << integer << endl;
	//ʹ�� &ԭ��
#if 0
	++(++integer);//(++integer) ��û������ ���ص������ݣ�Ȼ�������++
	//cout << ++(++integer)<< endl;
	cout << integer << endl; //���Ϊ1 ������2 �����Ҫ����
	
#endif

}

int main()
{
	test01();

#if 0

	int a = 10;
	++(++a);
	cout<<a<<endl; // 12
# endif

	system("pause");
	return 0;
}