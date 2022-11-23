//描述
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//
//数据范围： 1 \le n, m \le 1000 \1≤n, m≤1000  ， 序列中的值满足 0 \le val \le 30000 \0≤val≤30000
//输入描述：
//输入包含三行，
//
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//
//第二行包含n个整数，用空格分隔。
//
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
//示例1
//输入：
//5 6
//1 3 7 9 22
//2 8 10 17 33 44
//复制
//输出：
//1 2 3 7 8 9 10 17 22 33 44
//复制
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void unite(int* p1, int* p2,int n,int m) {
//	int i = 0;
//	int j = 0;
//	while (i < n&&j < m) {
//		
//		if (*(p1 + i) < *(p2 + j)) {
//			printf("%d ", *(p1 + i));
//			i++;
//			if (i == n&&j!=m) {
//				for (; j < m; j++) {
//					printf("%d", *(p2 + j));
//				}
//			}
//		}
//		else if (*(p1 + i) > *(p2 + j)) {
//			printf("%d ", *(p2 + j));
//			j++;
//			if (i != n && j == m) {
//				for (; i < n; i++) {
//					printf("%d", *(p1 + i));
//				}
//			}
//		}
//		else {
//			printf("%d ", *(p1 + i));
//			printf("%d ", *(p2 + j));
//			i++;
//			j++;
//		}
//	}
//}
//int main() {
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[n];
//	int arr2[m];
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", arr1 + i);
//	}
//	int j = 0;
//	for (j = 0; j < m; j++) {
//		scanf("%d", arr2 + j);
//	}
//	unite(arr1, arr2, n, m);
//}