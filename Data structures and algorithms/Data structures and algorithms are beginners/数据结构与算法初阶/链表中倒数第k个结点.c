#define _CRT_SECURE_NO_WARNINGS 1
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  *
  * @param pListHead ListNode��
  * @param k int����
  * @return ListNode��
  */
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
    //����ָ��
    if (pListHead == NULL)return NULL;
    struct ListNode* fast = pListHead;
    struct ListNode* slow = pListHead;
    //if(k == 0)return NULL;
    //fast����k��
    while (k--)
    {
        //�������û��k����
        if (!fast)return NULL;
        fast = fast->next;
    }

    while (fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}