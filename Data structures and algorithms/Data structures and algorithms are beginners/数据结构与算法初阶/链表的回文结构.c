#define _CRT_SECURE_NO_WARNINGS 1
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
    struct ListNode* middleNode(struct ListNode* head) {
        if (head == NULL)return NULL;
        struct ListNode* fast = head;
        struct ListNode* slow = head;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    struct ListNode* reverseList(struct ListNode* head) {
        struct ListNode* cur = head;
        struct ListNode* rhead = NULL;
        while (cur) {
            //nextָ����һ���ڵ�
            struct ListNode* next = cur->next;
            //head�ڵ�ͷ����
            cur->next = rhead;
            //rheadָ��ָ���µ�ͷ�ڵ�
            rhead = cur;
            //headָ��ָ���µ�ͷ�ڵ�
            cur = next;
        }
        return rhead;

    }
    bool chkPalindrome(ListNode* A) {
        //    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(ListNode));//�ڱ����

        //    dummy-> next = A;
        //    struct ListNode* fast = dummy;
        //    struct ListNode* slow = dummy;
        //    while(fast && fast->next)//��ȡ�м���
        //    {
        //     slow = slow -> next;
        //     fast = fast -> next -> next;
        //    }


        //    struct ListNode* cur = slow->next;//��ת����
        //    struct ListNode* pre = slow;
        //    struct ListNode* next = cur;
        //    slow -> next = NULL;

        //    while(1)
        //    {
        //     next = cur -> next;
        //     cur -> next = pre;
        //     pre = cur;
        //     if(next==NULL)break;
        //     cur = next;

        //    }

        //     struct ListNode* head = A;
        //     struct ListNode* tail = cur;
        //     while(tail != slow)
        //     {
        //         if(head -> val !=  tail -> val)
        //         {
        //             return false;
        //         }
        //         tail = tail -> next;
        //         head = head -> next;
        //     }
        //     return true;
        struct ListNode* mid = middleNode(A);
        struct ListNode* rhead = reverseList(mid);
        while (A && rhead)
        {
            if (A->val != rhead->val) return false;
            A = A->next;
            rhead = rhead->next;
        }
        return true;


    }
};