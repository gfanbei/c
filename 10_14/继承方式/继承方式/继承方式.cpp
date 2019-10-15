#include<iostream>
#include<string>
using namespace std;


//继承方式  public  protected  private
// 不管公有继承、保护、还是私有，基类中的私有属性， 都不可以继承下去

class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;


};

//公有继承///
class Son1 :public Base1
{
public:
	void func()
	{
		//cout << m_C << endl;// 基类中私有的属性  不可继承
		cout << m_A << endl;//基类中共有的属性 可继承  子类中是 public  类外可以访问
		cout << m_B << endl;//基类中保护的属性 可继承  子类中是 protected  类外不可访问


	}
	

};

void Myfunc()
{
	Son1  s1;
	s1.m_A;
	//s1.m_B;

}

//////////////////保护继承////////////////////
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;


};


class Son2 :protected Base2
{
public:
	void func()
	{
		//cout << m_C << endl;// 基类中私有的属性  不可继承
		cout << m_A << endl;//基类中共有的属性 可继承  子类中是 protected  类外不可访问
		cout << m_B << endl;//基类中保护的属性 可继承  子类中是 protected  类外不可访问


	}

};


void Myfunc()
{
	Son2  s2;
	//s2.m_A;//protested 权限   类外不可访问
	//s2.m_B;

}

//////////////////私有继承///////////////
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;


};
class Son3 :private Base3
{
public:
	void func()
	{ 
		//cout << m_C << endl;// 基类中私有的属性  不可继承
		cout << m_A << endl;//基类中共有的属性 可继承  子类中是 private  类外不可访问
		cout << m_B << endl;//基类中保护的属性 可继承  子类中是 private  类外不可访问


	}

};

class Grandson :public Son3
{
public:

	void Myfunc()
	{
	
		//cout << m_A << endl;//孙子类中访问不到m_A  ，因为在Son3中已经是私有属性了
	
	
	}


};

int main()
{

	system("pause");
	return 0;
}