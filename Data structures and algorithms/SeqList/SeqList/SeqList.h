//��̬˳���
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#define N 100 
//typedef  int SLDataType;
//
//typedef struct SortLiset {
//	SLDataType arr[N];
//	int size;
//} SL;
//
//void SLInit(SL s);
//void SLPushBack(SL s , SLDataType x);
//void SLPopBack
//��̬˳��� - �������ռ�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


typedef int DataType;

typedef struct SL {
	DataType* a;
	int size;  //��¼�ж��ٸ���Ч����
	int capacity; //�ռ�������С
}SL;
//��ʼ��
void SLInit(SL* pc);

//ɾ��˳���
void SLDestroy(SL* pc);
//β����βɾ
void SLPushBack(SL *pc, DataType k);
void SLPopBack(SL* pc);

//��ӡ˳�������
void SLPrint(SL* pc);