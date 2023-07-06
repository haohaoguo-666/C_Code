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

//ǰ�����
void PrevOrder(BTNode* root);

//�������
void InOrder(BTNode* root);

//�������
void PostOrder(BTNode* root);

//�����ڵ�
BTNode* BuyBTNode(BTDataType x);

//��������ڵ����
int TreeSize(BTNode* root);

//�������Ҷ�ӽڵ�
int TreeLeafSize(BTNode* root);

//�����ĸ߶�/���
int TreeHeight(BTNode* root);

//���k��Ľڵ����
int TreeKlevelSize(BTNode* root, int k);

//����������ֵΪx�Ľڵ�
BTNode* TreeFind(BTNode* root, BTDataType x);

//�������
void LevelOrder(BTNode* root);

//�ж϶������Ƿ�Ϊ��ȫ������
bool TreeComplete(BTNode* root);

//���ٶ�����
void TreeDestory(BTNode* root);