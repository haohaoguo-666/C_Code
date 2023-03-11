#define _CRT_SECURE_NO_WARNINGS 1
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        //头节点法


        //大于x的头节点
        struct ListNode* guard1 = (struct ListNode*)malloc(sizeof(struct ListNode));
        //小于x的头节点
        struct ListNode* guard2 = (struct ListNode*)malloc(sizeof(struct ListNode));
        assert(guard1);
        assert(guard2);
        //指向大于x的头节点
        struct ListNode* prev = guard1;
        //指向小于x的头节点
        struct ListNode* tail = guard2;
        //指向原链表头节点
        struct ListNode* cur = pHead;
        while (cur)
        {
            if (cur->val < x)
            {
                //加入guard2链表
                tail->next = cur;
                tail = cur;
            }
            else
            {
                //加入guard1链表
                prev->next = cur;
                prev = cur;

            }
            cur = cur->next;

        }
        //合并两个链表
        tail->next = guard1->next;
        prev->next = NULL;//避免成环
        pHead = guard2->next;
        free(guard2);
        free(guard1);
        return pHead;

    }
};