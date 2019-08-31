#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct BiNode
{
	char ch;
	struct BiNode *Lchild;//左孩子
	struct BiNode *Rchild;//右孩子

};


//int num = 0;

void cuculateLeafNum(struct BiNode *root, int *p)//struct BiNode *root拿到树
{                                                  //计算叶子数目（递归）
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
	//求右子树高度
	int rheight = Get_Tree_Height(root->Rchild);
	//求左子树高度
	int lheight = Get_Tree_Height(root->Lchild);

	int height = lheight > rheight ? lheight + 1 : rheight + 1;

	return height;
}

struct BiNode*  Cpoy_Tree(struct BiNode *root)//拷贝二叉树
{
	if (NULL == root)
	{
		return  NULL;

	}

	
	//拷贝左子树
	struct BiNode *lchild = Cpoy_Tree(root->Lchild);
	//拷贝右子树
	struct BiNode *rchild = Cpoy_Tree(root->Rchild);

	struct BiNode *NewNode = malloc(sizeof(struct BiNode));

	NewNode->Lchild = lchild;
	NewNode->Rchild = rchild;
	NewNode->ch = root->ch;


	return  NewNode;
}


void Show_BITree(struct BiNode *root)//递归先序打印
{
	if (NULL == root)
	{

		return;
	}

	printf("%c ",root->ch);
	Show_BITree(root->Lchild);
	Show_BITree(root->Rchild);
    
}


void FreeSpace(struct BiNode *root)//释放内存（递归释放，后序）
{
	if (NULL == root)
	{
		return ;
	}

	FreeSpace(root->Lchild);//释放左子树
	FreeSpace(root->Rchild);//释放右子树

	printf("%c  被释放\n ", root->ch);
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


	//1.求二叉树叶子节点数目
	int num = 0;
	cuculateLeafNum(&nodeA, &num);
	printf("叶子节点数目:%d\n", num);

	//2.求二叉树高度
	int height = Get_Tree_Height(&nodeA);
	printf("树的高度;%d\n",height);

	//3.拷贝二叉树
	struct BiNode * root = Cpoy_Tree(&nodeA);
	Show_BITree(root);//新树

	printf("\n");
	Show_BITree(&nodeA);//旧树
	printf("\n");
	//4.释放内存
	
	FreeSpace(root);

}

int main()
{
	test();
	return 0;
}