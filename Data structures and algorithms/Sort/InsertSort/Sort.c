#include "sort.h"


void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{//i = n - 1 时已经排完了
		int end = i;
		//指向有序队列的最后一位
		int tmp = a[end + 1];
		//要排入有序队列的数
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
		//放在结束位置的后一个位置，即要插入的位置
	}
	
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{	// gap > 1预排序
		// gap == 1 就是插入排序

		gap = gap / 3 + 1;
		//gap = gap / 2;
		
		for (int i = 0; i < n - gap; i++)
		{//i++gap组并排
		 //i = n - gap 时已经排完了
			int end = i;
			//指向分组有序部分的最后一位
			int tmp = a[end + gap];
			//指向分组中要排入有序分组的数
			while (end >= 0)
			{
				if (tmp > a[end])
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
			//放在结束位置的后一个位置，即要插入的位置
		}
	}
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
		//每次遍历选出最小和最大的数
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
		//如果max位置和mini位置重叠，需要修正一下max的位置
		if (max == begin)
			max = mini;
		swap(&a[max], &a[end]);
		//将最小和最大的数放到左右两边的位置
		begin++;
		end--;
	}
}

void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{//冒泡 n - 1 次
		int exchange = 0;
		for (int j = 0; j < n - i - 1; j++)
		{//每次都是n - i - 1上的位置确定
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
				exchange = 1;
		}

		if (exchange == 0)
		{//没有交换就说明有序了
			break;
		}
	}
}

void AdjustDown(int* a, int parent, int size)
{//升序建大堆，降序建小堆
	int child = parent * 2 + 1;
	while (child < size)
	{
		//确认child指向大的哪个孩子
		if (child + 1 < size && a[child + 1] < a[child])
		{
			++child;
		}

		if (a[child] > a[parent])
		{//孩子大于父亲，交换，继续向下调整，建大堆
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

// O(N * logN)
void HeapSort(int* a, int n)
{
	//向上调整堆 -- O(N*logN)
	//降序
	/*for (int i = 0; i < n; i++)
	{
		AdjustUp(a, i);
	}*/

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

//三数取中
//begin mid end
int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[begin] > a[end])
	{
		if (a[mid] > a[begin])
			return a[begin];
		else if (a[mid] > a[end])
			return a[mid];
		else
			return a[end];
	}
	else
	{//a[begin] <= a[end]
		if (a[mid] > a[end])
			return a[end];
		else if (a[mid] > a[begin])
			return a[mid];
		else
			return a[begin];
	}

}


void QuickSort(int* a, int begin, int end)
{
	if (begin >= end) return;
	
	if (end - begin + 1 < 15)
	{
		// 小区间用直接插入代替，减少递归调用次数
		InsertSort(a+begin, end - begin + 1);
	}
	else
	{
		//int mid = GetMidIndex(a, begin, end);
		//swap(a + begin, a + mid);

		//int left = begin;
		//int right = end;
		//int keyi = left;
		//
		//while (left < right)
		//{
		//	while (left < right && a[right] >= a[keyi])right--;
		//	//右边先走，找小
		//	while (left < right && a[left] <= a[keyi])left++;
		//	//左边再走，找大
		//	swap(a + left, a + right);
		//}
		//swap(a + keyi, a + left);
		//keyi = left;
		int keyi = PartSort1(a, begin, end);
		//int keyi = PartSort2(a, begin, end);
		QuickSort(a, begin, keyi - 1);
		QuickSort(a, keyi + 1, end);
	}
	
	
}


int PartSort1(int* a, int begin, int end)
{//hoare法

	int mid = GetMidIndex(a, begin, end);
	swap(a + begin, a + mid);

	int left = begin;
	int right = end;
	int keyi = left;

	while (left < right)
	{
		while (left < right && a[right] >= a[keyi])right--;
		//右边先走，找小
		while (left < right && a[left] <= a[keyi])left++;
		//左边再走，找大
		swap(a + left, a + right);
	}
	swap(a + keyi, a + left);
	keyi = left;
	
	return keyi;
	
}


int PartSort2(int* a, int begin, int end)
{	//挖坑法
	//左挖坑，右填坑，右挖坑，左填坑。

	int mid = GetMidIndex(a, begin, end);
	swap(a + begin, a + mid);

	int left = begin;
	int right = end;
	int key = a[left];
	int hole = left;

	while (left < right)
	{
		while (left < right && a[right] >= key)right--;
		//右边找到一个坑位，要挖坑和填坑
		a[hole] = a[right];
		hole = right;
		while (left < right && a[left] <= key)left++;
		//找到一个坑位，要挖坑和填坑
		a[right] = a[left];
		hole = left;
	}
	a[hole] = key;
	return hole;
	
}


int PartSort3(int* a, int begin, int end)
{

}
