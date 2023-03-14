#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void TestHeap()
{
	HP php;
	HeapInit(&php);
	HeapPush(&php, 70);
	HeapPush(&php, 56);
	HeapPush(&php, 30);
	HeapPush(&php, 25);
	HeapPush(&php, 15);
	HeapPush(&php, 100);
	HeapPush(&php, 10);
	HeapPush(&php, 120);
	HeapPop(&php);
	HeapPop(&php);







	HeapPrint(&php);
	printf("%d",HeapTop(&php));

	HeapDestory(&php);

}

int main()
{
	TestHeap();
}