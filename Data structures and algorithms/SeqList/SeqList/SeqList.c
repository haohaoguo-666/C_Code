#include "SeqList.h"

void SLInit(SL* pc) {
	pc->a = NULL;
	pc->size = 0;
	pc->capacity = 0;
}

void SLPushBack(SL* pc, DataType k) {
	//À©ÈÝ
	if (pc->size == pc->capacity) {
		int newCapacity = pc->capacity == 0 ? 4 : pc->capacity * 2;
		DataType* temp = (DataType*)realloc(pc->a, sizeof(DataType) * newCapacity);
		if (temp == NULL) {
			perror("realloc fail");
			exit(-1);
		}
		else {
			pc->a = temp;
			pc->capacity = newCapacity;
		}
	}
	//Î²Ôö
	pc->a[pc->size] = k;
	pc->size++;

}

void SLDestroy(SL* pc) {
	free(pc->a);
	pc->a = NULL;
	pc->size = 0;
	pc->capacity = 0;
}

void SLPrint(SL* pc) {
	int i = 0;
	for (i = 0; i < pc->size; i++) {
		printf("%d ", pc->a[i]);
	}
	printf("\n");
}
