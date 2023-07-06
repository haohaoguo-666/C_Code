#define _CRT_SECURE_NO_WARNINGS 1
#include "Binary tree.h"
#include "Queue.h"

void PrevOrder(BTNode* root)
{
	if (!root)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	
	if (!root)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (!root)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

BTNode* BuyBTNode(BTDataType x)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	assert(newnode);
	newnode->data = x;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

int TreeSize(BTNode* root)
{
	if (!root)
	{
		return 0;
	}
	return TreeSize(root->left) + TreeSize(root->right) + 1;
}

int TreeLeafSize(BTNode* root)
{
	if (!root) return 0;
	if (root->left || root->right)
	{
		return TreeLeafSize(root->left) + TreeLeafSize(root->right);
	}
	else
	{
		return 1;
	}
} 

int TreeHeight(BTNode* root)
{
	if (!root) return 0;
	
	int leftHeight = TreeHeight(root->left);
	int rightHeight = TreeHeight(root->right);

	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}


int TreeKlevelSize(BTNode* root, int k)
{
	if (!root) return 0;

	if (k == 1) return 1;

	if (k > 1) return TreeKlevelSize(root->left, k-1) 
		+ TreeKlevelSize(root->right, k-1);
}

BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (!root) return NULL;

	if (root->data == x) return root;
	
	BTNode* leftnode = TreeFind(root->left, x);
	if (leftnode) return leftnode;

	BTNode* rightnode = TreeFind(root->right, x);
	if (rightnode) return rightnode;	
	
	return NULL;
}

void LevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root) QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		printf("%d ", front->data);
		//队列出上一层，带下一层
		QueuePop(&q);

		if (front->left)
		{
			QueuePush(&q, front->left);
		}

		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
	QueueDestory(&q);
}

bool TreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		if (front == NULL)//遇到空就可以开始判断
		{
			break;
		}
		else
		{
			QueuePush(&q, front->left);
			QueuePush(&q, front->right);
		}

	}

	while (!QueueEmpty(&q))
	{//出现空后，如果后面全是空的话就是完全二叉树
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front != NULL)
		{
			QueueDestory(&q);
			return false;
		}
	}
	QueueDestory(&q);
	return true;
}

void TreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	TreeDestory(root->left);
	TreeDestory(root->right);
	free(root);
}