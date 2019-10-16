#include<iostream>
#include<string>
using namespace std;


//多态
//静态联编和动态联编
class Animal
{
public:

	 virtual void speak()
	{
		cout<<"动物在说话"<<endl;
	
	}


};

class Cat :public Animal
{
public:

	void speak()
	{
		cout << "小猫在说话" << endl;

	}
	
	
};

//调用dospeak speak函数的地址就绑定好了  早邦定，静态联编 编译阶段就确定好了地址
//若想调用猫的speak 不能不能提前绑定好函数的地址了，所以需要在运行时再去确定函数地址
//动态联编 写法将dospeak 改为虚函数
//多态  父类的引用或指针 指向子类对象（面试题：什么是多态）
void dospeak(Animal & animal)
{
	animal.speak();

}

//如果发生了继承的关系 编译器允许进行类型转换

void test01()
{
	Cat cat;
	dospeak(cat);
}

void test02()
{
	//cout << sizeof(Animal) << endl; //加上virtual之后 为4
	Animal * animal = new Cat;
	//animal->speak();//小猫在说话

	//(*(int *)(*(int*)Animal))  函数指针（指针函数可以使用函数指针）
	  //( (void(*)()) (*(int *)*(int*)animal) )   ();//内部原理

}
int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}