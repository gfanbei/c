# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

//�ѵ��ڴ��Ա�ֶ����룬�ֶ��ͷ�
//int *getspace()
//{
//	int *p = malloc(sizeof(int) * 5);
//	if (NULL == p)
//	{
//		return NULL;
//
//	}
//	//ֻҪ���������ڴ�ռ䣬����ʹ���±�ķ�ʽ���ʿռ�
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
//	//������ڴ棬Ҫ�ͷ�
//	free(ret);
//	ret = NULL;
//}

//���������ʱ��һ��Ҫ��ʼ�����ܶ�bug�Ĳ���������Ϊû�г�ʼ����ɵ�
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


