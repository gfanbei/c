#include"LinkStack.h"


//��ʼ��
LinkStack  Init_LinkStack()
{
	struct Lstack *stack = malloc(sizeof(struct Lstack));
	if (NULL == stack)
	{
		return NULL;
	}
	stack->header.next = NULL;
	stack->size = 0;

	return stack;
}
//��ջ
void Push_LinkStack(LinkStack stack, void * data)
{
	if (NULL == stack)
	{
		return NULL;
	}
	if (NULL == data)
	{
		return NULL;
	}

	struct Lstack *ls = (struct Lstack *)stack;
	struct StackNode *node = (struct StackNode*)data;

	node->next = ls->header.next;
	ls->header.next = node;
	++(ls->size);
}
//���ջ��Ԫ��
void *Top_LinkStack(LinkStack stack)
{
	if (NULL == stack)
	{
		return NULL;
	}

	struct Lstack *ls = (struct Lstack *)stack;
	if (ls->size == 0)
	{
		return  NULL;
	}

	return ls->header.next;
}
//��ô�С
int Size_LinkStack(LinkStack stack)
{
	if (NULL == stack)
	{
		return  -1;
	}


	struct Lstack *ls = (struct Lstack *)stack;
	return ls->size;
}

//��ջ
void Pop_LinkStack(LinkStack stack)
{
	if (NULL == stack)
	{
		return   ;
	}
	struct Lstack *ls = (struct Lstack *)stack;

	if (ls->size == 0)
	{
		return  ;
	}

	//�����һ���ڵ�
	struct StackNode *pFirst = ls->header.next;
	ls->header.next = pFirst->next;

	ls->size--;
}
//����ջ 
void Destory_LinkStack(LinkStack stack)
{
	if (NULL == stack)
	{
		return ;
	}
	free(stack);
	

}