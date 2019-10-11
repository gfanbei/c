#include<iostream>
#include<string>
using namespace std;

//全局函数作友元函数
//友元函数目的  访问类中私有成员属性

class Building
{

	//让全局函数Goodgay作我的好朋友   即友元函数
	//全局函数写到类中声明并且前面加friend
	friend void Goodgay(Building* Building);
public:
	Building()
	{
		/*this->m_bedroom = "卧室";
		this->m_sittingroom = "客厅";*/

		//与上边写法等价
		m_bedroom = "卧室";
		m_sittingroom = "客厅";
	
	}

	string m_sittingroom;
private:
	string m_bedroom;
};

//全局函数 
void Goodgay(Building* Building )
{
	cout<<"好基友在访问 "<< Building->m_sittingroom<<endl;
	cout << "好基友在访问 " << Building->m_bedroom << endl;

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