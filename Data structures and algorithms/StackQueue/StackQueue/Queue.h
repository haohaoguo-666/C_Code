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

//初始化
void QueueInit(Queue* pq);

//销毁
void QueueDestroy(Queue* pq);

//入队
void QueuePush(Queue* pq, QDataType x);

//出队
void QueuePop(Queue* pq);

//判空
bool QueueEmpty(Queue* pq);

//长度 
int Queuesize(Queue* pq);

//队头
QDataType QueueFront(Queue* pq);

//队尾
QDataType QueueBack(Queue* pq);