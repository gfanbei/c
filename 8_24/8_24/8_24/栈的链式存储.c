#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"LinkStack.h"


struct Person
{
	struct StackNode  node;
	char name[64];
	int age;

};

void test()
{
	//初始化
	LinkStack  stack = Init_LinkStack();
	//创建数据
	struct Person  p1 = { NULL, "aaa" , 10 };
	struct Person  p2 = { NULL, "bbb" , 20 };
	struct Person  p3 = { NULL, "ccc" , 30 };
	struct Person  p4 = { NULL, "ddd" , 40 };
	struct Person  p5 = { NULL, "eee" , 50 };
	struct Person  p6 = { NULL, "fff" , 60 };

	//数据入栈
	Push_LinkStack(stack, &p1);
	Push_LinkStack(stack, &p2);
	Push_LinkStack(stack, &p3);
	Push_LinkStack(stack, &p4);
	Push_LinkStack(stack, &p5);
	Push_LinkStack(stack, &p6);

	//打印数据，size为0时结束
	while (Size_LinkStack(stack) > 0)
	{
		struct Person * person = (struct Person *)Top_LinkStack(stack);
		printf("name: %s  age: %d\n", person->name, person->age);
		Pop_LinkStack(stack);
	}

	//打印size、
	printf("size:%d \n", Size_LinkStack(stack));
	//销毁stack
	Destory_LinkStack(stack);

	stack = NULL;

}

int main()
{
	test();
	return 0;
}