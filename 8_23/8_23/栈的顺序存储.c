#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"SeqStack.h"


struct Person
{
	char name[64];
	int age;

};


void test()
{
	SeqStack stack = Init_SeqStack();

	struct Person p1 = { "aaa", 10 };
	struct Person p2 = { "aaa", 20 };
	struct Person p3 = { "aaa", 30 };
	struct Person p4 = { "aaa", 40 };
	struct Person p5 = { "aaa", 50 };
	struct Person p6 = { "aaa", 60 };


	Push_SeqStack(stack, &p1);
	Push_SeqStack(stack, &p2);
	Push_SeqStack(stack, &p3);
	Push_SeqStack(stack, &p4);
	Push_SeqStack(stack, &p5);
	Push_SeqStack(stack, &p6);

	while (Size_SeqStack(stack) > 0)
	{
		struct Person * person = (struct Person *)Top_SeqStack(stack);
		printf("name: %s  age: %d\n",person->name,person->age);
		Pop_SeqStack(stack);
	}

	printf("size:%d \n", Size_SeqStack(stack));//弹出之后没有数据了，size变为0
	Destory_SeqStack(stack);

	stack = NULL;

}

int main()
{
	test();
	return 0;
}