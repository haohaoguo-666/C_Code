#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

SLTNode* BuySTLNode(DataType x) 
{
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newNode == NULL) {
		perror("malloc fail");
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

SLTNode* CreateSList(int n)
{
	SLTNode* phead = NULL, * ptail = NULL;
	for (int i = 0; i < n; i++) {
		SLTNode* newNode = BuySTLNode(i);
		if (phead == NULL) {
			ptail = phead = newNode;
		}
		else {
			ptail->next = newNode;
			ptail = newNode;
		}
	}
	return phead;

}

void SLTPrint(SLTNode* phead) {
	SLTNode* cur = phead;
	while (cur != NULL) {
		printf("[%d|%p]->", cur->data,cur->next); 
		cur = cur->next;
	}
	printf("NULL");
}

void SLTPushBack(SLTNode* phead, DataType x) {
	SLTNode* newNode = BuySLTNode(x);
	SLTNode* tail = phead; 
	while (tail->next) {
		tail = tail->next;
	}
	tail->next = newNode;
}