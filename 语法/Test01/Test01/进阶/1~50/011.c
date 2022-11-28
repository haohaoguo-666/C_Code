////模拟实现strstr
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int cmp(char* p, char* q) {
//	while (q != '\0') {
//		if (*p == *q) {
//			p++;
//			q++;
//		}
//		else {
//			return 0;
//		}
//	}
//	return 1;
//}
//char* my_strstr(char* p, char* q) {
//	while (*p != '\0') {
//		if (*p == *q) {
//			if (cmp(p, q)) {
//				return q;
//			}
//			else {
//				p++;
//			}
//		}
//		else {
//			p++;
//		}
//		
//	}
//}
//int main() {
//	const char haystack[20] = "123NOOB";
//	const char needle[10] = "NOOB";
//	char* ret;
//
//	ret = my_strstr(haystack, needle);
//
//	printf("子字符串是： %s\n", ret);
//
//	return(0);
//}
