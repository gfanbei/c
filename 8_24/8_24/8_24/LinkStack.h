#pragma once

#include<stdlib.h>
 #ifdef  __cplusplus
extern "C" {
#endif

	struct StackNode
	{
		struct StackNode *next;

	};

	struct Lstack
	{
		struct StackNode header;//ͷ���
		int size;

	};

	typedef void * LinkStack;

	//��ʼ��
	LinkStack  Init_LinkStack();
	//��ջ
	void Push_LinkStack(LinkStack stack, void * data);
	//���ջ��Ԫ��
	void *Top_LinkStack(LinkStack stack);
	//��ô�С
	int Size_LinkStack(LinkStack stack);
	//��ջ
	void Pop_LinkStack(LinkStack stack);
	//����ջ
	void Destory_LinkStack(LinkStack stack);

#ifdef  __cplusplus
  }
#endif