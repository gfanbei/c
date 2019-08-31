#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct BiNode
{
	char ch;
	struct BiNode *Lchild;//����
	struct BiNode *Rchild;//�Һ���

};


//int num = 0;

void cuculateLeafNum(struct BiNode *root, int *p)//struct BiNode *root�õ���
{                                                  //����Ҷ����Ŀ���ݹ飩
	if (NULL == root)
	{
		return;
	}

	if (root->Lchild == NULL && root->Rchild == NULL)
	{
		(*p)++;
	}


	cuculateLeafNum(root->Lchild, p);
	cuculateLeafNum(root->Rchild, p);
}


int Get_Tree_Height(struct BiNode *root)
{
	if (NULL == root)
	{
		return 0;
	}
	//���������߶�
	int rheight = Get_Tree_Height(root->Rchild);
	//���������߶�
	int lheight = Get_Tree_Height(root->Lchild);

	int height = lheight > rheight ? lheight + 1 : rheight + 1;

	return height;
}

struct BiNode*  Cpoy_Tree(struct BiNode *root)//����������
{
	if (NULL == root)
	{
		return  NULL;

	}

	
	//����������
	struct BiNode *lchild = Cpoy_Tree(root->Lchild);
	//����������
	struct BiNode *rchild = Cpoy_Tree(root->Rchild);

	struct BiNode *NewNode = malloc(sizeof(struct BiNode));

	NewNode->Lchild = lchild;
	NewNode->Rchild = rchild;
	NewNode->ch = root->ch;


	return  NewNode;
}


void Show_BITree(struct BiNode *root)//�ݹ������ӡ
{
	if (NULL == root)
	{

		return;
	}

	printf("%c ",root->ch);
	Show_BITree(root->Lchild);
	Show_BITree(root->Rchild);
    
}


void FreeSpace(struct BiNode *root)//�ͷ��ڴ棨�ݹ��ͷţ�����
{
	if (NULL == root)
	{
		return ;
	}

	FreeSpace(root->Lchild);//�ͷ�������
	FreeSpace(root->Rchild);//�ͷ�������

	printf("%c  ���ͷ�\n ", root->ch);
	free(root);

}

void test()
{
	struct BiNode nodeA = { 'A', NULL, NULL };
	struct BiNode nodeB = { 'B', NULL, NULL };
	struct BiNode nodeC = { 'C', NULL, NULL };
	struct BiNode nodeD = { 'D', NULL, NULL };
	struct BiNode nodeE = { 'E', NULL, NULL };
	struct BiNode nodeF = { 'F', NULL, NULL };
	struct BiNode nodeG = { 'G', NULL, NULL };
	struct BiNode nodeH = { 'H', NULL, NULL };


	nodeA.Lchild = &nodeB;
	nodeA.Rchild = &nodeF;

	nodeB.Rchild = &nodeC;

	nodeC.Lchild = &nodeD;
	nodeC.Rchild = &nodeE;


	nodeF.Rchild = &nodeG;

	nodeG.Lchild = &nodeH;


	//1.�������Ҷ�ӽڵ���Ŀ
	int num = 0;
	cuculateLeafNum(&nodeA, &num);
	printf("Ҷ�ӽڵ���Ŀ:%d\n", num);

	//2.��������߶�
	int height = Get_Tree_Height(&nodeA);
	printf("���ĸ߶�;%d\n",height);

	//3.����������
	struct BiNode * root = Cpoy_Tree(&nodeA);
	Show_BITree(root);//����

	printf("\n");
	Show_BITree(&nodeA);//����
	printf("\n");
	//4.�ͷ��ڴ�
	
	FreeSpace(root);

}

int main()
{
	test();
	return 0;
}