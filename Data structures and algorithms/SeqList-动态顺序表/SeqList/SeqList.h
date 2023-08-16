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
#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int SLDataType;

typedef struct SL {
	SLDataType* a;
	int size;  //��¼�ж��ٸ���Ч����
	int capacity; //�ռ�������С
}SL;
//��ӡ˳�����Ч����
void SLPrint(SL* ps);

//��ʼ��
void SLInit(SL* ps);


//����
void SLCheckCapacity(SL* ps);


//ɾ��˳���
void SLDestroy(SL* ps);

//β��
void SLPushBack(SL *ps, SLDataType x);

//βɾ
void SLPopBack(SL* ps);

//ͷ��
void SLPushFront(SL* ps, SLDataType x);

//ͷɾ
void SLPopFront(SL* ps);

//��posλ�ò���
void SLInsert(SL* ps, int pos, SLDataType x);

//��posλ��ɾ��
void SLErase(SL* ps, int pos);

//����
int SLFind(SL* ps, SLDataType x, int begin);

