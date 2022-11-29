//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
//
//数据范围： - 2 ^ {31} <= n <= 2 ^ {31} - 1−2
//31
//<= n <= 2
//31
//−1
//即范围为 : -2147483648 <= n <= 2147483647−2147483648 <= n <= 2147483647
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int NumberOf1(int n) {
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 32; i++) {
//		if ( 0 != (n & (1 << i))) {
//			sum++;
//		}
//	}
//	return sum;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", NumberOf1(n));
//	return 0;
//}