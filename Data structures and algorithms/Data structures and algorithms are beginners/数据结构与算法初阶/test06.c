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
//	struct ListNose* newhead = NULL;
//	while (tail) {
//		//�������val
//		if (tail->val != val) {
//			if (prev == NULL) {
//				prev = tail;
//				newhead = prev;
//			}
//			else {
//				prev->next = tail;
//				prev = tail;
//			}
//			tail = tail->next;
//		}
//		//�����val
//		else {
//			tail = tail->next;
//		}
//	}
//	//������ǿ�����
//	if (prev != NULL) {
//		prev->next = NULL;
//	}
//	return newhead;
//}

