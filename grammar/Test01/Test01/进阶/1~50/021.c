//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main() {
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//	//printf("%d\n", strlen(arr));//未知数
//	//printf("%d\n", strlen(arr + 0));//未知数
//	////printf("%d\n", strlen(*arr));//数据类型不匹配
//	////printf("%d\n", strlen(arr[1]));//数据类型不匹配
//	////printf("%d\n", strlen(&arr));//数据类型不匹配
//	////printf("%d\n", strlen(&arr + 1));//数据类型不匹配
//	//printf("%d\n", strlen(&arr[0] + 1));//未知数
//	//char arr[] = "abcdef";
//	//printf("%d\n", sizeof(arr));//7
//	//printf("%d\n", sizeof(arr + 0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr + 1));//4
//	//printf("%d\n", sizeof(&arr[0] + 1));//4
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//数据类型不匹配
//	////printf("%d\n", strlen(arr[1]));//数据类型不匹配
//	////printf("%d\n", strlen(&arr));//数据类型不匹配
//	////printf("%d\n", strlen(&arr + 1));//数据类型不匹配
//	//printf("%d\n", strlen(&arr[0] + 1));//5
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(p + 1));//4
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4
//	printf("%d\n", sizeof(&p + 1));//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//类型不匹配
//	//printf("%d\n", strlen(p[0]));//类型不匹配
//	//printf("%d\n", strlen(&p));//类型不匹配
//	//printf("%d\n", strlen(&p + 1));//类型不匹配
//	printf("%d\n", strlen(&p[0] + 1));//5
//}