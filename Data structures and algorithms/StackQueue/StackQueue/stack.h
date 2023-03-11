#pragma once
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int capacity;
	int top;
}ST;

//��ʼ��
void StackInit(ST* ps);

//����ջ
void StackDestory(ST* ps);

//ѹջ
void StackPush(ST* ps, STDataType x);

//��ջ
void StackPop(ST* ps);

//�п�
bool StackEmpty(ST* ps);

//ջ��
int StackSize(ST* ps);

//��ӡ
void StackPrint(ST* ps);
 
//����ջ��Ԫ��
STDataType StackTop(ST* ps);

