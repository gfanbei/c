#include"LinkQueue.h"
#include<stdlib.h>


//初始化,开辟空间，赋值
LinkQueue Init_LinkQueue()
{
	struct LQueue *queue = malloc(sizeof(struct LQueue));
	if (NULL == queue)
	{
		return NULL;
	}
	queue->header.next = NULL;
	queue->size = 0; 
	queue->rear = &(queue->header);


	return queue;
}
//入队
void Push_LinkQueue(LinkQueue queue, void *data)
{
	if (NULL == queue)
	{
		return;
	}

	if (NULL == data)
	{
		return;
	}

	struct LQueue *q = (struct LQueue*)queue;//强转
	struct QueueNode *n = (struct QueueNode* )data;
	q->rear->next = n;
	n->next = NULL;//链表的最后的节点为NULL 
	
	q->rear = n;//更新尾指针
	q->size++;

}
//出队
void Pop_LinkQueue(LinkQueue queue)//删除，从头结点的下一个节点开始
{
	if (NULL == queue)
	{
		return;
	}
	struct LQueue *q = (struct LQueue*)queue;

	if (q->size == 0)//没有元素直接返回
	{
		return;
	}

	if (q->size == 1)//有一个元素，
	{
		q->header.next = NULL;
		q->rear = &(q->header);//尾节点变为初始
		q->size--;
		return;
	}
	struct QueueNode *pFirstNode = q->header.next;//缓存第一个节点
	q->header.next = pFirstNode->next;

	q->size--;
}
//获得队头元素
void *Front_LinkQueue(LinkQueue queue)
{
	if (NULL == queue)
	{
		return NULL;
	}

	struct LQueue *q = (struct LQueue*)queue;
	return q->header.next;
}

//获得对尾元素
void *Back_LinkQueue(LinkQueue queue)
{
	if (NULL == queue)
	{
		return NULL;
	}

	struct LQueue *q = (struct LQueue*)queue;

	return q->rear;
}
//大小
int  Size_LinkQueue(LinkQueue queue)
{
	if (NULL == queue)
	{
		return -1;
	}

	struct LQueue *q = (struct LQueue*)queue;

	return q->size;


}
//销毁
void Destory_LinkQueue(LinkQueue queue)
{
	if (NULL == queue)
	{
		return;
	}

	free(queue);
	queue = NULL;
}