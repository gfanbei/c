#include<iostream>
using namespace std;


struct Person
{
	char name[64];
	int age;

	void PersonEat()
	{
		cout<<name << "在吃人饭" << endl;
	}
};


struct Dog
{
	char name[64];
	int age;

	void DogEat()
	{
		cout << name << "在吃狗粮" << endl;
	}
};

void test01()
{
	 Person p1;
	 strcpy(p1.name,"老王");
	 p1.PersonEat();
	// p1.DogEat();//P1里没有DogEat()
 
}
//c++中的封装 严格类型转换检测，让属性和行为绑定到一起
//1.属性和行为作为一个整体来表示生活中的事物
//2.控制权限 public 公有权限 protected 保护权限 private 私有权限


//struct和calss是一个意思  唯一的不同是 默认权限 struct是public但是calss是private

class Anamall
{
    private://可省略，不写默认私有
	//如果不声明权限，则默认为私有
	void eat() { age = 100; };
	int age;

public:

	void width();
	int wid;

    protected:// protected；//保护权限  类内部可以访问，（当前类的子类可以访问），类外部不可以访问

	int deep;
	void deepth() { deep = 100; };//在类内可以访问
};

//私有权限就是私有成员（属性、函数）在类内部可以访问，类外部不可以
//共有权限，在类内、类外都可以访问

void test02()
{
	Anamall se;
	//se.eat();没有声明权限，默认私有，在类外不能访问

	//se.age;

	se.wid = 100;//公有在类外可以访问
	//se.deep = 100;//保护权限在类外不可访问
}
//public 类内 类外可以访问
//protected   类内可以访问 类外不可以访问（子类可以访问）（例如儿子可以继承父亲的财产）
//private 类内可以访问 类外不可以访问（子类不可以访问）（有自己的秘密谁都不能说）

int main()
{

	test01();
	system("pause");
	return 0;
}