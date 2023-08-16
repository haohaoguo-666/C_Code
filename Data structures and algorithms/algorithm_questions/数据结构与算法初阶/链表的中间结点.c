#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 //˼·1��ö��
 // struct ListNode* middleNode(struct ListNode* head){
 //     int i = 1;
 //     struct ListNode* Head = head;
 //     while(head->next != NULL)
 //     {
 //         i++;
 //         head = head->next;
 //     }
 //     if(i % 2 == 0)
 //     {
 //         for(int j = 1;j <= i/2;j++)
 //         Head = Head->next;
 //     }
 //     else
 //     {
 //         for(int j = 1;j <= (i-1)/2;j++)
 //         Head = Head->next;
 //     }
 //     return Head;
 // }

//˼·2������ָ��
//struct ListNode* middleNode(struct ListNode* head) {
//    if (head == NULL)return NULL;
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//    }
//    return slow;
//}