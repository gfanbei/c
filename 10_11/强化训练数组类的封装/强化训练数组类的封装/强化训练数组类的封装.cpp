#include<iostream>
#include<string>
#include"marray.h"
using namespace std;



void test01()
{

	//������������
	Marray* array = new Marray(30);



	Marray* array2 = new Marray(*array);//new��ʽָ�����ÿ�������  arrayΪMarray*����ȡ*Ϊ �ռ� ���Ӷ����ÿ���

	Marray array3 = *array2;//���캯�����صı���

	Marray* array4 = array;//����һ��ָ�� ��arrayִ�еĵ�ַ��ͬ ���Բ�����ÿ�������
	
	//β�巨����
	for (int i = 0; i < 10; ++i)
	{
		array2->push_back(i);
	}

	//��ȡ���ݲ���
	for (int i = 0; i < 10; ++i)
	{
		cout << array2->getdata(i) << endl;;
	}

	//����ֵ����
	array2->setdata(0, 100);
	cout << array2->getdata(0) << endl;
	delete array;

	//����Ĵ�С
	cout<<"array2����Ĵ�С  "<<array2->getSize()<<endl;

	//���������
	cout << "array2���������  " << array2->getcapacity() << endl;
}

int main()
{
    test01();
	system("pause");
	return 0;
}