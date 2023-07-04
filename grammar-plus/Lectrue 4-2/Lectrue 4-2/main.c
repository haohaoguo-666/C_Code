#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include <windows.h> 
//int main()
//{
//	char* c = NULL;
//	short* s = NULL;
//	int* i = NULL;
//	double* d = NULL;
//	printf("%d\n", c);
//	printf("%d\n\n", c + 1);
//
//	printf("%d\n", s);
//	printf("%d\n\n", s + 1);
//
//	printf("%d\n", i);
//	printf("%d\n\n", i + 1);
//
//	printf("%d\n", d);
//	printf("%d\n\n", d + 1);
//	system("pause");
//	return 0;
//}

//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	printf("%p\n", &arr[0]); //首元素的地址
//	printf("%p\n", &arr[0] + 1); //第二个元素的地址
//	printf("%p\n", &arr); //数组的地址
//	printf("%p\n", &arr + 1); //下一个数组的地址
//	system("pause");
//	return 0;
//}

//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	char* p = arr;
//	system("pause");
//	return 0;
//}

//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	arr = { 1, 2, 3, 4, 5 };
//	system("pause");
//	return 0;
//}

//#include <string.h>

//#define N 10
//int main()
//{
//	char* str = "abcdef"; //str指针变量在栈上保存，“abcdef”在字符常量区，不可被修改
//	char arr[] = "abcdef"; //整个数组都在栈上保存，可以被修改，这部分可以局部测试一下
//	////1. 以指针的形式访问指针和以下标的形式访问指针
//	printf("以指针的形式访问指针和以下标的形式访问指针\n");
//	int len = strlen(str);
//	for (int i = 0; i < len; i++) {
//		printf("%c\t", *(str + i));
//		printf("%c \n", str[i]);
//	} 
//	printf("\n");
//	//2. 以指针的形式访问数组和以下标的形式访问数组
//	printf("以指针的形式访问数组和以下标的形式访问数组\n");
//	len = strlen(arr);
//	for (int i = 0; i < len; i++) {
//		printf("%c\t", *(arr + i));
//		printf("%c \n", arr[i]);
//	} 
//	printf("\n");
//	system("pause");
//	return 0;
//}

//void InitArr(int* arr, int n)
//{
//	for (int i = 0; i < n; i++) {
//		*(arr + i) = i; //在这里只能以指针的形式访问
//	}
//}
//
//int main()
//{
//	int arr[N];
//	InitArr(arr, N);
//	for (int i = 0; i < N; i++) {
//		printf("%d\n", arr[i]); //以数组的形式访问
//	} 
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));
//	system("pause");
//	return 0;
//}


int main()
{
	char a[5] = { 'A','B','C','D' };
	char(*p3)[3] = &a;
	char(*p4)[3] = a;
	return 0;
}
