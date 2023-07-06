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

//�ѵĹ���
void HeapCreate(HP* php, HPDataType* a, int n);

//��ʼ��
void HeapInit(HP* php);

//����
void HeapDestory(HP* php);

//���룬���ϵ��������ֻ���һ���� O(logN)
void HeapPush(HP* php, HPDataType x);

//ɾ���Ѷ������ݣ����µ��������ֻ���һ���� O(logN)
void HeapPop(HP* php);

//ȡ�Ѷ� O(logN)
HPDataType HeapTop(HP* php);

//���ϵ���
void AdjustUp(HPDataType* a, int child);

//���µ���
void AdjustDown(HPDataType* a, int parent, int size);

//����
void swap(HPDataType* a, HPDataType* b);

//��ӡ
void HeapPrint(HP* php);

//�ѵĳ���
int HeapSize(HP* php);

//�п�
bool HeapEmpty(HP* php);

//������
void HeapSort(HPDataType* a, int n);