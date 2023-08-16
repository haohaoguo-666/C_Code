#define _CRT_SECURE_NO_WARNINGS 1 
#include "SList.h"

void TestSList1() {
	SLTNode* phead = NULL;
	SLTPushBack(&phead, 1);
	SLTPushBack(&phead, 2);
	SLTPushBack(&phead, 3);
	SLTPushBack(&phead, 4);
	SLTPushBack(&phead, 5);
	SLTPushFront(&phead, 0);
	SLTPopFront(&phead);
	PrintSList(phead);

	SLTNode* pos = SLTFind(phead, 1);
	
	SLTInsertAfter(pos, 7);
	SLTInsert(&phead, pos, 7);
	SLTInsert(&phead, phead, 8);
	SLTEraseAfter(pos);
	SLTErase(&phead, pos);

	printf("\n");
	PrintSList(phead);

	SLTDestory(&phead);
	PrintSList(phead);


	
}

int main() {
	TestSList1();
}