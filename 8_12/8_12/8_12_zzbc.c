#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//ָ�벽��;ָ�����+1��Ҫ����������ֽ�
//ָ������Ͳ���������ָ��Ĳ��� ��������������ʱ�Ӹ�����ַ��ʼȡ���ʹ�С���ֽ���
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
	printf("a off:%d\n ",offsetof(struct person,c));//offsetof����ṹ���б�����ַ��ƫ��
	printf("c = %d ", *(int*)((char*)&p + offsetof(struct person, c)));
}

# endif

#if 0
//sprintf�÷�
void test03()
{
	//1.��ʽ���ַ���
	char buf[1024] = {0};
	sprintf(buf,"hello %s \n","suanpu");
	printf("buf:%s \n",buf);
	printf("--------------\n");
	//2.ƴ���ַ�
	char *s1 = "hellow";
	char *s2 = "world";
	sprintf(buf,"%s %s",s1,s2);
	printf("buf:%s \n", buf);
	//3.����ת���ַ�����ʽ
	int number = 666;
	memset(buf, 0 ,1024);
	sprintf(buf,"%d",number);
	printf("buf:%s \n", buf);
	//4.��ʽ�����֣��˽���  ʮ������
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
	//��ӡ�ַ���
	for (int i = 0; i < 5; ++i)
	{
		printf("%s\n  ",p[i]);
	}
	//�ͷ��ڴ�
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
	int *p = calloc(10 , sizeof(int));//���Ͽ���10*sizeof(int)���ֽڴ�С�Ŀռ�
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
//���·���malloc��calloc�����ڶ����ڴ��С
//realloc�����Զ��������ӵ�����,���ֶ��������ָ���ĵ�ַ�����������Ŀռ�
//��ô�ͻ������е�ַ�����������ڴ�,���ָ���ĵ�ַ����û�пռ�
//realloc�����·����µ������ڴ棬�����ڴ��ֵ�������ڴ棬���ͷž��ڴ�
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