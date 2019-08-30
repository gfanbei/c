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
		struct StackNode header;//头结点
		int size;

	};

	typedef void * LinkStack;

	//初始化
	LinkStack  Init_LinkStack();
	//入栈
	void Push_LinkStack(LinkStack stack, void * data);
	//获得栈顶元素
	void *Top_LinkStack(LinkStack stack);
	//获得大小
	int Size_LinkStack(LinkStack stack);
	//出栈
	void Pop_LinkStack(LinkStack stack);
	//销毁栈
	void Destory_LinkStack(LinkStack stack);

#ifdef  __cplusplus
  }
#endif