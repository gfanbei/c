#pragma once
#include<iostream>

using namespace std;

class Marray
{
  public:
	Marray();//默认构造  默认100容量
	Marray(int capacity);//有参
	Marray(const Marray& array);//拷贝

	 //尾插法
	void push_back(int val);
	
	//根据索引获取值
	int getdata(int index);
	
	//根据索引设置值
	void setdata(int index, int val);

	//获得大小
	int getSize();

	//获得容量
	int getcapacity();

	~Marray();//析构

private:

	int *pAddress;//指向真正存储数据的指针
	int m_Size;//数组大小
	int m_Capacity;//数组容量
};