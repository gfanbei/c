#include<iostream>
using namespace  std;

const double  pi = 3.14;

//设计一个圆类  求周长 
class Circle  //代表声明一个类 ，后面紧跟类的名字
{
public://公共权限


	//在类里面写函数
	double  caculat_zc()//成员函数 计算圆的周长
	{
		return 2 * pi* m_r;
	}

	//设置半径的成员方法
	void set_r(int r)//成员函数
	{
		m_r = r;
	}
	//半径(变量)  成员属性
	int m_r;


};

void test01()
{
	Circle c1;//通过类 来创建一个圆（对象）
	//c1.m_r = 10; //给这个对象的属性赋值

	c1.set_r(10);//通过成员函数，间接给对象的属性赋值

	cout << "c1=" << c1.caculat_zc() << endl;
}

int main()
{

	test01();
	return 0;
}