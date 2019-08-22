#include<stdio.h>
#include<stdlib.h>
#include<string.h>



#if 0
//结构体 赋值
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

	//赋值 操作  ,如果结构体内部有指针指向堆空间，那么就不能使用编译器默认的赋值行为，应该手动控制赋值过程
	//teacher1 = teacher2;    //如果在结构体内部有指针，并且指针指向堆空间，、
	                         //那么如果发生赋值行为，就会产生两个问题
	                         //	1.同一块空间被释放2次    //	2.内存泄漏    

	if (teacher1.name != NULL)//先释放内存
	{
		free(teacher1.name);
		teacher1.name = NULL;
	}

	teacher1.name = malloc(strlen(teacher2.name)+ 1);//申请strlen(teacher2.name)+ 1个字节大小的内存
	strcpy(teacher1.name,teacher2.name);//将teacher2.name内容拷贝
	teacher1.age = teacher2.age;

	printf("-----------\n");
	printf("teacher1.name:%s teacher1.age; %d\n", teacher1.name, teacher1.age);
	printf("teacher2.name:%s teacher2.age; %d\n", teacher2.name, teacher2.age);
	//释放堆操作
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

//结构体嵌套一级指针
struct person
{
	char * name;
	int age;

};
struct person ** allspace()//分配内存
{
	struct person ** temp = malloc(sizeof(struct person *)* 3);//堆上开辟3指针，指向struct person *
	for (int i = 0; i < 3; ++i)//遍历3次
	{
		temp[i] = malloc(sizeof(struct person));//申请struct person（一级指针）大小的内存
		temp[i]->name = malloc(sizeof(char)* 64);//申请64字节空间
		sprintf(temp[i]->name, "name_%d", i + 1);//初始化
		temp[i]->age = 100 + i;

	}

	return temp;//返回temp
}
//打印
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
//释放堆
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