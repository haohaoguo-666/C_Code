#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define _CRT_SECURE_NO_WARNINGS 1


typedef int DataType;


//������
typedef struct SListNode
{
	DataType data;
	struct SListNode* next;
}SLTNode;



SLTNode* BuySTLNode(DataType x);

SLTNode* CreateSList(int n);

void SLTPrint(SLTNode* pc);

//β��
void SLTPushBack(SLTNode** pphead, DataType x);

//βɾ
void SLTPopBack(SLTNode** pphead);

//ͷ��
void SLTPushFront(SLTNode** pphead, DataType x);

//ͷɾ
void SLTPopFront(SLTNode** pphead);

//����
SLTNode*SLTFind(SLTNode* phead, DataType x);

//��������posλ��֮�����x
void SLTInsertAfter(SLTNode* pos, DataType x); 

// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
//ɾ����һ��
void SLTEraseAfter(SLTNode* pos);

//��pos֮ǰ����x
void SLTInsert(SLTNode** pphead, SLTNode* pos, DataType x);


//ɾ��posλ��
void SLTErase(SLTNode** pphead, SLTNode* pos);

//�ͷŵ�����
void SLTDestory(SLTNode** pphead);

