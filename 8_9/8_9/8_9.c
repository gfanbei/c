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

int compinit( const void * x, const void * y)//回调函数
{
	int *x_= (int*)x;
	int *y_= (int*)y;
	if(*x_> *y_)
	{
		return -1;    //为1时升序
	}
	else if (*x_< *y_)
	{
		return 1; // 为-1升序
	}
	else
	{
		return 0;
	}
}

void swap(void *x, void *y, int size)//2个元素之间进行调换，将元素的每一个字节进行 
									// 调换，共调换元素类型所占字节size次         
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
	for (; i < elems - 1; i++) //共排序elems - 1次
	{
		int j = 0;
		int flag = 0;
		for (; j < elems - 1 - i; j++)
		{
			if (compinit(p + size * j, p + size * (j + 1)) > 0)  //(p+size*j)找到下标为j元素的起始地址
			{                                               //   *p+4*j ，4为int所占字节大小
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

int main( )//排序，调用函数qsort
{
	int a[] = { 1,2,55,88,9,5,88,547,77,4566,3,5,-3,4,625,89 };
	int  num = sizeof(a) / sizeof(a[0]);

	show(a, num );
	//qsort(a, num, sizeof(int), compinit );
	myqsort(a, num, sizeof(int), compinit);

	show(a, num);

	return 0;
}