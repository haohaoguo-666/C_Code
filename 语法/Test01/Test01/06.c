//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int spin(char* pa ,char* pb) {
//	int n = strlen(pa);
//	char* p = pa;
//	while (n--) {
//		char a = *pa;
//		while (*(pa + 1) != '\0') {
//			*pa = *(pa + 1);
//			pa++;
//		}
//		*pa = a;
//		pa = p;
//		if (!strcmp(pa, pb)) {
//			return 1;
//		}
//	}
//	return 0;
//
//}
//int main() {
//	char pa[] = "ABCD";
//	char pb[] = "CDAB";
//	printf("%d", spin(pa, pb));
//}