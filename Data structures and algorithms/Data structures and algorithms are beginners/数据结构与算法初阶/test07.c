//206. ��ת����
//���㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 // //˼·һ
 // //��ָ��ͷ�巨
 //struct ListNode* reverseList(struct ListNode* head) {
 //    struct ListNode* ptr = NULL;
 //    if (head != NULL && head->next != NULL) {
 //        //ָ��ɵ�ͷ�ڵ�
 //        struct ListNode* tail = head;
 //        //ָ���µ�ͷ�ڵ�
 //        struct ListNode* prev = head;
 //        while (tail->next) {
 //            //��¼��һ���ڵ����һ���ڵ�
 //            ptr = tail->next->next;
 //            //�ڶ����ڵ�����һ���ڵ�
 //            tail->next->next = prev;
 //            //ָ���µ�ͷ�ڵ�
 //            prev = tail->next;
 //            //�ɵ�ͷ�ڵ�������һ�ڵ����һ���ڵ�
 //            tail->next = ptr;
 //        }
 //        return prev;
 //    }
 //    else {
 //        return head;
 //    }
 //
 //}

 //˼·��
 //ȡ�ڵ�ͷ��
 // struct ListNode* reverseList(struct ListNode* head) {
 //     struct ListNode* next = NULL;
 //     struct ListNode* rhead = NULL;
 //     while (head) {
 //         //nextָ����һ���ڵ�
 //         next = head->next;
 //         //head�ڵ�ͷ����
 //         head->next = rhead;
 //         //rheadָ��ָ���µ�ͷ�ڵ�
 //         rhead = head;
 //         //headָ��ָ���µ�ͷ�ڵ�
 //         head = next;
 //     }
 //     return rhead;
 //
 //}
