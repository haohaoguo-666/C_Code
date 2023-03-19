#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef  int BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

//前序遍历
void PrevOrder(BTNode* root);

//中序遍历
void InOrder(BTNode* root);

//后序遍历
void PostOrder(BTNode* root);

//创建节点
BTNode* BuyBTNode(BTDataType x);

//求二叉树节点个数
int TreeSize(BTNode* root);

//求二叉树叶子节点
int TreeLeafSize(BTNode* root);

//求树的高度/深度
int TreeHeight(BTNode* root);

//求第k层的节点个数
int TreeKlevelSize(BTNode* root, int k);

//二叉树查找值为x的节点
BTNode* TreeFind(BTNode* root, BTDataType x);

//层序遍历
void LevelOrder(BTNode* root);

//判断二叉树是否为完全二叉树
bool TreeComplete(BTNode* root);

//销毁二叉树
void TreeDestory(BTNode* root);