#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


//虚析构与纯虚析构



//纯虚析构函数与虚析构函数区别
//虚析构函数不影响创建对象 可实例化
//纯虚析构函数 算抽象类 不能实例化
class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	
	}

	//普通析构 是不会调用子类的析构的，所以可能会导致释放不干净
	//利用虚析构解决这个问题

	/*virtual ~Animal()
	{
		cout << "Animal的析构调用" << endl;
	}*/

	//纯虚析构 写法
	//纯虚析构需要声明 还需要实现 类内声明 类外实现
	//如果函数中出现了 纯虚析构函数 那么这个类也算抽象类
    //抽象类 不可实例化对象
	virtual ~Animal() = 0;
};


//如果函数中出现了 纯虚析构函数 那么这个类也算抽象类  不可实例化对象
//void fun()
//{
//	Animal an;
//	Animal * animo = new Animal;
//}

Animal::~Animal()
{
 
	cout << "Animal的纯虚析构调用" << endl;
}

class Cat :public Animal
{
public:
	Cat(const char * name)
	{
		this->m_name = new char[strlen(name) + 1];
		strcpy(this->m_name,name);
	} 
	
	virtual void speak()//virtual 可不写
	{
		cout << "小猫在说话" << endl;
	}

	~Cat()
	{
		cout << "Cat的析构调用" << endl;
		if (this->m_name != NULL)
		{
			delete[] this->m_name;
			this->m_name = NULL;

		}
	}

	char * m_name;
};
void test01()
{

	Animal* animal = new Cat("TOM");
	animal->speak();

	delete animal;

}
int main()
{

	test01();
	system("pause");
	return 0;
}