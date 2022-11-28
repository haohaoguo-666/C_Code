//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Fibonacci(int n) {
//	if (n <= 0) {
//		return 0;
//	}
//	else if (n == 1 || n == 2) {
//		return 1;
//	}
//	else {
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//	}
//}
//int Fibonacci(int n)
//{
//	if (n <= 0)
//		return 0;
//	if (n == 1 || n == 2)
//		return 1;
//	int numa = 1, numb = 1, num;
//	for (int i = 3; i <= n; ++i)
//	{
//		num = numa + numb;
//		numa = numb;
//		numb = num;
//	}
//	return numb;
//}
//
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fibonacci(n));
//}