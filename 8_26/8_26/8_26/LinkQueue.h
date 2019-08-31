#pragma once


//����ڵ����������
struct QueueNode
{
	struct QueueNode *next;

};

//������������
struct LQueue
{
	struct QueueNode header;//ͷ���
	int size;
	struct QueueNode *rear;//Ϊָ�룬ʼ��ָ���������һ���ڵ�

};

#ifdef __cplusplus
extern "C" {
#endif

	typedef void * LinkQueue;
	//��ʼ��
	LinkQueue Init_LinkQueue();
	//���
	void Push_LinkQueue(LinkQueue queue, void *data);
	//����
	void Pop_LinkQueue(LinkQueue queue);
	//��ö�ͷԪ��
	void *Front_LinkQueue(LinkQueue queue);
	//��ö�βԪ��
	void *Back_LinkQueue(LinkQueue queue);
	//��С
	int  Size_LinkQueue(LinkQueue queue);
	//����
	void Destory_LinkQueue(LinkQueue queue);




#ifdef __cplusplus
}
#endif