#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

struct ListNode* BuyElements(int x)
{
    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
    if (newnode == NULL)
    {
        perror("malloc fail");
        exit(-1);
    }
    newnode->val = x;
    newnode->next = NULL;

    return newnode;
}

struct ListNode* createSList(int a[], int n)
{
    struct ListNode* phead = NULL, * ptail = NULL;
    for (int i = 0; i < n; i++)
    {
        struct ListNode* newnode = BuyElements(a[i]);
        if (phead == NULL)
        {
            phead = newnode;
            ptail = newnode;
        }
        else
        {
            ptail->next = newnode;
            ptail = newnode;
        }
    }
    return phead;

}

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* cur = head;
    struct ListNode* newhead = NULL, * tail = NULL;

    if (head == NULL) return NULL;
    while (cur)
    {
        if (cur->val != val)
        {
            if (tail == NULL)
            {
                tail = cur;
                newhead = tail;
            }
            else
            {
                tail->next = cur;
                tail = cur;
            }
            cur = cur->next;
        }
        else
        {
            struct ListNode* next = cur->next;
            free(cur);
            cur = next;

        }


    }
    if (tail)
        tail->next = NULL;

    return newhead;
}

void PrintSList(struct ListNode* phead)
{
    while (phead)
    {
        printf("[%d|%p]->", phead->val, phead->next);
        phead = phead->next;
    }
    printf("NULL");
    printf("\n");
}

struct ListNode* copyRandomList(struct ListNode* head) {
    struct ListNode* cur = head;
    struct ListNode* phead = NULL;//新的链表头指针
    struct ListNode* pprev = NULL;//新的链表前结点指针
    struct ListNode* pcur = NULL;//新的链表当前结点指针
    while (cur)
    {

        pcur = (struct ListNode*)malloc(sizeof(struct ListNode));
        if (pprev)pprev->next = pcur;
        pprev = pcur;
        if (phead == NULL)phead = pcur;
        pcur->val = cur->val;
        cur = cur->next;

    }
    pcur->next = NULL;

    return phead;

}