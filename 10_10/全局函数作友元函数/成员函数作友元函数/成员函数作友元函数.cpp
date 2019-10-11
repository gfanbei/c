#include<iostream>
#include<string>
using namespace std;


//成员函数作友元
class Building;
class goodgay
{

public:
	goodgay();//声明，类外实现 也可类内构造实现 写法不同而已
	void visit();
	void visit2();
private:
	Building*  building;

};


class  Building
{
	//成员函数作友元函数
	friend void goodgay::visit(); // 加作用域

public:
	Building();

	string sittingroom;//客厅

private:
	string bedroom;//卧室

};

Building::Building() //构造实现
{
	this->bedroom = "卧室";
	this->sittingroom = "客厅";
}

goodgay::goodgay()//构造实现
{
	building = new Building; //创建房间  同时 building 对象初始化
}

void goodgay::visit()//构造实现  
{
	cout << "好基友在访问 " << this->building->sittingroom << endl;
	cout << "好基友在访问 " << this->building->bedroom << endl;
}

void goodgay::visit2()//构造实现  
{
	cout << "好基友在访问 " << this->building->sittingroom << endl;
	//cout << "好基友在访问 " << this->building->bedroom << endl;
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
