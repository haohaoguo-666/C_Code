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
//	struct ListNode* cur = NULL;
//	struct ListNode* newhead = NULL;
//	while (tail) {
//		//如果不是val
//		if (tail->val != val) {
//
//			if (prev == NULL)
//			{//插入头节点
//				prev = tail;
//				newhead = prev;
//			}
//			else
//			{//插入结点
//				prev->next = tail;
//				prev = tail;
//			}
//			tail = tail->next;//指向下一个要检测的结点
//		}
//		//如果是val
//		else
//		{//跳过该结点并指向下一个结点
//			cur = tail->next;
//			free(tail);
//			tail = cur;
//		}
//	}
//	//如果不是空链表
//	if (prev != NULL) {
//		prev->next = NULL;
//	}
//	return newhead;
//}
//
//双指针2
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* prev = NULL;
//    struct ListNode* cur = head;
//
//    while (cur != NULL && cur->val == val)
//    {
//        cur = cur->next;
//    }
//    if (cur == NULL) return NULL;
//    head = cur;
//    prev = cur;
//    cur = cur->next;
//
//    while (cur != NULL)
//    {
//        if (cur->val != val)
//        {
//
//            prev->next = cur;
//            prev = cur;
//            cur = cur->next;
//        }
//        else
//        {
//            cur = cur->next;
//        }
//    }
//    prev->next = NULL;
//    return head;
//}
// 
//思路2
//枚举法
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* cur = head;
//    while (cur != NULL && cur->val == val)
//    {
//        cur = cur->next;
//    }
//    if (!cur) return NULL;
//    head = cur;
//    while (cur != NULL)
//    {
//        if (!cur->next)break;
//        if (cur->next->val != val)cur = cur->next;
//        else
//        {
//            cur->next = cur->next->next;
//        }
//    }
//    return head;
//}
// 
// 
// 
// 
//思路3
//插入新的头结点
// struct ListNode* removeElements(struct ListNode* head, int val) {
//     struct ListNode* cur = head;
//     struct ListNode* newhead = NULL, *tail = NULL;

//     if(head == NULL) return NULL;
//     while(cur)
//     {
//         if(cur->val != val)
//         {
//             if(tail == NULL)
//             { 
//                 tail = cur;
//                 newhead = tail;
//             }
//             else
//             {
//                 tail->next = cur;
//                 tail = cur;
//             }
//             cur = cur->next;
//         }
//         else
//         {
//             struct ListNode* next = cur->next;
//             free(cur);
//             cur = next;

//         }


//     }
//     if(tail)
//     tail->next = NULL;

//     return newhead;
// } 
//带哨兵位的头节点
// struct ListNode* removeElements(struct ListNode* head, int val) {
//     struct ListNode* cur = head;
//     struct ListNode *guard, *tail;
//     guard = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//     guard->next = NULL;

//     if(head == NULL) return NULL;
//     while(cur)
//     {
//         if(cur->val != val)
//         {
//             tail->next = cur;
//             tail = cur;
//             cur = cur->next;
//         }
//         else
//         {
//             struct ListNode* next = cur->next;
//             free(cur);
//             cur = next;
//         }


//     }
//     tail->next = NULL;
//     struct ListNode* newhead = guard->next;
//     free(guard);


//     return newhead;
// }
