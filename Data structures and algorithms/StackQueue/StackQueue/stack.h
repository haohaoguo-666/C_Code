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

//初始化
void StackInit(ST* ps);

//销毁栈
void StackDestory(ST* ps);

//压栈
void StackPush(ST* ps, STDataType x);

//出栈
void StackPop(ST* ps);

//判空
bool StackEmpty(ST* ps);

//栈长
int StackSize(ST* ps);

//打印
void StackPrint(ST* ps);
 
//返回栈顶元素
STDataType StackTop(ST* ps);

