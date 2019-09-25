#pragma once// 防止头文件重复编写
#include <iostream>
using namespace std;

//点类 
//声明
class	Point
{
private:
	int m_x1;
	int m_y1;

public:
	//设置点x坐标
	void setp_x(int x1);
	/*{
		m_x1 = x1;
	}*/
	//读取点x坐标
	int getp_x();
	/*{
		return m_x1;
	}*/

	//设置点y坐标
	void setp_y(int y1);
	/*{
		m_y1 = y1;
	}*/

	//读取点y坐标
	int getp_y();
	/*{
		return m_y1;
	}*/

};