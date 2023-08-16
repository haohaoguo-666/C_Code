#include "sort.h"
#include "stack.h"


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
			return begin;
		else if (a[mid] > a[end])
			return mid;
		else
			return end;
	}
	else
	{//a[begin] <= a[end]
		if (a[mid] > a[end])
			return end;
		else if (a[mid] > a[begin])
			return mid;
		else
			return begin;
	}

}


void QuickSort(int* a, int begin, int end)
{
	if (begin >= end) return;
	
	//if (end - begin + 1 < 15)
	//{
	//	// С������ֱ�Ӳ�����棬���ٵݹ���ô���
	//	InsertSort(a+begin, end - begin + 1);
	//}
	//else
	//{
		/*int mid = GetMidIndex(a, begin, end);
		swap(a + begin, a + mid);*/

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
		//int keyi = PartSort1(a, begin, end);
		//int keyi = PartSort2(a, begin, end);
		int keyi = PartSort3(a, begin, end);

		QuickSort(a, begin, keyi - 1);
		QuickSort(a, keyi + 1, end);
	//}
	
	
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
{//�Ѵ���Ƶ��ұ�ȥ����С���Ƶ����ȥ
	int mid = GetMidIndex(a, begin, end);
	swap(a + begin, a + mid);

	int cur = begin + 1;
	int prev = begin;
	int keyi = begin;
	/*for (; cur < end + 1; cur++)
	{
		if (a[cur] > a[keyi])
		{
			prev++;
			swap(a + prev, a + cur);
		}
	}*/
	while (cur <= end)
	{
		if (a[cur] > a[keyi] && ++prev != cur)
		{
			swap(&a[++prev], &a[cur]);
		}
		cur++;
		
	}
	swap(a + prev, a + keyi);
	return prev;
}

void QuickSort1(int* a, int begin, int end)
{// ��·����
	if (begin >= end) return;

	int mid = GetMidIndex(a, begin, end);
	swap(a + begin, a + mid);

	int left = begin;
	int right = end;
	int cur = begin + 1;
	int key = a[left];

	while (cur <= right)
	{
		if (a[cur] < key)
		{
			swap(&a[cur], &a[left]);
			cur++;
			left++;
		}
		else if (a[cur] > key)
		{
			swap(&a[cur], &a[right]);
			right--;
		}
		else
		{
			cur++;
		}

	}
	//[begin, left -1][left, right][right+1, end]
	QuickSort1(a, begin, left-1);
	QuickSort1(a, right + 1, end);
	
}
void QuickSortNonR(int* a, int begin, int end)
{
	ST st;
	StackInit(&st);
	StackPush(&st, begin);
	StackPush(&st, end);
	while (!StackEmpty(&st))
	{
		int right = StackTop(&st);
		StackPop(&st);
		int left = StackTop(&st);
		StackPop(&st);

		int keyi = PartSort1(a, left, right);

		if (keyi + 1 < right)
		{
			StackPush(&st, keyi + 1);
			StackPush(&st, right);
		}
		
		if (left < keyi - 1)
		{
			StackPush(&st, left);
			StackPush(&st, keyi - 1);
		}
		
	}
}

//void MergeSort(int* a, int n)
//{
//	if (n == 1 || n == 0) return;
//
//	int keyi = n / 2;
//	MergeSort(a, keyi);
//	MergeSort(a + keyi, n - keyi);
//	
//	int cur = 0;
//	int prev = keyi;
//	int* array = (int*)malloc(sizeof(int*) * n);
//	int i = 0;
//	while (cur < keyi && prev < n)
//	{
//		if (a[cur] < a[prev])
//			array[i++] = a[cur++];
//		else
//			array[i++] = a[prev++];
//	}
//	while(cur < keyi)array[i++] = a[cur++];
//	while(prev < n)array[i++] = a[prev++];
//
//	for (int j = 0; j < n; j++)
//	{
//		a[j] = array[j];
//	}
//
//}
void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end) return;
	int mid = (begin + end) / 2;
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);

	//�鲢
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] >= a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}

	while (begin1 <= end1)tmp[i++] = a[begin1++];
	while (begin2 <= end2)tmp[i++] = a[begin2++];

	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));



}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	_MergeSort(a, 0, n - 1, tmp);

	free(tmp);
	tmp = NULL;

}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	//�鲢ÿ�����ݸ�������1��ʼ����Ϊ1����Ϊ������ģ�����ֱ�ӹ鲢
	int rangeN = 1;

	while (rangeN < n)
	{
		for (int i = 0; i < n; i += 2 * rangeN)
		{
			//�鲢
			int begin1 = i, end1 = i + rangeN - 1;
			int begin2 = i + rangeN, end2 = i + 2 * rangeN - 1;
			
			if (end1 >= n)
			{//end1 begin2 end2 Խ��
				//�������� ->�������� 
				end1 = n - 1;
				//����������
				begin2 = n;

				end2 = n - 1;
			}
			else if (begin2 >= n)
			{//begin2 end2 Խ��
				begin2 = n;

				end2 = n - 1;
			}
			else if (end2 >= n)
			{//end2 Խ��
				end2 = n - 1;
			}
			
			
			int j = i;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] >= a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}

			while (begin1 <= end1)tmp[j++] = a[begin1++];
			while (begin2 <= end2)tmp[j++] = a[begin2++];
			
		}
		//����鲢���ٿ���
		memcpy(a, tmp, sizeof(int)* (n));
		rangeN *= 2;
	}
	
	free(tmp);
	tmp = NULL;
}


//void MergeSortNonR(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//	if (tmp == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	//�鲢ÿ�����ݸ�������1��ʼ����Ϊ1����Ϊ������ģ�����ֱ�ӹ鲢
//	int rangeN = 1;
//
//	while (rangeN < n)
//	{
//		for (int i = 0; i < n; i += 2 * rangeN)
//		{
//			//�鲢
//			int begin1 = i, end1 = i + rangeN - 1;
//			int begin2 = i + rangeN, end2 = i + 2 * rangeN - 1;
//			//end1 begin2 end2 Խ��
//			if (end1 >= n)
//			{
//				break;
//			}
//			else if (begin2 >= n)
//			{//begin2 end2 Խ��
//				break;
//			}
//			else if (end2 >= n)
//			{//end2 Խ��
//				end2 = n - 1;
//			}
//				
//
//			int j = i;
//			while (begin1 <= end1 && begin2 <= end2)
//			{
//				if (a[begin1] >= a[begin2])
//				{
//					tmp[j++] = a[begin1++];
//				}
//				else
//				{
//					tmp[j++] = a[begin2++];
//				}
//			}
//
//			while (begin1 <= end1)tmp[j++] = a[begin1++];
//			while (begin2 <= end2)tmp[j++] = a[begin2++];
//			
//			//�鲢һ���֣�����һ����
//			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
//		}
//		
//
//		rangeN *= 2;
//	}
//	
//
//	free(tmp);
//	tmp = NULL;
//}

void CountSort(int* a, int n)
{//��������
	int max = a[0], min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	int range = max - min + 1;
	int* countA = (int*)calloc(range,sizeof(int));
	if (countA == NULL)
	{
		printf("calloc fail");
		exit(-1);
	}
	//1. ͳ�ƴ���
	for (int i = 0; i < n; i++)
	{
		countA[a[i] - min]++;
	}
	//2. ����
	int k = 0;
	for (int j = 0; j < range; j++)
	{
		while (countA[j]--)
			a[k++] = j + min;
	}

	free(countA);
	
}
