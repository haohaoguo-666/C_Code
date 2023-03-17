#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void HeapCreate(HP* php, HPDataType* a, int n)
{
	assert(php);
	php->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	assert(php->a);
	memcpy(php->a, a, sizeof(HPDataType) * n);
	php->size = php->capacity = n;
	for (int i = (n-1-1)/2; i >= 0; i--)
	{
		AdjustDown(php->a, i, n);
	}
}



void HeapInit(HP* php)
{
	assert(php);
	php->size = 0;
	php->capacity = 4;
	HPDataType* cur = (HPDataType*)malloc(sizeof(HP));
	assert(cur);
	php->a = cur;
}

void HeapDestory(HP* php)
{
	assert(php);
	php->size = 0;
	php->capacity = 0;
	free(php->a);
	php->a = NULL;
}

void HeapPush(HP* php, HPDataType x)
{
	assert(php);

	if(php->capacity == php->size)
	{//扩容
		php->capacity *= 2;
		HPDataType* cur = (HPDataType*)realloc(php->a, sizeof(HP) * php->capacity);
		assert(cur);
		php->a = cur;
	}

	php->a[php->size++] = x;

	
	AdjustUp(php->a, php->size - 1);
		
		
}

void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	swap(&php->a[0], &php->a[--php->size]);

	AdjustDown(php->a, 0, php->size);
}

HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	return php->a[0];
}




void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] < a[child])
		{
			swap(&a[parent], &a[child]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void AdjustDown(HPDataType* a, int parent, int size)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		//确认child指向大的哪个孩子
		if (child + 1 < size && a[child + 1] < a[child])
		{
			++child;
		}

		if (a[child] < a[parent])
		{//孩子大于父亲，交换，继续向下调整
			swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{//孩子小于父亲
			break;
		}
	}
}

void swap(HPDataType* a, HPDataType* b)
{
	HPDataType temp = *a;
	*a = *b;
	*b = temp;
}

void HeapPrint(HP* php)
{
	assert(php);
	int end = 0;
	while (end < php->size)
	{
		printf("%d ", php->a[end]);
		end++;
	}
	printf("\n");
}

int HeapSize(HP* php)
{
	assert(php);

	return php->size;
}

bool HeapEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}



// O(N * logN)
void HeapSort(HPDataType* a, int n)
{
	//向上调整堆 -- O(N*logN)
	//降序
	for (int i = 0; i < n; i++)
	{
		AdjustUp(a, i);
	}

	//向下调整堆 -- O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, i, n);
	}
	int end = n - 1;
	while (end)
	{
		//升序 -- O(N * logN)
		swap(&a[0], &a[end]);
		AdjustDown(a, 0, end);
		end--;
	}
}