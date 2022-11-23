//题目：
//
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void reset(int* p,int length) {
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		if (*(p + i) % 2 == 0) {
//			int j = i + 1;
//			int max = 0;
//			for (j = i + 1; j < length; j++) {
//				if (*(p + j) % 2 == 1) {
//					max = j;
//				}
//			}
//			if (max != 0) {
//				int temp = *(p + i);
//				*(p + i) = *(p + max);
//				*(p + max) = temp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[7] = { 0,1,2,3,4,6,453 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	reset(arr,length);
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		printf("%d ", arr[i]);
//	}
//}