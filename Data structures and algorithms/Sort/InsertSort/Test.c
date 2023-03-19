#include "sort.h"

void TestSort()
{
	int a[] = { 1, 4, 13, 7, 2, 67, 34 };
	int n = sizeof(a) / sizeof(a[0]);
	InsertSort(a, n);
}

int main()
{
	TestSort();

	return 0;
}