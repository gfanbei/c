#include<iostream>
#include<string>
using namespace std;

//()函数调用运算符重载

class Myprint
{
public:
	/*void operator()()
	{
		cout << "hellow word" << endl;
	}
*/
	void operator()(string text)
	{
		cout << text<< endl;
	}

};
void test01()
{
	Myprint myprint;
	myprint("hellow word");//仿函数 ，让类像函数一样使用

}


class Myadd
{
public:
	int  operator()(int v1, int v2)
	{
		return v1 + v2;
	}

};

void test02()
{
	/*Myadd myadd;
	cout<< myadd(1, 2)<< endl;*/

	cout << Myadd()(1, 2) << endl;//匿名对象
 
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}