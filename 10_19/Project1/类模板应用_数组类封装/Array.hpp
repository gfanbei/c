#pragma once
#include<iostream>
#include<string>

template<class T>
class Myarray
{
public:
	//构造
	explicit Myarray(int capacity)//防止隐式类型转换Myarray arr = 10；
	{
		this->m_Capacity = capacity;
		this->pAddress = new T[this->m_Capacity];
		this->m_Size = 0;
	}
	//拷贝
	Myarray(const Myarray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < m_Size; ++i)//拷贝数据
		{
			this->pAddress[i] = arr[i];
		}
	}

	//析构
	~Myarray()
	{
	
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}


	//赋值运算符重载
	Myarray& operator=(Myarray& arr)
	{
	     //判断原有 ,有  清空
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < m_Size; ++i)
		{
			this->pAddress[i] = arr[i];
		}

	}

	//[]重载
	//Myarray arr
	//arr[0] = 200;
	T &operator[](int index)
	{
		return this->pAddress[index];
	}


	//尾插法
	void pushBack(T  val )
	{
		this->pAddress[m_Size] = val;
		this->m_Size++;
	
	}


	//获取大小
	int getSize()
	{
		return this->m_Size;
	}

	//获取容量
	int getCapicity()
	{
		return this->getCapicity;
	}

private:

	T *pAddress;//指向堆区指针
	int m_Size;//大小
	int m_Capacity;//容量
};
