#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void TestHeap()
{
	HP php;
	int array[] = { 123, 45, 56, 31, 93, 32, 56, 23 };
	HeapCreate(&php, array, sizeof(array)/sizeof(int));
	HeapSort(php.a, php.size);
	HeapPrint(&php);

	HeapDestory(&php);

}

void TestHeap2()
{

	//造数据
	int n = 10000;
	int k = 5;
	srand(time(0));
	FILE* fin = fopen("Data.txt", "w");
	assert(fin);
	for (int i = 0; i < n; i++)
	{
		int val = rand();
		fprintf(fin, "%d ", val);
	}

	fclose(fin);


	int* minHeap = malloc(sizeof(int) * k);
	assert(minHeap);

	//找TopK
	FILE* fout = fopen("Data.txt", "r");
	assert(fout);

	for (int i = 0; i < k; ++i)
	{
		fscanf(fout, "%d", &minHeap[i]);
	}

	//建小堆
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(minHeap, i, k);
	}
	int val = 0;
	while (fscanf(fout, "%d", &val) != EOF)
	{
		if (val > minHeap[0])
		{
			minHeap[0] = val;
			AdjustDown(minHeap, 0, k);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d ", minHeap[i]);
	}
	printf("\n");

	fclose(fout);
	
}

int main()
{
	TestHeap2();
}