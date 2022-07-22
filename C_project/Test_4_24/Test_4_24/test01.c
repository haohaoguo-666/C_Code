#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void stmp(int* p1, int* p2,int length)
//{
//	int i = 0;
//	while (i < length) {
//	int temp = *p1;
//		*p1 = *p2;
//		*p2 = temp;
//		p1++;
//		p2++;
//		i++;
//	}
//	
//}
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int i = 0;
//	int length = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < length; i++) {
//		printf("arr1[%d]=%d\t",i,arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < length; i++) {
//		printf("arr2[%d]=%d\t", i, arr2[i]);
//	}
//	printf("\n");
//	printf("========交换两数组元素========");
//	printf("\n");
//	stmp(arr1, arr2,length);
//	for (i = 0; i < length; i++) {
//		printf("arr1[%d]=%d\t", i, arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < length; i++) {
//		printf("arr2[%d]=%d\t", i, arr2[i]);
//	}
//	return 0;
//}
//void init(int* p1, int length) {
//	int i = 0;
//	while (i < length) {
//		*p1 = 0;
//		p1++;
//		i++;
//	}
//}
//void print(int* p1, int length) {
//	int i = 0;
//	while (i < length) {
//		printf("arr[%d]=%d\t",i,*p1);
//		p1++;
//		i++;
//
//	}
//	printf("\n");
//}
//void reverse(int arr[], int length) {
//	int left = 0;
//	int right = length-1;
//	while (left <= right) {
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3};
//	int length = sizeof(arr) / sizeof(arr[0]);
//	
//	print(arr, length);
//	reverse(arr,length);
//	print(arr, length);
//	init(arr, length);
//	print(arr, length);
//
//}
//int Max(int* p, int n)
//{
//	int i = 0;
//	int max = *p;
//	for (i = 0; i < n - 1; i++) {
//		if (max < *(p + 1 + i)) {
//			max = *(p + 1 + i);
//		}
//	}
//	return max;
//}
//
//int Min(int* p, int n)
//{
//	int i = 0;
//	int min = *p;
//	for (i = 0; i < n - 1; i++) {
//		if (min > *(p + 1 + i)) {
//			min = *(p + 1 + i);
//		}
//	}
//	return min;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	for (i = 0; i < n - 1; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int max = Max(arr, n);
//	int min = Min(arr, n);
//	printf("%d", max - min);
//	return 0;
//}