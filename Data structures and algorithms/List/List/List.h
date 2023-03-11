#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

//�������
LTNode* BuyListNode(LTDataType x);

//��ʼ��
LTNode* InitList();

//β��
void LTPushBack(LTNode* phead, LTDataType x);

//βɾ
void LTPopBack(LTNode* phead);

//ͷ��
void LTPushFront(LTNode* phead, LTDataType x);

//ͷɾ
void LTPopFront(LTNode* phead);

//��ӡ����
void LTPrint(LTNode* phead);

//����
LTNode* LTFind(LTNode* phead, LTDataType x);

//��pos֮ǰ����
void* LTInsert(LTNode* pos, LTDataType x);

//ɾ��posλ��
void* LTErase(LTNode* pos);

//�п�
bool LTEmpty(LTNode* phead);

//����
size_t LTSize(LTNode* phead);

//����
void LTDestory(LTNode* phead);