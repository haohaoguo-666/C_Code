//203. �Ƴ�����Ԫ��
//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��
#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


 //˼·һ
 //˫ָ��
//struct ListNode* removeElements(struct ListNode* head, int val) {
//	struct ListNode* tail = head;
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = NULL;
//	struct ListNode* newhead = NULL;
//	while (tail) {
//		//�������val
//		if (tail->val != val) {
//
//			if (prev == NULL)
//			{//����ͷ�ڵ�
//				prev = tail;
//				newhead = prev;
//			}
//			else
//			{//������
//				prev->next = tail;
//				prev = tail;
//			}
//			tail = tail->next;//ָ����һ��Ҫ���Ľ��
//		}
//		//�����val
//		else
//		{//�����ý�㲢ָ����һ�����
//			cur = tail->next;
//			free(tail);
//			tail = cur;
//		}
//	}
//	//������ǿ�����
//	if (prev != NULL) {
//		prev->next = NULL;
//	}
//	return newhead;
//}
//
//˫ָ��2
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* prev = NULL;
//    struct ListNode* cur = head;
//
//    while (cur != NULL && cur->val == val)
//    {
//        cur = cur->next;
//    }
//    if (cur == NULL) return NULL;
//    head = cur;
//    prev = cur;
//    cur = cur->next;
//
//    while (cur != NULL)
//    {
//        if (cur->val != val)
//        {
//
//            prev->next = cur;
//            prev = cur;
//            cur = cur->next;
//        }
//        else
//        {
//            cur = cur->next;
//        }
//    }
//    prev->next = NULL;
//    return head;
//}
// 
//˼·2
//ö�ٷ�
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* cur = head;
//    while (cur != NULL && cur->val == val)
//    {
//        cur = cur->next;
//    }
//    if (!cur) return NULL;
//    head = cur;
//    while (cur != NULL)
//    {
//        if (!cur->next)break;
//        if (cur->next->val != val)cur = cur->next;
//        else
//        {
//            cur->next = cur->next->next;
//        }
//    }
//    return head;
//}
// 
// 
// 
// 
//˼·3
//�����µ�ͷ���
// struct ListNode* removeElements(struct ListNode* head, int val) {
//     struct ListNode* cur = head;
//     struct ListNode* newhead = NULL, *tail = NULL;

//     if(head == NULL) return NULL;
//     while(cur)
//     {
//         if(cur->val != val)
//         {
//             if(tail == NULL)
//             { 
//                 tail = cur;
//                 newhead = tail;
//             }
//             else
//             {
//                 tail->next = cur;
//                 tail = cur;
//             }
//             cur = cur->next;
//         }
//         else
//         {
//             struct ListNode* next = cur->next;
//             free(cur);
//             cur = next;

//         }


//     }
//     if(tail)
//     tail->next = NULL;

//     return newhead;
// } 
//���ڱ�λ��ͷ�ڵ�
// struct ListNode* removeElements(struct ListNode* head, int val) {
//     struct ListNode* cur = head;
//     struct ListNode *guard, *tail;
//     guard = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
//     guard->next = NULL;

//     if(head == NULL) return NULL;
//     while(cur)
//     {
//         if(cur->val != val)
//         {
//             tail->next = cur;
//             tail = cur;
//             cur = cur->next;
//         }
//         else
//         {
//             struct ListNode* next = cur->next;
//             free(cur);
//             cur = next;
//         }


//     }
//     tail->next = NULL;
//     struct ListNode* newhead = guard->next;
//     free(guard);


//     return newhead;
// }
