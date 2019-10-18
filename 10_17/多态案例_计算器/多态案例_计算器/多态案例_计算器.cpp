#include<iostream>
#include<string>
using namespace  std;


//多态案例计算器
class Caculator
{
public:
	void Setval1(int v1)
	{
	
		val1 = v1;
	}

	void Setval2(int v2)
	{

		val2 = v2;
	}


	int Getval1()
	{
		return val1;
	   
	}
	int Getval2()
	{
		return val2;

	}

	int Getresult(string oper)
	{
		if (oper == "+")
		{
			return val1 + val2;
		}


		if (oper == "-")
		{
			return val1 - val2;
		}


		if (oper == "*")
		{
			return val1 * val2;
		}
	}


private:
	int val1;
	int val2;
	string oper;


};

void test01()
{
	Caculator c1;
	c1.Setval1(10);
	c1.Setval2(20);

	cout << c1.Getresult("+") << endl;
	cout << c1.Getresult("*") << endl;

}


//真正的开发中，有开发原则 开闭原则
//对扩展开放  对修改关闭

//利用多态实现计算器
class Abstractcaculate
{
public:

	//纯虚函数 virtual int Getresult(){return0;}
    //如果父类中有了纯虚函数，这个父类就无法实例化对象
	//如果父类中有了纯虚函数， 子类继承父类 就必须要实现 纯虚函数
	//这个类有了纯虚函数，通常称为 抽象类
	/*virtual int Getresult()
	{
	
		return 0;
	}*/

	virtual int Getresult() = 0;

	void Setval1(int v1)
	{

		val1 = v1;
	}

	void Setval2(int v2)
	{

		val2 = v2;
	}
public:
	int val1;
	int val2;
};

//加法计算器
class pluscaculate :public Abstractcaculate
{
public:
	virtual int Getresult()//vitural 可写可不写
	{
	
		return val1 + val2;
	}

};

//减法计算器
class subcaculate :public Abstractcaculate
{
public:
	virtual int Getresult()//vitural 可写可不写
	{

		return val1 - val2;
	}

};


//乘法计算器
class mutcaculate :public Abstractcaculate
{
public:

	
	virtual int Getresult()//vitural 可写可不写
	{

		return val1 * val2;
	}

};

//如果父类中有了纯虚函数， 子类继承父类 就必须要实现 纯虚函数
class A :public Abstractcaculate
{
public:
	virtual int Getresult()
	{
		return  0;
	}

};

void test02()
{
	/*pluscaculate c2;
	c2.Setval1(10);
	c2.Setval2(20);

	cout << c2.Getresult() << endl;*/


	//加法
	Abstractcaculate * abc;//父类指针
	abc = new pluscaculate;//父类指针指向子类 （发生多态）
	abc->Setval1(10);
	abc->Setval2(20);

	cout << abc->Getresult() << endl;


	//减法
	delete abc;

	Abstractcaculate * ab;//父类指针
	ab = new subcaculate;//父类指针指向子类 （发生多态）
	ab->Setval1(10);
	ab->Setval2(20);

	cout << ab->Getresult() << endl;

	//乘法
	delete ab;

	Abstractcaculate * a;//父类指针
	a = new mutcaculate;//父类指针指向子类 （发生多态）
	a->Setval1(10);
	a->Setval2(20);

	cout << a->Getresult() << endl;

	//A a;

	
	//如果父类有了纯虚函数，不能实例化对象
	//Abstractcaculate  aaa;
	//Abstractcaculate * cd = new Abstractcaculate;

}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
    
}