////有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int arr[51] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int length = n - 1;
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int math = 0;
//	scanf("%d", &math);
//	for (i = 0; i < n; i++) {
//		if (arr[i] > math) {
//			break;
//		}
//	}
//	for (; length > i; length--) {
//		arr[length] = arr[length - 1];
//	}
//	arr[i] = math;
//	for (i = 0; i < n+1; i++) {
//		printf("%d ", arr[i]);
//	}
//	
//
//}
