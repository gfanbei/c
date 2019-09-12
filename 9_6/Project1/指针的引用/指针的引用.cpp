#include<iostream>
using namespace std;


struct Person
{
	int age;
};

void allocatmemary(Person ** p)//**p具体的Person对象    *p对象的指针   p指针的指针
{
	*p = (Person *)malloc(sizeof(Person));//c++中结构体分配内存时必须强转
	(*p)->age = 100;
}
void test01()
{
	Person *p = NULL;
	allocatmemary(&p);
	cout << p->age << endl;
}


//利用指针引用开辟空间
void allocatmemaryByref(Person *  &p) //Person 8 类型 &p
{
	p = (Person *)malloc(sizeof(Person));
	(p)->age = 1000;
}
void test02()
{
	Person *p = NULL;
	allocatmemaryByref(p);//只需传一个p，本身为地址
	cout << p->age << endl;
}




//常量引用
void test03()
{
	//int &a = 10; //引用了不合法的内存，不可以
	const  int &a = 10;//加入const后，编译器处理方式为，int temp = 10，const int &a = temp

	//a = 10;

	int * p = (int *)&a;//凡是分配内存的都可以被修改
	*p = 100;

	cout << "a = " << a << endl;

}

//常量引用使用场景  用来修饰形参
void showValue( const int &val)
{
	//val += 1000;//如果只想显示内容，而不修改内容，就用const修饰该形参

	cout << "val=" << val << endl;
}


void test04()
{
	int a = 10;
	showValue(a);
}


int main()
{

	//test01();
	//test02();

	//test03();
	test04();
	return 0;
}