#pragma once
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1


typedef int DataType;


//单链表
typedef struct SListNode
{
	DataType data;
	struct SListNode* next;
}SLTNode;



SLTNode* BuySTLNode(DataType x);

SLTNode* CreateSList(int n);

void SLTPrint(SLTNode* pc);

//尾增
void SLTPushBack(SLTNode* phead, DataType x);

//尾删
void SLTPopBack(SLTNode* phead);

//头增
void SLTPushFront(SLTNode* phead, DataType x);

//头删
void SLTPopFront(SLTNode* phead);