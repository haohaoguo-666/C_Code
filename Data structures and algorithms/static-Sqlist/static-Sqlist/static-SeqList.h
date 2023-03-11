#pragma once
#define _CRT_SECURE_NO_WARNINGS 1


//静态顺序表--不太实用 ---N不能动态的取大小

#define N 10
typedef int SLDateType;

typedef struct SeqList
{
	SLDateType a[N];
	int Size;// 记录存储了多少个有效数据
}SL;

void SeqListInit(SL* S); //初始化顺序表

void SeqListPushBack(SL* S, SLDateType x);//尾插