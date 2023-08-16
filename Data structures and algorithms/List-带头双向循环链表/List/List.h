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

//创建结点
LTNode* BuyListNode(LTDataType x);

//初始化
LTNode* InitList();

//尾插
void LTPushBack(LTNode* phead, LTDataType x);

//尾删
void LTPopBack(LTNode* phead);

//头增
void LTPushFront(LTNode* phead, LTDataType x);

//头删
void LTPopFront(LTNode* phead);

//打印链表
void LTPrint(LTNode* phead);

//查找
LTNode* LTFind(LTNode* phead, LTDataType x);

//在pos之前插入
void* LTInsert(LTNode* pos, LTDataType x);

//删除pos位置
void* LTErase(LTNode* pos);

//判空
bool LTEmpty(LTNode* phead);

//长度
size_t LTSize(LTNode* phead);

//销毁
void LTDestory(LTNode* phead);