//实现一个函数，可以左旋字符串中的k个字符。
//
//
//
//例如：
//
//
//
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//void spin(char* pa, int n) {
//	n = n % strlen(pa);
//	char* p = pa;
//	while (n--) {
//		char a = *pa;
//		while (*(pa+1) != '\0') {
//			*pa = *(pa+1);
//			  pa++;
//		}
//		*pa = a;
//		pa = p;
//	}
//	
//}
//int main() {
//	char pa[] = "ABCD";
//	int n;
//	scanf("%d", &n);
//	spin(pa, n);
//	printf("%s", pa);
//}