#include "sort.h"


void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{//i = n - 1 时已经排完了
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
	
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{//预排序
		//gap == 1 就是插入排序
		gap = gap / 2;

		for (int i = 0; i < n - gap; i++)
		{ 
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
	//for (int j = 0; j < gap; j++)
	//{
		
	//}
}
void swap(int* a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;

	
	while (begin < end)
	{
		int mini = begin;
		int max = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (a[i] < a[mini])
				mini = i;
			if (a[i] > a[max])
				max = i;
		}
		swap(&a[mini], &a[begin]);
		if (max == begin)
			max = mini;
		swap(&a[max], &a[end]);

		begin++;
		end--;
	}
}

void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		int exchange = 0;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
				exchange = 1;
		}

		if (exchange == 0)
		{
			break;
		}
	}
}