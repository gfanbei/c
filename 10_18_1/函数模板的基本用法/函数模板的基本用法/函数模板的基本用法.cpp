#include<iostream>
#include<string>
using namespace std;


//函数模板基本使用
template<typename T>//template<typename T>等价于template <class T>
void swap4() {}

//交换int类型2个数字
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;

}

//交换double类型数字
void swap2(double &c, double &d)
{
	int tmp = c;
	c = d;
	d = tmp;

}

//类型、逻辑相似
//类型参数化  泛型编程--模板技术

template <class T>//告诉编译器 下面如果出现T不要报错，T是一个通用的类型



void swap3(T &a,T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
void test01()
{
	int a = 10;
	int  b = 20;
	char c1 = 'h';
	//swap(a, b);
	swap3(a, b);//1.自动类型推导必须有参数类型才可以推导
	//swap3(a, c1);//两个参数类型不一样，无法确定T的类型


	swap3<int>(a, b);//2.显示指定类型 ，


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	double c = 3.14;
	double  d = 0.1;

	//swap4<>();
	//swap4<double>();//模板必须要指定出T才可以使用
	//swap2(c, d);
	//cout << "c = " << c << endl; 
	//cout << "d = " << d << endl;


}
int main()
{
	test01();
	system("pause");
	return 0;
}