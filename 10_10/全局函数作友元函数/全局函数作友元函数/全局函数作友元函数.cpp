#include<iostream>
#include<string>
using namespace std;

//ȫ�ֺ�������Ԫ����
//��Ԫ����Ŀ��  ��������˽�г�Ա����

class Building
{

	//��ȫ�ֺ���Goodgay���ҵĺ�����   ����Ԫ����
	//ȫ�ֺ���д��������������ǰ���friend
	friend void Goodgay(Building* Building);
public:
	Building()
	{
		/*this->m_bedroom = "����";
		this->m_sittingroom = "����";*/

		//���ϱ�д���ȼ�
		m_bedroom = "����";
		m_sittingroom = "����";
	
	}

	string m_sittingroom;
private:
	string m_bedroom;
};

//ȫ�ֺ��� 
void Goodgay(Building* Building )
{
	cout<<"�û����ڷ��� "<< Building->m_sittingroom<<endl;
	cout << "�û����ڷ��� " << Building->m_bedroom << endl;

}
void test01()
{
	Building * building  = new  Building;
	Goodgay(building);
 
}



int main()
{
	test01();
	system("pause");
	return 0;
}