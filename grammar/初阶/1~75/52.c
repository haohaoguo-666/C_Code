//描述
//小乐乐在课上学习了二进制八进制与十六进制后，对进制转换产生了浓厚的兴趣。因为他的幸运数字是6，所以他想知道一个数表示为六进制后的结果。请你帮助他解决这个问题。
//
//输入描述：
//输入一个正整数n(1 ≤ n ≤ 109)
//
//输出描述：
//输出一行，为正整数n表示为六进制的结果

//示例1
//输入：
//6
//输出：
//10

//示例2
//输入：
//120
//输出：
//320

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void print(int n) {
//	if (n > 5) {
//		print(n / 6);
//	}
//	printf("%d", n % 6);
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	//用递归解决
//	print(n);
//}