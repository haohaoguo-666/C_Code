#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;

typedef struct QueueNode
{
	QDataType x;
	struct QueueNode* next;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

//��ʼ��
void QueueInit(Queue* pq);

//����
void QueueDestroy(Queue* pq);

//���
void QueuePush(Queue* pq, QDataType x);

//����
void QueuePop(Queue* pq);

//�п�
bool QueueEmpty(Queue* pq);

//���� 
int Queuesize(Queue* pq);

//��ͷ
QDataType QueueFront(Queue* pq);

//��β
QDataType QueueBack(Queue* pq);