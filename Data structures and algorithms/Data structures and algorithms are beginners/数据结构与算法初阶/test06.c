//203. 移除链表元素
//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 //思路一
 //双指针
//struct ListNode* removeElements(struct ListNode* head, int val) {
//	struct ListNode* tail = head;
//	struct ListNode* prev = NULL;
//	struct ListNose* newhead = NULL;
//	while (tail) {
//		//如果不是val
//		if (tail->val != val) {
//			if (prev == NULL) {
//				prev = tail;
//				newhead = prev;
//			}
//			else {
//				prev->next = tail;
//				prev = tail;
//			}
//			tail = tail->next;
//		}
//		//如果是val
//		else {
//			tail = tail->next;
//		}
//	}
//	//如果不是空链表
//	if (prev != NULL) {
//		prev->next = NULL;
//	}
//	return newhead;
//}

