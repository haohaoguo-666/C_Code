#pragma once
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1


typedef int DataType;


//������
typedef struct SListNode
{
	DataType data;
	struct SListNode* next;
}SLTNode;



SLTNode* BuySTLNode(DataType x);

SLTNode* CreateSList(int n);

void SLTPrint(SLTNode* pc);

//β��
void SLTPushBack(SLTNode* phead, DataType x);

//βɾ
void SLTPopBack(SLTNode* phead);

//ͷ��
void SLTPushFront(SLTNode* phead, DataType x);

//ͷɾ
void SLTPopFront(SLTNode* phead);