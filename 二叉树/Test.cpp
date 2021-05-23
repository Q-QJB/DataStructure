#include <stdio.h>
#include <stdlib.h>

typedef char BTDataType;
typedef struct BinaryTreeNode//树节点
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;

void PrevOrder(BTNode* root)//前序遍历
{
	if(root==NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ",root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)//中序遍历
{
	if(root==NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ",root->data);
	InOrder(root->right);
}

void PostOrder(BTNode* root)//后序遍历
{
	if(root==NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ",root->data);
}

void TreeSize(BTNode* root,int* psize)//计算节点个数法1
{
	if(root == NULL)
	{
		return;
	}
	else
	{
		++(*psize);
	}
	TreeSize(root->left,psize);
	TreeSize(root->right,psize);
}

int TreeSize1(BTNode* root)//计算节点个数法2
{
	return root==NULL ? 0: TreeSize1(root->left)+TreeSize1(root->right)+1;
}

int TreeLeafSize(BTNode* root)//计算叶子节点个数
{
	if(root == NULL)
		return 0;

	if(root->left == NULL && root->right == NULL)
		return 1;
	return TreeLeafSize(root->left)+TreeLeafSize(root->right);
}

int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;

	BTNode*	B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;

	A->left = B;
	A->right = C;
	B->left = D;
	B->right = E;

	PrevOrder(A);
	printf("\n");

	InOrder(A);
	printf("\n");

	PostOrder(A);
	printf("\n");

	//节点个数1
	int Asize = 0;
	TreeSize(A,&Asize);
	printf("TreeSize:%d\n",Asize);

	int Bsize = 0;
	TreeSize(B,&Bsize);
	printf("TreeSize:%d\n",Bsize);
	
	//节点个数2
	printf("TreeSize1:%d\n",TreeSize1(A));
	
	printf("TreeSize1:%d\n",TreeSize1(B));

	return 0;
}