#include<iostream>
#include<string>
using namespace std;


//继承中的构造 和析构调用顺序
//子类创建对象时，先调用父类的（默认）构造然后在调用自身构造  析构则与构造相反
//子类不会调用 父类的构造和析构函数
//只有父类自己知道如何构造和析构自己是属性

class Base
{
public:
	Base()
	{
		cout << "Base的构造调用" << endl;
	}

	~Base()
	{
		cout <<"Base的析构调用" << endl;
	}

};


class Son :public Base
{
public:
	Son()
	{
		cout << "Son的构造调用" << endl;
	}

	~Son()
	{
		cout << "Son的析构调用" << endl;
	}

};

void test01()
{
	//Base b1;
	Son S1;
}



class Base2
{
public:
	Base2(int a)//有参构造
	{
		this->m_A = a;
		cout << "有参构造函数调用" << endl;
	}

	int m_A;
};

class Son2 :public Base2
{
public:
	Son2(int a):Base2(a)//利用初始化列表 调用父类 有参构造
	{

	}

};

void test02()
{
	Son2 s2(100);

}

int main()
{
	test01();
	system("pause");
	return 0;
}