#include "sort.h"


void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{//i = n - 1 ʱ�Ѿ�������
		int end = i;
		//ָ��������е����һλ
		int tmp = a[end + 1];
		//Ҫ����������е���
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
		//���ڽ���λ�õĺ�һ��λ�ã���Ҫ�����λ��
	}
	
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{	// gap > 1Ԥ����
		// gap == 1 ���ǲ�������

		gap = gap / 3 + 1;
		//gap = gap / 2;
		
		for (int i = 0; i < n - gap; i++)
		{//i++gap�鲢��
		 //i = n - gap ʱ�Ѿ�������
			int end = i;
			//ָ��������򲿷ֵ����һλ
			int tmp = a[end + gap];
			//ָ�������Ҫ��������������
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
			//���ڽ���λ�õĺ�һ��λ�ã���Ҫ�����λ��
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
		//ÿ�α���ѡ����С��������
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
		//���maxλ�ú�miniλ���ص�����Ҫ����һ��max��λ��
		if (max == begin)
			max = mini;
		swap(&a[max], &a[end]);
		//����С���������ŵ��������ߵ�λ��
		begin++;
		end--;
	}
}

void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{//ð�� n - 1 ��
		int exchange = 0;
		for (int j = 0; j < n - i - 1; j++)
		{//ÿ�ζ���n - i - 1�ϵ�λ��ȷ��
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
				exchange = 1;
		}

		if (exchange == 0)
		{//û�н�����˵��������
			break;
		}
	}
}

void AdjustDown(int* a, int parent, int size)
{//���򽨴�ѣ�����С��
	int child = parent * 2 + 1;
	while (child < size)
	{
		//ȷ��childָ�����ĸ�����
		if (child + 1 < size && a[child + 1] < a[child])
		{
			++child;
		}

		if (a[child] > a[parent])
		{//���Ӵ��ڸ��ף��������������µ����������
			swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{//����С�ڸ���
			break;
		}
	}
}

// O(N * logN)
void HeapSort(int* a, int n)
{
	//���ϵ����� -- O(N*logN)
	//����
	/*for (int i = 0; i < n; i++)
	{
		AdjustUp(a, i);
	}*/

	//���µ����� -- O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, i, n);
	}
	int end = n - 1;
	while (end)
	{
		//���� -- O(N * logN)
		swap(&a[0], &a[end]);
		AdjustDown(a, 0, end);
		end--;
	}
}

//����ȡ��
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
		// С������ֱ�Ӳ�����棬���ٵݹ���ô���
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
		//	//�ұ����ߣ���С
		//	while (left < right && a[left] <= a[keyi])left++;
		//	//������ߣ��Ҵ�
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
{//hoare��

	int mid = GetMidIndex(a, begin, end);
	swap(a + begin, a + mid);

	int left = begin;
	int right = end;
	int keyi = left;

	while (left < right)
	{
		while (left < right && a[right] >= a[keyi])right--;
		//�ұ����ߣ���С
		while (left < right && a[left] <= a[keyi])left++;
		//������ߣ��Ҵ�
		swap(a + left, a + right);
	}
	swap(a + keyi, a + left);
	keyi = left;
	
	return keyi;
	
}


int PartSort2(int* a, int begin, int end)
{	//�ڿӷ�
	//���ڿӣ�����ӣ����ڿӣ�����ӡ�

	int mid = GetMidIndex(a, begin, end);
	swap(a + begin, a + mid);

	int left = begin;
	int right = end;
	int key = a[left];
	int hole = left;

	while (left < right)
	{
		while (left < right && a[right] >= key)right--;
		//�ұ��ҵ�һ����λ��Ҫ�ڿӺ����
		a[hole] = a[right];
		hole = right;
		while (left < right && a[left] <= key)left++;
		//�ҵ�һ����λ��Ҫ�ڿӺ����
		a[right] = a[left];
		hole = left;
	}
	a[hole] = key;
	return hole;
	
}


int PartSort3(int* a, int begin, int end)
{

}
