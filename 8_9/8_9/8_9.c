#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <windows.h>


void show(int* a, int num )
{
	assert(a);
	int i = 0;
	for (; i < num; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}

int compinit( const void * x, const void * y)//�ص�����
{
	int *x_= (int*)x;
	int *y_= (int*)y;
	if(*x_> *y_)
	{
		return -1;    //Ϊ1ʱ����
	}
	else if (*x_< *y_)
	{
		return 1; // Ϊ-1����
	}
	else
	{
		return 0;
	}
}

void swap(void *x, void *y, int size)//2��Ԫ��֮����е�������Ԫ�ص�ÿһ���ֽڽ��� 
									// ������������Ԫ��������ռ�ֽ�size��         
{	char *x_ = (char*)x;
	char *y_= (char*)y;
	while (size)
	{
		*x_ ^= *y_;
		*y_ ^= *x_;
		*x_ ^= *y_;
		x_++, y_++;
		size--;

	}

}

void myqsort(void *base, int elems, int size, int(*compinit)(const void*, const void*))
{
	assert(base);
	assert(compinit);
	char* p = (char*)base;
	int i = 0;
	for (; i < elems - 1; i++) //������elems - 1��
	{
		int j = 0;
		int flag = 0;
		for (; j < elems - 1 - i; j++)
		{
			if (compinit(p + size * j, p + size * (j + 1)) > 0)  //(p+size*j)�ҵ��±�ΪjԪ�ص���ʼ��ַ
			{                                               //   *p+4*j ��4Ϊint��ռ�ֽڴ�С
				swap(p + size * j,p + size * (j + 1),size);
				flag = 1;
			}

		}
		if (flag == 0)
		{
			break;

		}
	}
}

int main( )//���򣬵��ú���qsort
{
	int a[] = { 1,2,55,88,9,5,88,547,77,4566,3,5,-3,4,625,89 };
	int  num = sizeof(a) / sizeof(a[0]);

	show(a, num );
	//qsort(a, num, sizeof(int), compinit );
	myqsort(a, num, sizeof(int), compinit);

	show(a, num);

	return 0;
}