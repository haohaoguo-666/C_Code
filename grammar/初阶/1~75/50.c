#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(int n,int m,int *p) {
//	
//	int i = 0;
//	for (i = m; i < 32;) {
//		if ((n & (1 << i)) != 0) {
//			p[i / 2] = 1;
//		}
//		else {
//			p[i / 2] = 0;
//		}
//		i += 2;
//	}
//	
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[16] = { 0 };
//	print(n, 1,arr1);
//	int arr2[16] = { 0 };
//	print(n, 0,arr2);
//	int i = 15;
//	printf("偶数位：");
//	for (i = 15; i >= 0; i--) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("奇数位：");
//	for (i = 15; i >= 0; i--) {
//		printf("%d ", arr2[i]);
//	}
//}