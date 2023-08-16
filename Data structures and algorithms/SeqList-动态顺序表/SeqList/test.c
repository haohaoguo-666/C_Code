#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"

void TestSeqList()
{
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	/*SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);*/
	SLPrint(&sl);

	SLPushFront(&sl, 3);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 3);
	SLPrint(&sl);

	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPopFront(&sl);
	SLPrint(&sl);

	SLInsert(&sl, 2, 1);
	SLInsert(&sl, 2, 1);
	SLInsert(&sl, 2, 1);
	SLInsert(&sl, 2, 1);
	SLInsert(&sl, 2, 1);
	SLPrint(&sl);


	int pos = SLFind(&sl, 1, 0);
	while (pos != -1)
	{
		SLErase(&sl, pos);

		pos = SLFind(&sl, 1, pos);
	}

	/*SLDelete(&sl, 2);
	SLDelete(&sl, 2);
	SLDelete(&sl, 2);
	SLDelete(&sl, 2);*/
	SLPrint(&sl);
}

int main()
{
	TestSeqList();

	return 0;
}
