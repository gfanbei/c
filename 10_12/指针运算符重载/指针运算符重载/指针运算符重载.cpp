#include<iostream>
#include<string>
using namespace std;

class Person
{

public:
	Person(int age)//有参构造
	{
		this->m_age = age;
	}


	void showage()
	{
		cout << "年龄  " << this->m_age << endl;
	}

	//析构函数
	~Person()
	{
	
		cout << "Person的析构调用" << endl;
	}

	int m_age;
};



//智能指针
//用来托管自定义类型的对象，让对象进行自动释放
class smartPointer
{
public:
   smartPointer(Person * person)
	{
	  this->person = person;
	}


   //重载->让智能指针对象像 Person *p一样去使用
   Person* operator->()
   {
	   return this->person;
   }

   //*运算符重载
   Person& operator*()
   {
	  // return * person;
	   return *this->person;//返回本体 加&
   }


   //析构函数
   ~smartPointer()
   {
	   cout << "智能指针析构了" << endl;
	   if (this->person != NULL)
	   {
		   delete this->person;
		   this-> person = NULL;
	   }
   }

private:
   Person * person;//内部维护一个指针用于访问 Person类
};

void test01()
{
	//Person p1(100);//自动析构  栈上开辟

	//Person* p1 = new Person(100);//堆上开辟，要自己释放delete

	//p1->showage();
    //	delete p1;

	smartPointer sp(new Person(100));//sp开辟到了栈上，自动释放

	sp->showage(); //sp->->showage();编译器优化了,sp->返回的是指针

	(*sp).showage();//也可以指针取*访问showage（）；

}

int main()
{
	test01();
	system("pause");
	return 0;
}