#pragma once
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	int val;
	struct ListNode* next;
};



//创建结点
struct ListNode* BuyElements(int x);

//创建链表
struct ListNode* createSList(int a[], int n);

//移除链表元素
struct ListNode* removeElements(struct ListNode* head, int val);

//打印链表元素
void PrintSList(struct ListNode* phead);

//复制链表
struct ListNode* copyRandomList(struct ListNode* head);