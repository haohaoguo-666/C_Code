#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 //思路1 递归
 // struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
 //     if (list1 == NULL) {
 //             return list2;
 //         } else if (list2 == NULL) {
 //             return list1;
 //         } else if (list1->val < list2->val) {
 //             list1->next = mergeTwoLists(list1->next, list2);
 //             return list1;
 //         } else {
 //             list2->next = mergeTwoLists(list1, list2->next);
 //             return list2;
 //         }


 // }

 //思路2 枚举
 // struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
 //     if(!list1)return list2;
 //     if(!list2)return list1;
 //     struct ListNode* head = NULL, *tail = NULL;

 //     //取小的尾插
 //     while(list1&&list2)
 //     {
 //         if(list1->val < list2->val)
 //         {
 //             if(tail == NULL)
 //             {
 //                 head = tail = list1;
 //                 list1 = list1->next;
 //             }
 //             else
 //             {   
 //                 tail->next = list1;
 //                 tail = list1;
 //                 list1 = list1->next;
 //             }
 //         }
 //         else
 //         {
 //             if(tail == NULL)
 //             {
 //                 head = tail = list2;
 //                 list2 = list2->next;
 //             }
 //             else
 //             {
 //                 tail->next = list2;
 //                 tail = list2;
 //                 list2 = list2->next;
 //             }
 //         }
 //     }
 //     if(list1)tail->next = list1;
 //     if(list2)tail->next = list2;

 //     return head;
 // }
 //有哨兵位的头节点
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    struct ListNode* guard = NULL, * tail = NULL;
    guard = (struct ListNode*)malloc(sizeof(struct ListNode));
    guard->next = NULL;
    tail = guard;

    //取小的尾插
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1;
            tail = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            tail = list2;
            list2 = list2->next;
        }
    }
    if (list1)tail->next = list1;
    if (list2)tail->next = list2;

    struct ListNode* newnode = guard->next;
    free(guard);
    return newnode;


}