#include<iostream>
#include<string>
using namespace std;


//�̳��еĶ���ģ��
//��λ �� C�� cd C:\Users\Administrator\Desktop\c\10_14\�̳з�ʽ\�̳��еĶ���ģ��    dir
// c1 /dl reportSingleClassLayoutSon test.cpp   Sonģ��

//�����л�̳и���� ˽�г�Ա  ֻ�Ǳ��������������� ���ʲ���


class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;


};

class Son :public Base
{
public:

	int m_D;

};

void  test01()
{
	cout << sizeof(Base) << endl;// 16
}

int main()
{
	test01();
	system("pause");
	return 0;
}