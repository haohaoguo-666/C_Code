//ʵ��һ�����������������ַ����е�k���ַ���
//
//
//
//���磺
//
//
//
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB
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