#define _CRT_SECURE_NO_WARNINGS 1
#include "SeqList.h"
void testSeqList() {
	SL sl;
	SLInit(&sl);
	SLPushBack(&sl, 6);
	SLPushBack(&sl, 7);
	SLPushBack(&sl, 8);
	SLPushBack(&sl, 9);
	SLPushBack(&sl, 10);



	SLInsert(&sl, 1, 1);
	SLInsert(&sl, 2, 2);
	SLInsert(&sl, 3, 3);
	SLInsert(&sl, 4, 4);
	SLErase(&sl, 1);
	SLErase(&sl, 2);
	SLErase(&sl, 3);






	SLPrint(&sl);

	SLDestroy(&sl);

}

int main() {
	testSeqList();
}