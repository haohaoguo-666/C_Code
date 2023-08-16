#include "sort.h"


void PrintArray(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", p[i]);
	}
}
void test()
{
	srand(time(0));
	const int N = 10000;
	int* a1 = (int*)malloc(sizeof(int) * N);
	int* a2 = (int*)malloc(sizeof(int) * N);
	int* a3 = (int*)malloc(sizeof(int) * N);
	int* a4 = (int*)malloc(sizeof(int) * N);
	int* a5 = (int*)malloc(sizeof(int) * N);
	int* a6 = (int*)malloc(sizeof(int) * N);
	int* a7 = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; ++i)
	{
		a1[i] = rand();
		a2[i] = a1[i];
		a3[i] = a1[i];
		a4[i] = a1[i];
		a5[i] = a1[i];
		a6[i] = a1[i];
		a7[i] = a1[i];

	}
	int begin1 = clock();
	//InsertSort(a1, N);
	int end1 = clock();

	int begin2 = clock();
	//ShellSort(a2, N);
	int end2 = clock();

	int begin3 = clock();
	//SelectSort(a3, N);
	int end3 = clock();

	int begin4 = clock();
	//HeapSort(a4, N);
	int end4 = clock();

	int begin5 = clock();
	QuickSort(a5, 0, N - 1);
	int end5 = clock();

	int begin6 = clock();
	//MergeSort(a6, N);
	int end6 = clock();

	int begin7 = clock();
	//BubbleSort(a7, N);
	int end7 = clock();

	printf("InsertSort:%d ms\n", end1 - begin1);

	printf("ShellSort:%d ms\n", end2 - begin2);

	printf("SelectSort:%d ms\n", end3 - begin3);

	printf("HeapSort:%d ms\n", end4 - begin4);

	printf("QuickSort:%d ms\n", end5 - begin5);

	printf("MergeSort:%d ms\n", end6 - begin6);
	
	printf("BubbleSort:%d ms\n", end7 - begin7);


	free(a1);
	free(a2);
	free(a3);
	free(a4);
	free(a5);
	free(a6);
	free(a7);

	return 0;
}

void TestQuickSort()
{
	int a[] = { 1, 45, 56, 12, 9, 88, 100, 111, 454, 23};
	QuickSortNonR(a, 0, sizeof(a) / sizeof(int) - 1);
	PrintArray(a, sizeof(a) / sizeof(int));
}

void TestQuickSort1()
{
	int a[] = { 1, 45, 56, 12, 9, 88, 100, 111, 454, 23 };
	QuickSort1(a, 0, sizeof(a) / sizeof(int) - 1);
	PrintArray(a, sizeof(a) / sizeof(int));
}

void TestMergeSort()
{
	int a[] = { 1, 45, 56, 12, 9, 88, 100, 111, 454, 23 , 823, 23};
	MergeSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(int));
}

void TestMergeSortNonR()
{
	int a[] = { 1, 45, 56, 12, 9, 88, 100, 111, 33, 73};
	MergeSortNonR(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(int));
}

void TestCountSort()
{
	int a[] = { 1, 45, -56, 12, 9, 88, 100, 111, 33, 73 };
	CountSort(a, sizeof(a) / sizeof(a[0]));
	PrintArray(a, sizeof(a) / sizeof(int));
}

int main()
{
	//test();
	//TestQuickSort();
	//TestQuickSort1();
	//TestMergeSort();
	//TestMergeSortNonR();
	TestCountSort();
}

