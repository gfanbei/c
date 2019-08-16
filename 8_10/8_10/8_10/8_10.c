#include <stdio.h>

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int * ptr = (int*)(&a + 1);
//	printf("%d,%d",*(a + 1),*(ptr - 1));
//
//	return 0;
//
//}

//int main()
//{
//	int a[4] = {1,2,3,4};
//	int *ptr1 = (int*)(&a + 1);
//	int *ptr2 = (int*)((int)a + 1);
//	printf("%x,%x",ptr1[-1],*ptr2);
//
//	return 0;
//}

//int main(int argc ,char *argv[])
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};
//	int *p;
//	p = a[0];
//	printf("%d\n",p[0]);
//	//printf("%d",sizeof(long));
//	return 0;
//}

void test01()//void* 无类型指针 4字节  可以定义变量
{               //任何类型的指针都可以不经过强转  转换成void*类型
	//void *p = NULL;
	int *pint = NULL;
	char *pchar = (char *)pint;
	void *pvoid = pint;

}

struct person //大小16个字节
{
	char a;//4
	int b;//4
	char c;//4
	int d;//4

};

void test02()//间接赋值
{
	struct person p = {'a',100,'b',300};
	printf("p.d = %d\n", p.d);
	printf("%d\n",sizeof(p));
	p.d = 1000;
	printf("%d\n",*(int*)((char *)&p + 12));//找到p首地址，强转为char*,加步长12找到p.d的
	printf("%d\n",(p.d));           //首地址，在强转为（int*）读取4字节 ，最后解引用
}

int main()
{          
	//test01();
	test02();

	return 0;
}