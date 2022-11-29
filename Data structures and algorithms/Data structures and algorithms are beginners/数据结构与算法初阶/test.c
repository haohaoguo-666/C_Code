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
	SLPushBack(&sl, 11);
	SLPushBack(&sl, 12);
	SLPushBack(&sl, 13);

	SLPrint(&sl);

	SLDestroy(&sl);

}

int main() {
	testSeqList();
}