#define _CRT_SECURE_NO_WARNINGS 1
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  *
  * @param pListHead ListNode类
  * @param k int整型
  * @return ListNode类
  */
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
    //快慢指针
    if (pListHead == NULL)return NULL;
    struct ListNode* fast = pListHead;
    struct ListNode* slow = pListHead;
    //if(k == 0)return NULL;
    //fast先走k步
    while (k--)
    {
        //链表可能没有k步长
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