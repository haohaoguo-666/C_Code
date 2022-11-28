//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void exchange(int* p1, int* p2,int length) {
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		int temp = *(p1 + i);
//		*(p1 + i) = *(p2 + i);
//		*(p2 + i) = temp;
//	}
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,0 };
//	int length = sizeof(arr1) / sizeof(arr1[0]);
//	exchange(arr1, arr2, length);
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < length; i++) {
//		printf("%d ", arr2[i]);
//	}
//}