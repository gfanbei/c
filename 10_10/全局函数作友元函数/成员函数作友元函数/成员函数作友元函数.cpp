#include<iostream>
#include<string>
using namespace std;


//��Ա��������Ԫ
class Building;
class goodgay
{

public:
	goodgay();//����������ʵ�� Ҳ�����ڹ���ʵ�� д����ͬ����
	void visit();
	void visit2();
private:
	Building*  building;

};


class  Building
{
	//��Ա��������Ԫ����
	friend void goodgay::visit(); // ��������

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
	cout << "�û����ڷ��� " << this->building->sittingroom << endl;
	cout << "�û����ڷ��� " << this->building->bedroom << endl;
}

void goodgay::visit2()//����ʵ��  
{
	cout << "�û����ڷ��� " << this->building->sittingroom << endl;
	//cout << "�û����ڷ��� " << this->building->bedroom << endl;
}



void test01()
{
	goodgay gg;
	gg.visit();
	gg.visit2();

}

int main()
{
	test01();
	system("pause");
	return 0;
}
