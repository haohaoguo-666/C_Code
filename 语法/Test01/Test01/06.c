//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
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