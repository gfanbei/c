#include "marray.h"

//Ĭ�Ϲ���
Marray::Marray()
{
	this->m_Capacity = 100;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}

//�вι��� ���� ��������
Marray::Marray(int capacity)
{
	//cout << "�вε���" << endl;
	this->m_Capacity = capacity;
	this->m_Size = 0;
	this->pAddress = new int[this->m_Capacity];
}

//��������
Marray::Marray(const Marray& array)
{
	cout<<"�����������"<<endl;
	this->pAddress = new int[array.m_Capacity];
	this->m_Capacity = array.m_Capacity;
	this->m_Size = array.m_Size;

	for (int i = 0; i < array.m_Size; ++i)
	{
		this->pAddress[i] = array.pAddress[i];

	}
}

//β�巨
void Marray::push_back(int val)
{
	//�ж�Խ�磿�û��Լ�����
	this->pAddress[this->m_Size] = val;
	this->m_Size++;
}

//����������ȡֵ
int Marray::getdata(int index)
{
	return this->pAddress[index];
}

//������������ֵ
void Marray::setdata(int index, int val)
{
	this->pAddress[index] = val;
}

//��ô�С
int Marray::getSize()
{
	return this->m_Size;
}

//�������
int Marray::getcapacity()
{
	return this->m_Capacity;
}

//����
Marray::~Marray()
{
	if (this->pAddress != NULL)
	{
		//cout<<"��������"<<endl;
		delete[] this->pAddress;
		this->pAddress = NULL;
	}

}
