//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//char* my_strcat(char* p, char* q) {
//	char* a = p;
//	while (*p != '\0') {
//		p++;
//	}
//	while (*q != '\0') {
//		*p = *q;
//		p++;
//		q++;
//	}
//	*p = '\0';
//	return a;
//}
//
//int main()
//{
//	char src[50], dest[50];
//
//	strcpy(src, "This is source");
//	strcpy(dest, "This is destination");
//
//	my_strcat(dest, src);
//
//	printf("最终的目标字符串： |%s|", dest);
//
//	return(0);
//}