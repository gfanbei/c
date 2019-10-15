#include<iostream>
#include<string>
using namespace std;


//继承中的对象模型
//定位 到 C： cd C:\Users\Administrator\Desktop\c\10_14\继承方式\继承中的对象模型    dir
// c1 /dl reportSingleClassLayoutSon test.cpp   Son模型

//子类中会继承父类的 私有成员  只是被编译器隐藏起来 访问不到


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