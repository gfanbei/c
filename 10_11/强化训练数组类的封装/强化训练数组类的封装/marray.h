#pragma once
#include<iostream>

using namespace std;

class Marray
{
  public:
	Marray();//Ĭ�Ϲ���  Ĭ��100����
	Marray(int capacity);//�в�
	Marray(const Marray& array);//����

	 //β�巨
	void push_back(int val);
	
	//����������ȡֵ
	int getdata(int index);
	
	//������������ֵ
	void setdata(int index, int val);

	//��ô�С
	int getSize();

	//�������
	int getcapacity();

	~Marray();//����

private:

	int *pAddress;//ָ�������洢���ݵ�ָ��
	int m_Size;//�����С
	int m_Capacity;//��������
};