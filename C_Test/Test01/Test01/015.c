//���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ�
//�������������Equilateral triangle!���������������������Isosceles
//triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����
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