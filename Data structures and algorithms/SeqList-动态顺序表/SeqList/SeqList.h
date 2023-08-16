//静态顺序表
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
//动态顺序表 - 按需扩空间
#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int SLDataType;

typedef struct SL {
	SLDataType* a;
	int size;  //记录有多少个有效数据
	int capacity; //空间容量大小
}SL;
//打印顺序表有效数据
void SLPrint(SL* ps);

//初始化
void SLInit(SL* ps);


//扩容
void SLCheckCapacity(SL* ps);


//删除顺序表
void SLDestroy(SL* ps);

//尾插
void SLPushBack(SL *ps, SLDataType x);

//尾删
void SLPopBack(SL* ps);

//头插
void SLPushFront(SL* ps, SLDataType x);

//头删
void SLPopFront(SL* ps);

//在pos位置插入
void SLInsert(SL* ps, int pos, SLDataType x);

//在pos位置删除
void SLErase(SL* ps, int pos);

//查找
int SLFind(SL* ps, SLDataType x, int begin);

