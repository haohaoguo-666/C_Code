#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

LTNode* BuyListNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	assert(newnode);
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;
	return newnode;

}


LTNode* InitList()
{
	LTNode* phead = BuyListNode(-1);
	phead->next = phead;
	phead->prev = phead;
	
	return phead;
}

void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* newnode = BuyListNode(x);
	
	newnode->prev = phead->prev;
	phead->prev->next = newnode;

	newnode->next = phead;
	phead->prev = newnode;

	//Insert(phead,x);

}

void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);//Пе

	phead->prev = phead->prev->prev;
	free(phead->prev->next);
	phead->prev->next = phead;

	//LTErase(phead->prev);
	
}

void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyListNode(x);
	LTNode* tail = phead->next;

	newnode->next = phead->next;
	newnode->prev = phead;
	tail->prev = newnode;
	phead->next = newnode;

	//Insert(phead->next,x);
	
}

void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* tail = phead->next->next;
	LTNode* tailPrev = phead->next;
	phead->next = tail;
	tail->prev = phead;
	free(tailPrev);

	//LTErase(phead->next);
}	

void LTPrint(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("[%p | %d | %p]", cur->prev, cur->data, cur->next);
		if(cur->next != phead)printf("<->");
		cur = cur->next;
	}
	printf("\n");
}

LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	assert(phead->next != phead);

	LTNode* cur = phead->next;
	while (cur->data != x && cur != phead)cur = cur->next;
	
	if (cur == phead)return NULL;
	else return cur;
}

void* LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);

	LTNode* newnode = BuyListNode(x);
	LTNode* tail = pos->prev;
	tail->next = newnode;
	newnode->next = pos;
	newnode->prev = tail;
	pos->prev = newnode;
}

void* LTErase(LTNode* pos)
{
	assert(pos);
	LTNode* tail = pos->prev;
	tail->next = pos->next;
	tail->next->prev = tail;
	free(pos);
}

bool LTEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next != phead;
}

size_t LTSize(LTNode* phead)
{
	assert(phead);
	
	LTNode* cur = phead->next;
	size_t size = 0;
	while (cur != phead)
	{
		size++;
		cur = cur->next;
	}

	return size;
}

void LTDestory(LTNode* phead)
{
	LTNode* cur = phead->next;
	while (cur != phead)LTErase(cur);
	free(phead);
}