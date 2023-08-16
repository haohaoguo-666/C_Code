#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

SLTNode* BuySLTNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;

	return newnode;
}

SLTNode* CreateSList(int n)
{
	SLTNode* phead = NULL, * ptail = NULL;
	for (int i = 0; i < n; i++)
	{
		if (phead == NULL)
		{
			phead = BuySLTNode(i);
			ptail = phead;
		}
		else
		{
			ptail->next = BuySLTNode(i);
			ptail = ptail->next;

		}
	}
	return phead;
}

void PrintSList(SLTNode* phead)
{
	while (phead)
	{
		printf("[%d|%p]->", phead->data, phead->next);
		phead = phead->next;
	}
	printf("NULL");
}

void SLTPushBack(SLTNode** pphead, SLTDataType x)
{

	SLTNode* newnode = BuySLTNode(x);
	
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
	
}

void STLPopBack(SLTNode** pphead)
{
	assert(*pphead);
	
	if ((*pphead)->next)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SLTPopFront(SLTNode** pphead)
{
	assert(*pphead);

	SLTNode* prev = *pphead;
	*pphead = (*pphead)->next;
	free(prev);
}

SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur->data != x && cur != NULL)
	{
		cur = cur->next;
	}
	return cur;
}

void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	
	SLTNode* newnode = BuySLTNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
	/*SLTNode* next = pos->next;
	SLTNode* newnode = BuySLTNode(x);
	pos->next = newnode;
	newnode->next = next;*/
}

void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);

	if (pos->next == NULL) assert(0);
	SLTNode* next = pos->next->next;
	free(pos->next);
	pos->next = next;
	
}

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pos);

	if (pos == *pphead)SLTPushFront(pphead, x);
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SLTNode* newnode = BuySLTNode(x);
		newnode->next = prev->next;
		prev->next = newnode;
		
	}
}

void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pos);
	assert(*pphead);
	if (pos == *pphead)SLTPopFront(pphead);
	else
	{
		SLTNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SLTEraseAfter(prev);
	}

}

void SLTDestory(SLTNode** pphead)
{
	SLTNode* cur = *pphead;
	while (*pphead != NULL)
	{
		cur = *pphead;
		*pphead = (*pphead)->next;
		free(cur);
	}
}