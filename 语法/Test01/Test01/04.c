//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//
//
//
//要求：时间复杂度小于O(N);
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	int arr[4][4] = { {1,5,7,9},{4,6,10,15},{8,11,12,19},{14,16,18,21} };
//	int i = 0;
//	int j = 3;
//	int figure;
//	scanf("%d", &figure);
//	for (i = 0, j = 3; i <= 3 && j >= 0;) {
//		if (arr[i][j] == figure) {
//			printf("找了在第%d 行,第%d 列", i+1, j+1);
//			break;
//		}
//		else if (arr[i][j] < figure) {
//			i++;
//		}else{
//			j--;
//		}
//	}
//	if (i  > 3 || j < 0) {
//		printf("没找到该数字");
//	}
//}