# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

//堆得内存成员手动申请，手动释放
//int *getspace()
//{
//	int *p = malloc(sizeof(int) * 5);
//	if (NULL == p)
//	{
//		return NULL;
//
//	}
//	//只要是连续的内存空间，都能使用下标的方式访问空间
//	for (int i = 0; i < 5; ++ i)
//	{
//		p[i] = 100 + i;
//
//	}
//
//	return p;
//}
//void test01()
//{
//	int *ret = getspace();
//	for (int i = 0; i < 5; ++i)
//	{ 
//		printf("%d ", ret[i]);
//	}
//	//用完堆内存，要释放
//	free(ret);
//	ret = NULL;
//}

//定义变量的时候一定要初始化，很多bug的产生都是因为没有初始化造成的
//void alspace(char *p)
//{
//	p = malloc(100);
//	memset(p, 0, 100);
//	strcpy(p, "helloword");
//
//}
//void test02()
//{
//	char *p = NULL;
//	alspace(p);
//	printf("p = %s\n", p);
//
//}


void alspace(char **p)
{
	char *temp = malloc(100);
	memset(temp, 0, 100);
	strcpy(temp, "helloword");
	*p = temp;
}
void test03()
{
	char *p = NULL;
	//alspace(p);
	alspace(&p);
	printf("p = %s\n", p);

}



int main()
{

	//test02();
	test03();
	system("pause");
	return 0;
}


