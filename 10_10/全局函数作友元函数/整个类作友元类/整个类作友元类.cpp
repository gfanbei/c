#include<iostream>
#include<string>
using namespace std;


//������Ԫ��
class Building;
class goodgay
{

public:
	    goodgay();//����������ʵ�� Ҳ�����ڹ���ʵ�� д����ͬ����
		void visit();
private:
	Building*  building;

};


class  Building
{
	//�û����� ��ΪBuilding�ĺ�����
	friend class goodgay;
public:
	Building();

	string sittingroom;//����

private:
	string bedroom;//����

};

Building::Building() //����ʵ��
{
	this->bedroom = "����";
	this->sittingroom = "����";
}

goodgay::goodgay()//����ʵ��
{
	 building = new Building; //��������  ͬʱ building �����ʼ��
}

void goodgay::visit()//����ʵ��  
{
	cout<<"�û����ڷ��� "<< this -> building -> sittingroom << endl;
	cout << "�û����ڷ��� " << this->building-> bedroom << endl;
}

void test01()
{
	goodgay gg;
	gg.visit();//����visit���ʷ���

}

int main()
{
	test01();
	system("pause");
	return 0;
}