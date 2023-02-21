#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef int DataType;

typedef struct ListNode {
      DataType val;
	  struct ListNode*next;
  }SLTNode;

SLTNode* BuySLTNode(DataType x)
{
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newNode == NULL) {
		perror("malloc fail");
		return;
	}
	newNode->val = x;
	newNode->next = NULL;
	return newNode;
}

SLTNode* CreateSList(DataType arr[], int n)
{
	SLTNode* phead = NULL;
	SLTNode* ptail = NULL;
	for (int i = 0; i < n; i++) {
		SLTNode* newNode = BuySLTNode(arr[i]);
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

struct ListNode* removeElements(struct ListNode* head, int val) {
	struct ListNode* tail = head;
	struct ListNode* prev = NULL;
	struct ListNode* cur = NULL;
	struct ListNode* newhead = NULL;
	while (tail) {
		//如果不是val
		if (tail->val != val) {
			if (prev == NULL) {
				prev = tail;
				newhead = prev;
			}
			else {
				prev->next = tail;
				prev = tail;
			}
			tail = tail->next;
		}
		//如果是val
		else {
			cur = tail->next;
			free(tail);
			tail = cur;
		}
	}
	//如果不是空链表
	if (prev != NULL) {
		prev->next = NULL;
	}
	return newhead;
}

int main() {
	DataType arr[] = { 1,2,3,4,5,6,6,4,3 };
	SLTNode* phead = CreateSList(arr, sizeof(arr) / sizeof(arr[0]));
	phead = removeElements(phead, 5);
}