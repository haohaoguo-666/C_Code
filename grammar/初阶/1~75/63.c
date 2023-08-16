//求出0～100000之间的所有“水仙花数”并输出。
//
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int i = 0;
//	for (i = 0; i <= 100000; i++) {
//		int temp = i;
//		int sum = 0;
//		int math = 0;
//		int count = 0;
//		while (temp)
//		{
//			temp /= 10;//各位数
//			count++;
//		}
//		temp = i;
//		while (temp % 10 != 0) {
//			math = temp % 10;
//			sum += pow(math, count);
//			temp /= 10;
//		}
//		if (i == sum) {
//			printf("%d ", i);
//		}
//	}
//}

