#include<iostream>
#include<string.h>


#include"Circle.h"
#include"Point.h"
using namespace std;

//1.设计一个圆类（Circle），和1个点类（Point），计算点和圆的关系
//  假如圆心坐标为x0，y0，半径为r，点的坐标为x1，y1
//2. 分文件编写
//3种关系判断
//.h中写类的成员声明
//.cpp中写成员函数实现

#if 0

//点和圆的关系
 // 点（x1,x2）,圆[x0,y0,r]


//点类
class	Point
{
private:
	int m_x1;
	int m_y1;

public:
	//设置点x坐标
	void setp_x(int x1)
	{
		m_x1 = x1;
	}
	//读取点x坐标
	int getp_x()
	{
		return m_x1;
	}

	//设置点y坐标
	void setp_y(int y1)
	{
		m_y1 = y1;
	}

	//读取点y坐标
	int getp_y()
	{
		return m_y1;
	}

};

//圆类
class Circle
{
private:

	/*
	int m_x0;//圆心x
	int m_y0;//圆心y
	*/

	Point m_center;//圆心,类（圆类）里面包含类（点类）
	int m_r;//半径r

public:

# if 0
	void setcircle_x(int x0)
	{
		m_x0 = x0;
	}

	int getcircle_x()
	{
	
		return m_x0;
	}


	void setcircle_y(int y0)
	{
		m_y0 = y0;
	}

	int getcircle_y()
	{

		return m_y0;
	}

#endif

	//设置圆心

	void setcenter(Point p2)
	{
		m_center = p2;
	}

	Point getcenter()
	{
		return m_center;
	}

	//设置半径
	void setcircle_r(int r0)
	{
		m_r = r0;
	}

	int getcircle_r()
	{

		return m_r;
	}
};


#endif

//全局函数，实现判断点和圆的关系
void judge(Point & p1, Circle & c1)//引用（对象为空间）
{
	//点与点的距离
	int  distance = (p1.getp_x() - c1.getcenter().getp_x())*(p1.getp_x() - c1.getcenter().getp_x()) + (p1.getp_y() - c1.getcenter().getp_y()) * (p1.getp_y() - c1.getcenter().getp_y());

	int r_diastance = c1.getcircle_r() * c1.getcircle_r(); //圆的半径的平方
	
		if(distance == r_diastance)
	    cout << "点在圆上" << endl;

		if (distance > r_diastance)
		cout << "点在圆外" << endl;

	
		if (distance < r_diastance)
		cout << "点在圆内" << endl;
}

void test01()
{
	Point  p; //创建点
	

	p.setp_x(10);//设置点x坐标
	p.setp_y(11);//设置点y坐标


	Circle c;//创建圆
	Point  center; //创建圆类里的类（点类）

	center.setp_x(10);
	center.setp_y(0);
	c.setcenter(center);//设置圆类里的类

	//c.setcircle_x(10);//设置圆心x坐标
	//c.setcircle_y(0);//设置圆心y坐标

	c.setcircle_r(10);//设置圆半径r

	//全局函数判断
	judge( p, c);//关系判断

	//利用成员函数判断
	c.isInCiraleByClass(p);
}
int main()
{
	test01();
	system("pause");
	return 0;
}