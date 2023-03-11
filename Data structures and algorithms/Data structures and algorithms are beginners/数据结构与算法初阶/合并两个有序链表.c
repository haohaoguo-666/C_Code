#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 //˼·1 �ݹ�
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

 //˼·2 ö��
 // struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
 //     if(!list1)return list2;
 //     if(!list2)return list1;
 //     struct ListNode* head = NULL, *tail = NULL;

 //     //ȡС��β��
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
 //���ڱ�λ��ͷ�ڵ�
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    struct ListNode* guard = NULL, * tail = NULL;
    guard = (struct ListNode*)malloc(sizeof(struct ListNode));
    guard->next = NULL;
    tail = guard;

    //ȡС��β��
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