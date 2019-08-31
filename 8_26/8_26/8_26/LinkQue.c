#include"LinkQueue.h"
#include<stdlib.h>


//��ʼ��,���ٿռ䣬��ֵ
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
//���
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

	struct LQueue *q = (struct LQueue*)queue;//ǿת
	struct QueueNode *n = (struct QueueNode* )data;
	q->rear->next = n;
	n->next = NULL;//��������Ľڵ�ΪNULL 
	
	q->rear = n;//����βָ��
	q->size++;

}
//����
void Pop_LinkQueue(LinkQueue queue)//ɾ������ͷ������һ���ڵ㿪ʼ
{
	if (NULL == queue)
	{
		return;
	}
	struct LQueue *q = (struct LQueue*)queue;

	if (q->size == 0)//û��Ԫ��ֱ�ӷ���
	{
		return;
	}

	if (q->size == 1)//��һ��Ԫ�أ�
	{
		q->header.next = NULL;
		q->rear = &(q->header);//β�ڵ��Ϊ��ʼ
		q->size--;
		return;
	}
	struct QueueNode *pFirstNode = q->header.next;//�����һ���ڵ�
	q->header.next = pFirstNode->next;

	q->size--;
}
//��ö�ͷԪ��
void *Front_LinkQueue(LinkQueue queue)
{
	if (NULL == queue)
	{
		return NULL;
	}

	struct LQueue *q = (struct LQueue*)queue;
	return q->header.next;
}

//��ö�βԪ��
void *Back_LinkQueue(LinkQueue queue)
{
	if (NULL == queue)
	{
		return NULL;
	}

	struct LQueue *q = (struct LQueue*)queue;

	return q->rear;
}
//��С
int  Size_LinkQueue(LinkQueue queue)
{
	if (NULL == queue)
	{
		return -1;
	}

	struct LQueue *q = (struct LQueue*)queue;

	return q->size;


}
//����
void Destory_LinkQueue(LinkQueue queue)
{
	if (NULL == queue)
	{
		return;
	}

	free(queue);
	queue = NULL;
}