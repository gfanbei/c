#pragma once
#include<iostream>
#include<string>

template<class T>
class Myarray
{
public:
	//����
	explicit Myarray(int capacity)//��ֹ��ʽ����ת��Myarray arr = 10��
	{
		this->m_Capacity = capacity;
		this->pAddress = new T[this->m_Capacity];
		this->m_Size = 0;
	}
	//����
	Myarray(const Myarray& arr)
	{
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < m_Size; ++i)//��������
		{
			this->pAddress[i] = arr[i];
		}
	}

	//����
	~Myarray()
	{
	
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}


	//��ֵ���������
	Myarray& operator=(Myarray& arr)
	{
	     //�ж�ԭ�� ,��  ���
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

	//[]����
	//Myarray arr
	//arr[0] = 200;
	T &operator[](int index)
	{
		return this->pAddress[index];
	}


	//β�巨
	void pushBack(T  val )
	{
		this->pAddress[m_Size] = val;
		this->m_Size++;
	
	}


	//��ȡ��С
	int getSize()
	{
		return this->m_Size;
	}

	//��ȡ����
	int getCapicity()
	{
		return this->getCapicity;
	}

private:

	T *pAddress;//ָ�����ָ��
	int m_Size;//��С
	int m_Capacity;//����
};
