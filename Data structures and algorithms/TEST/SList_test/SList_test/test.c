#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"



int main()
{
	int a[] = {1, 2, 3, 4, 5, 6};
	struct ListNode* phead = createSList(a, 6);
	phead = removeElements(phead, 6);
	PrintSList(phead);

	phead = copyRandomList(phead);
	PrintSList(phead);

}