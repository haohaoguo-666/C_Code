#pragma once
//��ֹͷ�ļ����ظ�����
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define _CRT_SECURE_NO_WARNINGS 1


typedef int SLTDataType;


//������
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
	//SLTNode* next; ������������δ��Ч
}SLTNode;

//�����ڵ�
SLTNode* BuySLTNode(SLTDataType x);

//��������
SLTNode* CreateSList(int n);

//��ӡ����
void PrintSList(SLTNode* phead);

//β��
void SLTPushBack(SLTNode** pphead, SLTDataType x);

//βɾ
void SLTPopBack(SLTNode** pphead);

//ͷ��
void SLTPushFront(SLTNode** pphead, SLTDataType x);

//ͷɾ
void SLTPopFront(SLTNode** pphead);

//����
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);

//��������posλ��֮�����x
void SLTInsertAfter(SLTNode* pos, SLTDataType x);

//������ɾ����posλ��֮���ֵ
void SLTEraseAfter(SLTNode* pos);

//��������posλ��֮ǰ����x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

//������ɾ��posλ��
void SLTErase(SLTNode** pphead, SLTNode* pos);

//ɾ��������
void SLTDestory(SLTNode** pphead);
