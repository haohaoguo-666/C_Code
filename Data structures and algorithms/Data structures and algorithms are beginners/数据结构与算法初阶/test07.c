//206. 反转链表
//给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 // //思路一
 // //三指针头插法
 //struct ListNode* reverseList(struct ListNode* head) {
 //    struct ListNode* ptr = NULL;
 //    if (head != NULL && head->next != NULL) {
 //        //指向旧的头节点
 //        struct ListNode* tail = head;
 //        //指向新的头节点
 //        struct ListNode* prev = head;
 //        while (tail->next) {
 //            //记录下一个节点的下一个节点
 //            ptr = tail->next->next;
 //            //第二个节点连第一个节点
 //            tail->next->next = prev;
 //            //指向新的头节点
 //            prev = tail->next;
 //            //旧的头节点链接下一节点的下一个节点
 //            tail->next = ptr;
 //        }
 //        return prev;
 //    }
 //    else {
 //        return head;
 //    }
 //
 //}

 //思路二
 //取节点头插
 // struct ListNode* reverseList(struct ListNode* head) {
 //     struct ListNode* next = NULL;
 //     struct ListNode* rhead = NULL;
 //     while (head) {
 //         //next指向下一个节点
 //         next = head->next;
 //         //head节点头插入
 //         head->next = rhead;
 //         //rhead指针指向新的头节点
 //         rhead = head;
 //         //head指针指向新的头节点
 //         head = next;
 //     }
 //     return rhead;
 //
 //}
