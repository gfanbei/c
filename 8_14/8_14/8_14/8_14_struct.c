#include<stdio.h>
#include<stdlib.h>
#include<string.h>



#if 0
//�ṹ�� ��ֵ
struct person
{
	char name[64];
	int age ;


};
void test01()
{
	struct person p1 = {"zhangsan", 20};
	struct person p2 = { "lisi", 21 };

	p1 = p2;

	printf("p1.name:%s     p1.age:%d\n ",p1.name,p1.age);
	printf("p2.name:%s     p2.age:%d\n ", p2.name, p2.age);

}

#endif

#if 0

struct teacher
{
	char *name;
	int age;
};
void test02()
{
	struct teacher teacher1;
	teacher1.name = malloc(sizeof(char) * 64);
	memset(teacher1.name, 0, 64);
	strcpy(teacher1.name, "lili");
	teacher1.age = 20;

	struct teacher teacher2;
	teacher2.name = malloc(sizeof(char) * 128);
	memset(teacher2.name, 0, 128);
	strcpy(teacher2.name, "ailunhhjyymiy");
	teacher2.age = 21;

	printf("teacher1.name:%s teacher1.age; %d\n", teacher1.name, teacher1.age);
	printf("teacher2.name:%s teacher2.age; %d\n", teacher2.name, teacher2.age);

	//printf("teacher1 size %d " ,sizeof(teacher1));
	//printf("teacher2 size %d ", sizeof(teacher2));

	//��ֵ ����  ,����ṹ���ڲ���ָ��ָ��ѿռ䣬��ô�Ͳ���ʹ�ñ�����Ĭ�ϵĸ�ֵ��Ϊ��Ӧ���ֶ����Ƹ�ֵ����
	//teacher1 = teacher2;    //����ڽṹ���ڲ���ָ�룬����ָ��ָ��ѿռ䣬��
	                         //��ô���������ֵ��Ϊ���ͻ������������
	                         //	1.ͬһ��ռ䱻�ͷ�2��    //	2.�ڴ�й©    

	if (teacher1.name != NULL)//���ͷ��ڴ�
	{
		free(teacher1.name);
		teacher1.name = NULL;
	}

	teacher1.name = malloc(strlen(teacher2.name)+ 1);//����strlen(teacher2.name)+ 1���ֽڴ�С���ڴ�
	strcpy(teacher1.name,teacher2.name);//��teacher2.name���ݿ���
	teacher1.age = teacher2.age;

	printf("-----------\n");
	printf("teacher1.name:%s teacher1.age; %d\n", teacher1.name, teacher1.age);
	printf("teacher2.name:%s teacher2.age; %d\n", teacher2.name, teacher2.age);
	//�ͷŶѲ���
	if (teacher1.name != NULL)
	{
		free(teacher1.name);
		teacher1.name = NULL;
	
	}

	if (teacher2.name != NULL)
	{
		free(teacher1.name);
		teacher2.name = NULL;

	}
}
#endif

//�ṹ��Ƕ��һ��ָ��
struct person
{
	char * name;
	int age;

};
struct person ** allspace()//�����ڴ�
{
	struct person ** temp = malloc(sizeof(struct person *)* 3);//���Ͽ���3ָ�룬ָ��struct person *
	for (int i = 0; i < 3; ++i)//����3��
	{
		temp[i] = malloc(sizeof(struct person));//����struct person��һ��ָ�룩��С���ڴ�
		temp[i]->name = malloc(sizeof(char)* 64);//����64�ֽڿռ�
		sprintf(temp[i]->name, "name_%d", i + 1);//��ʼ��
		temp[i]->age = 100 + i;

	}

	return temp;//����temp
}
//��ӡ
void printperson(struct person **person)
{
	if (NULL == person)
	{
		return;
	}

	for (int i = 0; i < 3; ++i)
	{
		printf("name: %s   age: %d \n",person[i]->name, person[i]->age);
	}
} 
//�ͷŶ�
void freespce(struct person **person)
{
	for (int i = 0; i < 3; ++i)
	{
		if (NULL == person)
		{
			return;
		}

		if (person[i] == NULL)
		{
			continue;
		}

		if (person[i]->name != NULL)
		{
			free(person[i]->name);
			person[i]->name = NULL;
		}

		free(person[i]);
		person[i] = NULL;
	}

	free(person);
	person = NULL;
}

void test03()
{

	struct person **person = NULL;
	person = allspace();
	printperson(person);
	freespce(person);
}

int main()
{

	test03();
	//test02();
	//test01();
	return 0;
}