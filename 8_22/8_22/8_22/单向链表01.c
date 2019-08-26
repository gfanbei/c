#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct LinkNode  //大小4字节
{
	struct LinkNode *next;

};

struct Person
{

	struct LinkNode node; //4字节  （也可用int但是要注意 链表是单向的还是双向的）
	char name[64];
	int age;

};
void test()
{
	struct Person p1 = { NULL,"aaa",10 };
	struct Person p2 = { NULL,"bbb",20 };
	struct Person p3 = { NULL,"ccc",30 };
	struct Person p4 = { NULL,"ddd",40 };
	struct Person p5 = { NULL,"eee",50 };

	struct LinkNode *PP1 = ( struct LinkNode * )&p1;//PP1存放p1的前4个字节，不访问p1数据域
	struct LinkNode *PP2 = ( struct LinkNode * )&p2;
	struct LinkNode *PP3 = ( struct LinkNode * )&p3;
	struct LinkNode *PP4 = ( struct LinkNode * )&p4;
	struct LinkNode *PP5 = ( struct LinkNode * )&p5;

	PP1->next = PP2;//PP1的next指向PP2即（p2de前4个字节）
	PP2->next = PP3;
	PP3->next = PP4;
	PP4->next = PP5;
	PP5->next = NULL;

	struct LinkNode *pcurrent = PP1;
	while (pcurrent != NULL)
	{
		struct Person *person = (struct Person *)pcurrent;//(强转为struct person * 可全部访问p1内容)
		printf("name;%s  age:%d\n", person->name, person->age);
		pcurrent = pcurrent->next;//指向下一链表前4字节
	}
}






int main()
{

	test();
	return 0;

}