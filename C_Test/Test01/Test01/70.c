//描述
//输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序(相同元素也视为有序)。
//
//数据范围： 3 \le n \le 50 \3≤n≤50  序列中的值都满足 1 \le val \le 100 \1≤val≤100
//输入描述：
//第一行输入一个整数N(3≤N≤50)。
//第二行输入N个整数，用空格分隔N个整数。
//输出描述：
//输出为一行，如果序列有序输出sorted，否则输出unsorted。
//示例1
//输入：
//5
//1 6 9 22 30
//
//输出：
//sorted
//
//示例2
//输入：
//5
//3 4 7 2 10
//
//输出：
//unsorted

#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &n);
//	scanf("%d", &a);
//	scanf("%d", &b);
//	if (a >= b) {
//		while (n) {
//			a = b;
//			scanf("%d", &b);
//			if (b <= a) {
//				n--;
//			}
//			else {
//				printf("unsorted");
//				break;
//			}
//
//		}
//	}
//	else if (a <= b) {
//		while (n) {
//			a = b;
//			scanf("%d", &b);
//			if (b >= a) {
//				n--;
//			}
//			else {
//				printf("unsorted");
//				break;
//			}
//
//		}
//	}
//	if (n == 0) {
//		printf("sorted");
//	}
//	
//}