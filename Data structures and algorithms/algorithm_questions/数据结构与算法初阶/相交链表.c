#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {

    // if(headA == NULL||headB ==NULL)
    // {
    //     return NULL;
    // }
    // struct ListNode* pre = NULL;//倒置链表A
    // struct ListNode* next = headA;
    // struct ListNode* cur = headA;
    // while(next!=NULL)
    // {
    //     next = cur -> next;
    //     cur -> next = pre;
    //     pre = cur;
    //     cur = next;
    // } 
    // struct ListNode* heada = pre;//倒置链表B
    // pre = NULL;
    // next = headB;
    // cur = headB;
    // while(next != NULL)
    // {
    //     next = cur -> next;
    //     cur -> next = pre;
    //     pre = cur;
    //     cur = next;
    // }
    // struct ListNode* headb = pre;

    // struct ListNose* x = NULL;

    // while(headb->val == heada->val)//从尾开始检查
    // {
    //     x = heada;
    //     heada = heada -> next;
    //     headb = headb -> next;

    // }
    // return x;
    if (headA == NULL || headB == NULL)
    {
        return NULL;
    }
    struct ListNode* A = headA;
    struct ListNode* B = headB;
    while (A != B)
    {
        A = A != NULL ? A->next : headB;
        B = B != NULL ? B->next : headA;
    }
    return A;


}