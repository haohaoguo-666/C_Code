//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////Êý×éÖ¸Õë
//void print(int(*p)[10], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", (*p)[i]);
//	}
//	printf("\n");
//}
//int main() {
//	
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr == &arr;
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", *(*(&arr) + i));
//	}
//	return 0;
//} 