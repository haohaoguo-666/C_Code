#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

//堆的构建
void HeapCreate(HP* php, HPDataType* a, int n);

//初始化
void HeapInit(HP* php);

//销毁
void HeapDestory(HP* php);

//插入，向上调整，保持还是一个堆 O(logN)
void HeapPush(HP* php, HPDataType x);

//删除堆顶的数据，向下调整，保持还是一个堆 O(logN)
void HeapPop(HP* php);

//取堆顶 O(logN)
HPDataType HeapTop(HP* php);

//向上调整
void AdjustUp(HPDataType* a, int child);

//向下调整
void AdjustDown(HPDataType* a, int parent, int size);

//交换
void swap(HPDataType* a, HPDataType* b);

//打印
void HeapPrint(HP* php);

//堆的长度
int HeapSize(HP* php);

//判空
bool HeapEmpty(HP* php);

//堆排序
void HeapSort(HPDataType* a, int n);