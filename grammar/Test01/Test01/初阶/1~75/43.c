//实现一个对整形数组的冒泡排序
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void bubble_sort(int* p, int length) {
//	int i = 0;
//	for (i = 0; i < length-1; i++) {
//		int j = 0;
//		for (j = 0; j < length - i-1; j++) {
//			if (*(p + j) > *(p + j + 1)) {
//				int temp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = temp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = {1,24,21,78,34,67};
//	int length = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, length);
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		printf("%d ", arr[i]);
//	}
//}