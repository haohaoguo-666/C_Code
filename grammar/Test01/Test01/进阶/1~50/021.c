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
//	//printf("%d\n", strlen(arr));//δ֪��
//	//printf("%d\n", strlen(arr + 0));//δ֪��
//	////printf("%d\n", strlen(*arr));//�������Ͳ�ƥ��
//	////printf("%d\n", strlen(arr[1]));//�������Ͳ�ƥ��
//	////printf("%d\n", strlen(&arr));//�������Ͳ�ƥ��
//	////printf("%d\n", strlen(&arr + 1));//�������Ͳ�ƥ��
//	//printf("%d\n", strlen(&arr[0] + 1));//δ֪��
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
//	////printf("%d\n", strlen(*arr));//�������Ͳ�ƥ��
//	////printf("%d\n", strlen(arr[1]));//�������Ͳ�ƥ��
//	////printf("%d\n", strlen(&arr));//�������Ͳ�ƥ��
//	////printf("%d\n", strlen(&arr + 1));//�������Ͳ�ƥ��
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
//	//printf("%d\n", strlen(*p));//���Ͳ�ƥ��
//	//printf("%d\n", strlen(p[0]));//���Ͳ�ƥ��
//	//printf("%d\n", strlen(&p));//���Ͳ�ƥ��
//	//printf("%d\n", strlen(&p + 1));//���Ͳ�ƥ��
//	printf("%d\n", strlen(&p[0] + 1));//5
//}