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
        //ͷ�ڵ㷨


        //����x��ͷ�ڵ�
        struct ListNode* guard1 = (struct ListNode*)malloc(sizeof(struct ListNode));
        //С��x��ͷ�ڵ�
        struct ListNode* guard2 = (struct ListNode*)malloc(sizeof(struct ListNode));
        assert(guard1);
        assert(guard2);
        //ָ�����x��ͷ�ڵ�
        struct ListNode* prev = guard1;
        //ָ��С��x��ͷ�ڵ�
        struct ListNode* tail = guard2;
        //ָ��ԭ����ͷ�ڵ�
        struct ListNode* cur = pHead;
        while (cur)
        {
            if (cur->val < x)
            {
                //����guard2����
                tail->next = cur;
                tail = cur;
            }
            else
            {
                //����guard1����
                prev->next = cur;
                prev = cur;

            }
            cur = cur->next;

        }
        //�ϲ���������
        tail->next = guard1->next;
        prev->next = NULL;//����ɻ�
        pHead = guard2->next;
        free(guard2);
        free(guard1);
        return pHead;

    }
};