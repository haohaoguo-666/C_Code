//写代码将三个整数数按从大到小输出。
//
//例如：
//
//输入：2 3 1
//
//输出：3 2 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int i = 0;
//	int length = 3;
//	int arr[3];
//	for (i = 0; i < 3; i++) {
//		scanf("%d", (arr+i));
//	}
//	for (i = 0; i < length - 1; i++) {
//		int j = length - 1;
//		for (; j >= i+1; j--) {
//			if(arr[j] > arr[j - 1]){
//				int temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//}
//		}
//	}
//	for (i = 0; i < 3; i++) {
//		printf("%d ", arr[i]);
//	}
//
//}