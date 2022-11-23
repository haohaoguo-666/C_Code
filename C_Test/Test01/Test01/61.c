//写一个函数，可以逆序一个字符串的内容。
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void reverse(char* p) {
//	char temp = *p;
//	int length = strlen(p);
//	*p = *(p + length - 1);
//	*(p + length - 1) = '\0';
//	if (*(p + 1) != '\0') {
//		reverse(p + 1);
//	}
//	*(p + length - 1) = temp;
//}
//int main() {
//	char arr[10000] = { 0 };
//	int i = 0;
//	while ((arr[i] = getchar())!='\n') {
//		i++;
//	}
//	arr[i] = '\0';
//	reverse(arr);
//	printf("%s", arr);
//}