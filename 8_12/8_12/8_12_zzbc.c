#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//指针步长;指针变量+1，要向后跳多少字节
//指针的类型不单单决定指针的步长 ，还决定解引用时从给定地址开始取类型大小的字节数
#if 0
void test01( )
{
	//char *p = NULL;
	//printf("%d\n ",p);
	//printf("%d\n ",p + 1);
	//printf("------------------------\n");
	////------------------------------
	//int *p2 = NULL;
	//printf("%d\n ", p2);
	//printf("%d\n ", p2 + 1);

	char buff[1024] = { 0 };
	int a = 200;
	//memcpy(buff + 1,&a ,sizeof(int));
	//printf("buff = %d\n", buff);

	char *p3 = buff;
	printf("*(int *)(p3 + 1) = %d\n", *(int *)(p3 + 1));
}
#endif

#if 0
struct person
{
	int a;
	char b;
    char buf[50];
	int c;


};
void test02()
{
	struct person p = { 10,'D',"abcdef151",300 };
	char b;
	printf("a off:%d\n ",offsetof(struct person,c));//offsetof计算结构体中变量地址的偏移
	printf("c = %d ", *(int*)((char*)&p + offsetof(struct person, c)));
}

# endif

#if 0
//sprintf用法
void test03()
{
	//1.格式化字符串
	char buf[1024] = {0};
	sprintf(buf,"hello %s \n","suanpu");
	printf("buf:%s \n",buf);
	printf("--------------\n");
	//2.拼接字符
	char *s1 = "hellow";
	char *s2 = "world";
	sprintf(buf,"%s %s",s1,s2);
	printf("buf:%s \n", buf);
	//3.数字转成字符串格式
	int number = 666;
	memset(buf, 0 ,1024);
	sprintf(buf,"%d",number);
	printf("buf:%s \n", buf);
	//4.格式化数字，八进制  十六进制
	memset(buf, 0, 1024);
	sprintf(buf, "%o", number);
	printf("buf:%s \n", buf);


	memset(buf, 0, 1024);
	sprintf(buf, "%x", number);
	printf("buf:%s \n", buf);

	char **p = malloc(sizeof(char * ) * 5);
	for (int i = 0; i < 5; ++i)
	{
		p[i] = malloc(64);
		memset(p[i], 0, 64);
		sprintf(p[i],"Name_%d",i +1);
	}
	//打印字符串
	for (int i = 0; i < 5; ++i)
	{
		printf("%s\n  ",p[i]);
	}
	//释放内存
	for (int i = 0; i < 5; ++i)
	{
		if (p[i] != NULL)
		{
			free(p[i]);
			p[i] = NULL;

		}
	}
	if (p != NULL)
	{
		free(p);
		p = NULL;
	
		 
	}
}
#endif
#if 0

void test04()
{
	int *p = calloc(10 , sizeof(int));//堆上开辟10*sizeof(int)个字节大小的空间
	for (int i = 0; i < 10; ++i)
	{
		p[i] = i + 1;
	
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", p[i]);
	}
	if(p != NULL)
	{
	  free(p);
	  p = NULL;
	}
}
#endif

//realloc 
//重新分配malloc或calloc函数在堆中内存大小
//realloc不会自动清理增加的内容,需手动清理，如果指定的地址后面有连续的空间
//那么就会在已有地址基础上增加内存,如果指定的地址后面没有空间
//realloc会重新分配新的连续内存，将旧内存的值考到新内存，并释放旧内存
void test05()
{
	int *p = malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; ++i)
	{
		p[i] = i + 1;

	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", p[i]);
	}
	printf("%d\n ", p);
	p = realloc(p, sizeof(int) * 500);
	printf("%d\n ", p);
	for (int i = 0; i < 15; ++i)
	{
		printf("%d ", p[i]);
	}
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	return 0;
}