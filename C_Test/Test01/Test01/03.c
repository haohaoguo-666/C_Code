//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	int arr[100][100];
//	int n = 0;
//	scanf("%d", &n);
//	int i, j;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < i+1; j++) {
//			if (j == 0 || j == i) {
//				arr[i][j] = 1;
//			}
//			else {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < i + 1; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}