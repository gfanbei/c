#include"LinkStack.h"


//初始化
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
//入栈
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
//获得栈顶元素
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
//获得大小
int Size_LinkStack(LinkStack stack)
{
	if (NULL == stack)
	{
		return  -1;
	}


	struct Lstack *ls = (struct Lstack *)stack;
	return ls->size;
}

//出栈
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

	//缓存第一个节点
	struct StackNode *pFirst = ls->header.next;
	ls->header.next = pFirst->next;

	ls->size--;
}
//销毁栈 
void Destory_LinkStack(LinkStack stack)
{
	if (NULL == stack)
	{
		return ;
	}
	free(stack);
	

}