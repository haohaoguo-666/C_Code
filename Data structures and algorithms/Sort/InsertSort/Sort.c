#include "sort.h"


void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{//i = n - 1 ʱ�Ѿ�������
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