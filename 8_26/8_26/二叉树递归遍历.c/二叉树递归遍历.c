#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct BiNode
{
	char ch;
	struct BiNode *Lchild;//����
	struct BiNode *Rchild;//�Һ���

};


void recursion(struct BiNode *root)
{
	if (NULL == root)
	{
		return;
	}

	
	//�ݹ����������
	recursion(root->Lchild);
	
	//�ݹ����������
	recursion(root->Rchild);

	printf("%c  ", root->ch);
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


	recursion(&nodeA);

}

int main()
{
	test();
	return 0;
}