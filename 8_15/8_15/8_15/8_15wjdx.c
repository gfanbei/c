# include<stdio.h>
# include<string.h>
# include<stdlib.h>

#if 0

//文件读写 
void test01()
{

	FILE *f = fopen("./text.txt","r");
		if (NULL == f)
		{

			printf("打开文件失败:\n");
			return;
		}
	char ch;

# if 0
	while (!feof(f))
	{

		ch = fgetc(f);
		if (feof(f))//此处需注意判断EOF  否则 所读取的字符后有EOF
		{
			break;
		}
		printf("%c",ch);

	}
#endif
	while (ch = fgetc(f) != EOF)
	{
		printf("%c", ch);
	
	}
	fclose(f);
	f = NULL;


}

#endif


//链表结点类型定义
struct LinkNode
{
	int data;
	struct LinkNode *next;
};


void test02()
{

	struct LinkNode node1 = { 10, NULL };
	struct LinkNode node2 = { 20, NULL };
	struct LinkNode node3 = { 30, NULL };
	struct LinkNode node4 = { 40, NULL };
	struct LinkNode node5 = { 50, NULL };
	struct LinkNode node6 = { 60, NULL };

	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = &node6;

	//如何遍历链表？

	//先定义一个辅助指针变量
	struct LinkNode *pCurrent = &node1;
	while (pCurrent != NULL)
	{
		printf("%d ", pCurrent->data);

		//指针移动到下一个元素的首地址
		pCurrent = pCurrent->next;
	}

}



int main()
{
	test02();
	//test01();
	return 0;
}


