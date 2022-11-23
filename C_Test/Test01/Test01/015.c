//针对每组输入数据，输出占一行，如果能构成三角形，等边
//三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles
//triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//		int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
//		int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
//		int mid = a + b + c - max - min;
//		if (max - min < mid) {
//			if (max == min && min == mid) {
//				printf("Equilateral triangle!\n");
//			}
//			else if (max == mid || mid == min) {
//				printf("Isosceles triangle!\n");
//			}
//			else {
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else {
//			printf("Not a triangle!\n");
//		}
//	}
//}