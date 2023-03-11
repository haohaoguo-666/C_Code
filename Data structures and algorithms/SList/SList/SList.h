#pragma once
//防止头文件被重复包含
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define _CRT_SECURE_NO_WARNINGS 1


typedef int SLTDataType;


//单链表
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
	//SLTNode* next; 错误，重命名还未生效
}SLTNode;

//创建节点
SLTNode* BuySLTNode(SLTDataType x);

//创建链表
SLTNode* CreateSList(int n);

//打印链表
void PrintSList(SLTNode* phead);

//尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x);

//尾删
void SLTPopBack(SLTNode** pphead);

//头插
void SLTPushFront(SLTNode** pphead, SLTDataType x);

//头删
void SLTPopFront(SLTNode** pphead);

//查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);

//单链表在pos位置之后插入x
void SLTInsertAfter(SLTNode* pos, SLTDataType x);

//单链表删除在pos位置之后的值
void SLTEraseAfter(SLTNode* pos);

//单链表在pos位置之前插入x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//单链表删除pos位置
void SLTErase(SLTNode** pphead, SLTNode* pos);

//删除单链表
void SLTDestory(SLTNode** pphead);
