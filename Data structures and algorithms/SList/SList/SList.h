#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
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

//尾插
void SLTPushBack(SLTNode** pphead, DataType x);

//尾删
void SLTPopBack(SLTNode** pphead);

//头插
void SLTPushFront(SLTNode** pphead, DataType x);

//头删
void SLTPopFront(SLTNode** pphead);

//查找
SLTNode*SLTFind(SLTNode* phead, DataType x);

//单链表在pos位置之后插入x
void SLTInsertAfter(SLTNode* pos, DataType x); 

// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
//删除后一个
void SLTEraseAfter(SLTNode* pos);

//在pos之前插入x
void SLTInsert(SLTNode** pphead, SLTNode* pos, DataType x);


//删除pos位置
void SLTErase(SLTNode** pphead, SLTNode* pos);

//释放单链表
void SLTDestory(SLTNode** pphead);

