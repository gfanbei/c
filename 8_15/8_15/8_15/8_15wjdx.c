# include<stdio.h>
# include<string.h>
# include<stdlib.h>

#if 0

//�ļ���д 
void test01()
{

	FILE *f = fopen("./text.txt","r");
		if (NULL == f)
		{

			printf("���ļ�ʧ��:\n");
			return;
		}
	char ch;

# if 0
	while (!feof(f))
	{

		ch = fgetc(f);
		if (feof(f))//�˴���ע���ж�EOF  ���� ����ȡ���ַ�����EOF
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


//���������Ͷ���
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

	//��α�������

	//�ȶ���һ������ָ�����
	struct LinkNode *pCurrent = &node1;
	while (pCurrent != NULL)
	{
		printf("%d ", pCurrent->data);

		//ָ���ƶ�����һ��Ԫ�ص��׵�ַ
		pCurrent = pCurrent->next;
	}

}



int main()
{
	test02();
	//test01();
	return 0;
}


