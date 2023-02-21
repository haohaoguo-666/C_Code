#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

SLTNode* BuySLTNode(DataType x) 
{
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newNode == NULL) {
		perror("malloc fail");
		return;
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

SLTNode* CreateSList(int n)
{
	SLTNode* phead = NULL, * ptail = NULL;
	for (int i = 0; i < n; i++) {
		SLTNode* newNode = BuySLTNode(i);
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
	printf("NULL\n");
}

void SLTPushBack(SLTNode** pphead, DataType x) {
	SLTNode* newnode = BuySLTNode(x);
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else {
		SLTNode* tail = *pphead;
		while (tail->next) {
			tail = tail->next;
		}
		tail->next = newnode;
	}
	
}

void SLTPopBack(SLTNode** pphead) {
	//�����ǿղ���ɾ��
	assert(*pphead);
	//�汾һ
	if ((*pphead)->next == NULL) {
		free(*pphead);
		*pphead = NULL;
	}
	else {
		SLTNode* tail = *pphead;
		while (tail->next->next) {
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL; 

	}
	//�汾��
	/*SLTNode* prev = NULL;
	SLTNode* tail = phead;
	while (tail) {
		prev = tail;
		tail = tail->next;
	}
	free(tail);
	prev->next = NULL;*/
}

void SLTPushFront(SLTNode** pphead, DataType x) {
	//������Ҳ����ֱ����
		SLTNode* newnode = BuySLTNode(x);
		newnode->next = *pphead;
		*pphead = newnode;
	
}

void SLTPopFront(SLTNode** pphead) {
	assert(*pphead);

	//�汾һ
	SLTNode* prev = *pphead;
	*pphead = (*pphead)->next;
	free(prev);
	prev == NULL;

	//�汾��
	/*SLTNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
	next = NULL;*/
}

SLTNode* SLTFind(SLTNode* phead, DataType x) {
	SLTNode* cur = phead;
	//��������phead,��ֹ��ʧָ��ͷ�ڵ��ָ��
	
	while (cur) {
		if (cur->data == x) {
			return cur;
		}
		else {
			cur = cur->next;
		}
	}
	return NULL;
}


void SLTInsertAfter(SLTNode* pos, DataType x) {
	assert(pos);
	SLTNode* newnode = BuySLTNode(x);
	SLTNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}

void SLTInsert(SLTNode** pphead, SLTNode* pos, DataType x) {
	assert(pos);
	if (*pphead == pos) {
		SLTPushFront(pphead, x);
	}
	else {
		//�汾һ
		/*SLTNode* prev = *pphead;
		while (prev->next) {
			if (prev->next == pos) {
				SLTInsertAfter(prev, x);
				return;
			}
			prev = prev->next;
		}*/
		//�汾��
		SLTNode* prev = *pphead;
		while (prev->next != pos) {
			prev = prev->next;
		}
		SLTNode* newnode = BuySLTNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}

}


void SLTEraseAfter(SLTNode* pos) {
	if (pos->next == NULL) {
		return;
	}
	else {
		//�汾һ
		/*SLTNode* next = pos->next->next;
		free(pos->next);
		pos->next = next;*/
		//�汾��
		SLTNode* nextNode = pos->next;
		pos->next = pos->next->next;
		free(nextNode);
	}
}

void SLTErase(SLTNode** pphead, SLTNode* pos) {
	if (*pphead == pos) {
		SLTPopFront(pphead);
	}
	else {
		SLTNode* prev = *pphead; 
		while (prev->next) {
			if (prev->next == pos) {
				prev->next = pos->next;
				free(pos);
			}
			else { 
				prev = prev->next;
			}
		}
	}
}

void SLTDestory(SLTNode** pphead) {
	SLTNode* cur = *pphead;
	while (cur) {
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*pphead = NULL;
}