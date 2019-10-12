#include "marray.h"

//默认构造
Marray::Marray()
{
	this->m_Capacity = 100;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}

//有参构造 参数 数组容量
Marray::Marray(int capacity)
{
	//cout << "有参调用" << endl;
	this->m_Capacity = capacity;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}

//拷贝构造
Marray::Marray(const Marray& array)
{
	cout<<"拷贝构造调用"<<endl;
	this->pAddress = new int[array.m_Capacity];
	this->m_Capacity = array.m_Capacity;
	this->m_Size = array.m_Size;

	for (int i = 0; i < array.m_Size; ++i)
	{
		this->pAddress[i] = array.pAddress[i];

	}
}

//尾插法
void Marray::push_back(int val)
{
	//判断越界？用户自己处理
	this->pAddress[this->m_Size] = val;
	this->m_Size++;
}

//根据索引获取值
int Marray::getdata(int index)
{
	return this->pAddress[index];
}

//根据索引设置值
void Marray::setdata(int index, int val)
{
	this->pAddress[index] = val;
}

//获得大小
int Marray::getSize()
{
	return this->m_Size;
}

//获得容量
int Marray::getcapacity()
{
	return this->m_Capacity;
}

//析构
Marray::~Marray()
{
	if (this->pAddress != NULL)
	{
		//cout<<"析构调用"<<endl;
		delete[] this->pAddress;
		this->pAddress = NULL;
	}

}
