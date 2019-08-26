#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//链表节点数据结构
struct LinkNode
{
	struct LinkNode *next;

};

//链表结构体
struct LList
{

	struct LinkNode header;//链表头
	int size;  //节点数量

};

typedef void * LinkList; 

//初始化链表
 LinkList Init_LinkList()
{
  
	struct LList * list = malloc(sizeof(struct LList));//申请一个struct LList *类型的结构体，大小sizeof(struct LList)
	if (NULL == list)
	{
		return ;
	}
	list->header.next = NULL;//让头指向空
	list->size = 0;

	return list;
}

 //插入，按位
void Insert_LinkList(LinkList list, int positiation , void * data)
{
	if (NULL == list)
	{
		return;
	}
	if (NULL == data)
	{

		return;
	}

	struct LList * mylist = (struct LList * )list;//强转为struct LList * 
	struct LinkNode * mynode = (struct LinkNode* )data;

	//判断是否超出链表个数，如果超出指向最后一个
	if (positiation <0 || positiation >mylist->size)
	{
		positiation = mylist->size;
	}

	//找位置（找到positiation位置的前一个位置）
	struct LinkNode *pcurrent = &(mylist->header);  
	for (int i = 0; i < positiation; ++i)
	{
		pcurrent = pcurrent->next;
	}

	//数据入链表
	mynode->next = pcurrent->next;
	pcurrent->next = mynode;


	mylist->size++;

}
 
//遍历
void Foreach_LinkList(LinkList list, void( *myforeach )(void *))//void( *myforeach )(void *)为函数指针
{
	if (NULL == list)
	{
		return;
	}
	if (NULL == myforeach)
	{

		return;
	}

	struct LList * mylist = (struct LList *)list;
	struct LinkNode *pcurrent = mylist->header.next;
	while (pcurrent != NULL)
	{
		struct LinkNode *pnext = pcurrent->next;
		myforeach(pcurrent);
		pcurrent = pnext;
	}
}

//删除
void RemoveByPos_LinkList(LinkList list, int positiation)
{
	if (NULL == list)
	{
		return;
	}
	struct LList * mylist = (struct LList *)list;
	if (positiation <0 || positiation >mylist->size - 1)
	{
		return;
	}

	//辅助指针
	struct LinkNode *pcurrent = &(mylist->header);
	for (int i = 0; i < positiation; ++i)
	{
		pcurrent = pcurrent->next;

	}

	//缓存待删除节点
	struct LinkNode *pDel = pcurrent->next;
	//重新建立待删除节点的前驱和后继节点关系
	pcurrent->next = pDel->next;

	mylist->size--;
}

//销毁
void Destory_LinkList(LinkList list)
{
	if (NULL == list)
	{
		return;
	}

	free(list);
	list = NULL;
}

struct Person
{
	struct LinkNode  node;
	char name[64];
	int age;

};

void myprint(void *data)
{
	struct Person *person = (struct Person *)data;
	printf("name:%s      age:%d\n",person->name,person->age);
}
void test()
{   //初始化链表
	LinkList list = Init_LinkList();
	//创建数据
	struct Person p1 = { NULL, "aaa"  ,10 };
	struct Person p2 = { NULL, "bbb" ,20 };
	struct Person p3 = { NULL, "ccc" ,30 };
	struct Person p4 = { NULL, "ddd" ,40 };
	struct Person p5 = { NULL, "eee" ,50 };
	struct Person p6 = { NULL, "fff" ,60 };

	//插入数据
	Insert_LinkList(list, 0, &p1);
	Insert_LinkList(list, 0, &p2);
	Insert_LinkList(list, 0, &p3);
	Insert_LinkList(list, 0, &p4);
	Insert_LinkList(list, 0, &p5);
	Insert_LinkList(list, 0, &p6);
    //遍历（在其内，打印）
	Foreach_LinkList(list,myprint);

	printf("---------------------\n");

	//删除
	RemoveByPos_LinkList(list, 3);


	Foreach_LinkList(list, myprint);
	//销毁
	Destory_LinkList(list);
}

int main()
{



	test();

	return 0;
}