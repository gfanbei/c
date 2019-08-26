#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//����ڵ����ݽṹ
struct LinkNode
{
	struct LinkNode *next;

};

//����ṹ��
struct LList
{

	struct LinkNode header;//����ͷ
	int size;  //�ڵ�����

};

typedef void * LinkList; 

//��ʼ������
 LinkList Init_LinkList()
{
  
	struct LList * list = malloc(sizeof(struct LList));//����һ��struct LList *���͵Ľṹ�壬��Сsizeof(struct LList)
	if (NULL == list)
	{
		return ;
	}
	list->header.next = NULL;//��ͷָ���
	list->size = 0;

	return list;
}

 //���룬��λ
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

	struct LList * mylist = (struct LList * )list;//ǿתΪstruct LList * 
	struct LinkNode * mynode = (struct LinkNode* )data;

	//�ж��Ƿ񳬳�����������������ָ�����һ��
	if (positiation <0 || positiation >mylist->size)
	{
		positiation = mylist->size;
	}

	//��λ�ã��ҵ�positiationλ�õ�ǰһ��λ�ã�
	struct LinkNode *pcurrent = &(mylist->header);  
	for (int i = 0; i < positiation; ++i)
	{
		pcurrent = pcurrent->next;
	}

	//����������
	mynode->next = pcurrent->next;
	pcurrent->next = mynode;


	mylist->size++;

}
 
//����
void Foreach_LinkList(LinkList list, void( *myforeach )(void *))//void( *myforeach )(void *)Ϊ����ָ��
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

//ɾ��
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

	//����ָ��
	struct LinkNode *pcurrent = &(mylist->header);
	for (int i = 0; i < positiation; ++i)
	{
		pcurrent = pcurrent->next;

	}

	//�����ɾ���ڵ�
	struct LinkNode *pDel = pcurrent->next;
	//���½�����ɾ���ڵ��ǰ���ͺ�̽ڵ��ϵ
	pcurrent->next = pDel->next;

	mylist->size--;
}

//����
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
{   //��ʼ������
	LinkList list = Init_LinkList();
	//��������
	struct Person p1 = { NULL, "aaa"  ,10 };
	struct Person p2 = { NULL, "bbb" ,20 };
	struct Person p3 = { NULL, "ccc" ,30 };
	struct Person p4 = { NULL, "ddd" ,40 };
	struct Person p5 = { NULL, "eee" ,50 };
	struct Person p6 = { NULL, "fff" ,60 };

	//��������
	Insert_LinkList(list, 0, &p1);
	Insert_LinkList(list, 0, &p2);
	Insert_LinkList(list, 0, &p3);
	Insert_LinkList(list, 0, &p4);
	Insert_LinkList(list, 0, &p5);
	Insert_LinkList(list, 0, &p6);
    //�����������ڣ���ӡ��
	Foreach_LinkList(list,myprint);

	printf("---------------------\n");

	//ɾ��
	RemoveByPos_LinkList(list, 3);


	Foreach_LinkList(list, myprint);
	//����
	Destory_LinkList(list);
}

int main()
{



	test();

	return 0;
}