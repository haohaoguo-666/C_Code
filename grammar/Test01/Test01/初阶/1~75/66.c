//描述
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）, （14和61）, （146和1), 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//
//例如：
//
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//求出 5位数中的所有 Lily Number。
//
//输入描述：
//无
//输出描述：
//一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int shuixianhua(int n) {
//	int i = 10;
//	int j = 1;
//	for (j = 1; j <= 4; j++) {
//		n -= ((int)(n / (int)pow(10, i)) * (n % (int)pow(10, i)));
//	}
//	return n;
//}
//int main() {
//	int i = 10000;
//	for (i = 10000; i <= 99999; i++) {
//		if (0==shuixianhua(i)) {
//			printf("%d ", i);
//		}
//	}
//
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 10000;
//    for (n = 10000; n < 100000; n++) {
//        if (n == ((n / 10000) * (n % 10000) + (n / 1000) * (n % 1000) + (n / 100) * (n % 100) + (n / 10) * (n % 10))) {
//            printf("%d ", n);
//        }
//    }
//    return 0;
//}