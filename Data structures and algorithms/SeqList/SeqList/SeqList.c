#include "SeqList.h"

void SLInit(SL* pc) {
	assert(pc);

	pc->a = NULL;
	pc->size = 0;
	pc->capacity = 0;
}

//O(N )
void SLPushBack(SL* pc, DataType x) {
	assert(pc);

	SLCheckCapacity(pc);
	//尾增
	/*pc->a[pc->size] = k;
	pc->size++;*/
	SLInsert(pc, pc->size, x);

}

void SLPopBack(SL* pc) {
	assert(pc);

	//温柔的检查
	/*if (pc->size == 0) {
		return;
	}*/
	//暴力的检查
	/*assert(pc->size > 0);

	pc->size--;*/
	SLErase(pc, pc->size - 1);
}

void SLDestroy(SL* pc) {
	assert(pc);

	free(pc->a);
	pc->a = NULL;
	pc->size = 0;
	pc->capacity = 0;
}

<<<<<<< HEAD
void SLPrint(SL* pc) {
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->size; i++) {
		printf("%d ", pc->a[i]);
	}
	printf("\n");
}



void SLCheckCapacity(SL* pc) {
	//扩容
=======
void SLPushBack(SL* pc, DataType k) {
	//鎵╁
>>>>>>> 326923ce57611e59b8a27c6f9d9f356169710b4a
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
<<<<<<< HEAD
}

//O(N*N)
void SLPushFront(SL* pc, DataType x) {
	//assert(pc);
	//SLCheckCapacity(pc);
=======
	//灏惧
	pc->a[pc->size] = k;
	pc->size++;
>>>>>>> 326923ce57611e59b8a27c6f9d9f356169710b4a

	////挪动数据：整体后移，再头部插入
	//int end = pc->size - 1;
	//for (; end >= 0; end--) {
	//	pc->a[end+1] = pc->a[end];
	//}
	//pc->a[0] = x;
	//pc->size++;
	SLInsert(pc, 0, x);
}

void SLPopFront(SL* pc) {
	assert(pc);
	//越界写可能会被检查出来——抽查
	//越界写基本不会被检查出来
	//不同编译器查越界方式不同
	//往往会在数组的后面定义值，通过值的改变来判断是否越界

	//顺序表为空了，不要再头删了

	assert(pc->size > 0);

	/*int begin = 1;
	while (begin < pc->size) {
		pc->a[begin - 1] = pc->a[begin];
		begin++;
	}
	pc->size--;*/
	SLErase(pc, 0);
}

void SLInsert(SL* pc, int pos, DataType x) {
	assert(pc);
	assert(pos >= 0);
	assert(pos <= pc->size);

	SLCheckCapacity(pc);
	int end = pc->size;
	while (end > pos) {
		pc->a[end] = pc->a[end-1];
		end--;
	}
	pc->a[end] = x;
	pc->size++;

}

void SLErase(SL* pc, int pos) {
	assert(pc);
	assert(pos >= 0);
	assert(pos < pc->size);
	int begin = pos;
	while (begin < pc->size-1) {
		pc->a[begin] = pc->a[begin+1];
			begin++;
	}
	pc->size--;
}

int SLFind(SL* pc, DataType x,int begin) {
	assert(pc);
	
	for (int i = begin; i < pc->size; i++) {
		if (pc->a[i] == x) {
			return i;
		}
	}
	return -1;
}