#include<iostream>
#include<string>
using namespace std;


//异常的多态使用


//异常基类
class BaseEcxeption
{
public:
	virtual void Printerror()
	{
	
	}

};

class NullPointerexception :public BaseEcxeption
{
public:
	virtual void Printerror()
	{
		cout << "空指针异常" << endl;
	}


};

class Outrangsexception :public BaseEcxeption
{
public:
	virtual void Printerror()
	{
		cout << "越界异常" << endl;
	}


};

void dowork()
{
	//throw NullPointerexception();//匿名对象
	throw Outrangsexception();
}
void test01()
{
	try
	{
		dowork();
	}
	//发生多态（父类引用 指向子类对象）
	catch (BaseEcxeption &e)//引用提高效率 ，只有一份数据
	{
		e.Printerror();//加上virtual （且子类成员函数重写）之后则会（动态绑定）晚绑定
		
	}
}

int  main()
{

	test01();
	system("pause");
	return 0;
}