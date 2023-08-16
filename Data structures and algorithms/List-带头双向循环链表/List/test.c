#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void TestList()
{

	LTNode* phead = InitList();
	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPrint(phead);

	LTPopBack(phead);
	LTPopBack(phead);
	LTPrint(phead);

	LTPushFront(phead, 3);
	LTPushFront(phead, 4);
	LTPrint(phead);

	LTPopFront(phead);
	LTPopFront(phead);
	LTPrint(phead);


	LTNode* pos = LTFind(phead,1);
	LTInsert(pos, 4);
	LTErase(pos);
	LTPrint(phead);

	if (LTEmpty(phead)) printf("%d", LTSize(phead));

	LTDestory(phead);

}

int main()
{
	TestList();
	return 0;
}