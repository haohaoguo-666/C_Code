#pragma once
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
	int val;
	struct ListNode* next;
};



//�������
struct ListNode* BuyElements(int x);

//��������
struct ListNode* createSList(int a[], int n);

//�Ƴ�����Ԫ��
struct ListNode* removeElements(struct ListNode* head, int val);

//��ӡ����Ԫ��
void PrintSList(struct ListNode* phead);

//��������
struct ListNode* copyRandomList(struct ListNode* head);