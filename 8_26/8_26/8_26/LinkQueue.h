#pragma once


//链表节点的数据类型
struct QueueNode
{
	struct QueueNode *next;

};

//链表数据类型
struct LQueue
{
	struct QueueNode header;//头结点
	int size;
	struct QueueNode *rear;//为指针，始终指向链表最后一个节点

};

#ifdef __cplusplus
extern "C" {
#endif

	typedef void * LinkQueue;
	//初始化
	LinkQueue Init_LinkQueue();
	//入队
	void Push_LinkQueue(LinkQueue queue, void *data);
	//出队
	void Pop_LinkQueue(LinkQueue queue);
	//获得队头元素
	void *Front_LinkQueue(LinkQueue queue);
	//获得对尾元素
	void *Back_LinkQueue(LinkQueue queue);
	//大小
	int  Size_LinkQueue(LinkQueue queue);
	//销毁
	void Destory_LinkQueue(LinkQueue queue);




#ifdef __cplusplus
}
#endif