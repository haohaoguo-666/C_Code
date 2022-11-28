//描述
//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
//
//输入描述：
//第一行为N M(N: 矩阵行数；M: 矩阵列数, 且M, N <= 10)，接下来的N行为矩阵各行。
//输出描述：
//一行，其中大于零的元素之和。
//示例1
//输入：
//3 3
//2 3 4
//- 5 - 9 - 7
//0 8 - 4
//输出：
//17
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int sum = 0;
//void statistics(int N, int M) {
//	int i = 0;
//	for (i = 0; i < N; i++) {
//		int j = 0;
//		int element = 0;
//		for (j = 0; j < M; j++) {
//			scanf("%d", &element);
//			if (element > 0) {
//				sum += element;
//			}
//		}
//		getchar();
//	}
//
//}
//int main() {
//	int N = 0;
//	int M = 0;
//	scanf("%d %d", &N, &M);
//	statistics(N, M);
//	printf("%d", sum);
//}