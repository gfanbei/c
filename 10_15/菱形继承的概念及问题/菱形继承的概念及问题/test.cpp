#include<iostream>
#include<string>
using namespace std;


//���μ̳и������

//��̳У�ֻ�ܽ���߱��������ȵĶ�̳��������Ķ��������⣬���ܽ��û�й������ȵĶ�̳�
//��ʡ��Դ
class Animal
{
public:
	int m_age ;
	void func() { cout << "Animal::func" << endl; }
};

//�����Sheep
class Sheep :  virtual public Animal
{};

//�����Tuo
class Tuo : virtual public Animal
{};


class Sheeptuo :public Sheep, public Tuo
{
 

};


//���μ̳еĽ������  ��̳� virtual
void test01()
{
	Sheeptuo st;
	st.m_age = 200;

#if 0 
	st.Sheep::m_age = 10;
	st.Tuo::m_age = 20;

	//st.func();
	//��̳�֮�� sheep TUO����һ������ ��ͨ�������ָ�루vbtr��+ƫ������
	cout << st.Sheep::m_age << endl;//20
	cout << st.Tuo::m_age << endl;//20
	//cout << st.m_age << endl;
	

	//cout << st.m_age << endl;//����˶���������

#endif



	//*(int*)((int*)*(int*)(&st + 1) + 1)

	//�ҵ�Sheep��ƫ�Ʋ�����
	cout << *(int*)((int*)*(int*)&st + 1) << endl;
	
	//�ҵ�Tuo��ƫ�Ʋ�����
	cout << *((int*)((int*)*((int*)&st + 1) + 1)) << endl;

	//���age  ��ʼ+Sheep��ƫ����
	cout << ((Animal*)((char*)&st + (*(int*)((int*)*(int*)&st + 1))))->m_age << endl;


}


int main()
{

	test01();
	system("pause");
	return 0;
}