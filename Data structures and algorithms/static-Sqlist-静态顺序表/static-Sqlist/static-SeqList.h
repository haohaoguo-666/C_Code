#pragma once
#define _CRT_SECURE_NO_WARNINGS 1


//��̬˳���--��̫ʵ�� ---N���ܶ�̬��ȡ��С

#define N 10
typedef int SLDateType;

typedef struct SeqList
{
	SLDateType a[N];
	int Size;// ��¼�洢�˶��ٸ���Ч����
}SL;

void SeqListInit(SL* S); //��ʼ��˳���

void SeqListPushBack(SL* S, SLDateType x);//β��