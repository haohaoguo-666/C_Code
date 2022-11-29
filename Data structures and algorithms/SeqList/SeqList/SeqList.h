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
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>


typedef int DataType;

typedef struct SL {
	DataType* a;
	int size;  //记录有多少个有效数据
	int capacity; //空间容量大小
}SL;
//初始化
void SLInit(SL* pc);

//删除顺序表
void SLDestroy(SL* pc);
//尾增与尾删
void SLPushBack(SL *pc, DataType k);
void SLPopBack(SL* pc);

//打印顺序表数据
void SLPrint(SL* pc);