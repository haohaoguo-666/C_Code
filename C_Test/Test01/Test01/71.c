//描述
//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
//输入描述：
//两行，第一行为n，表示n个成绩，不会大于10000。
//
//第二行为n个成绩（整数表示，范围0~100），以空格隔开。
//输出描述：
//一行，输出n个成绩中最高分数和最低分数的差。
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int n = 0;
//	int max = 0;
//	int min = 0;
//	int input = 0;
//	scanf("%d", &n);
//	scanf("%d", &input);
//	max = min = input;
//	while (n) {
//		scanf("%d", &input);
//		if (input > max) {
//			max = input;
//		}
//		else if (input < min) {
//			min = input;
//		}
//		n--;
//	}
//	printf("%d", max - min);
//	
//}