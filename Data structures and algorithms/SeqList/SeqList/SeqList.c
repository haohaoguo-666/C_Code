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
	//β��
	/*pc->a[pc->size] = k;
	pc->size++;*/
	SLInsert(pc, pc->size, x);

}

void SLPopBack(SL* pc) {
	assert(pc);

	//����ļ��
	/*if (pc->size == 0) {
		return;
	}*/
	//�����ļ��
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
	//����
=======
void SLPushBack(SL* pc, DataType k) {
	//扩容
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
	//尾增
	pc->a[pc->size] = k;
	pc->size++;
>>>>>>> 326923ce57611e59b8a27c6f9d9f356169710b4a

	////Ų�����ݣ�������ƣ���ͷ������
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
	//Խ��д���ܻᱻ�������������
	//Խ��д�������ᱻ������
	//��ͬ��������Խ�緽ʽ��ͬ
	//������������ĺ��涨��ֵ��ͨ��ֵ�ĸı����ж��Ƿ�Խ��

	//˳���Ϊ���ˣ���Ҫ��ͷɾ��

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