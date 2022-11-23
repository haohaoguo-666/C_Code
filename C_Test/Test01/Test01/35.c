//编写一个函数 reverse_string(char* string)（递归实现）
//
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//
//要求：不能使用C函数库中的字符串操作函数。
//
//比如 :
//
//char arr[] = "abcdef";
//
//
//逆序之后数组的内容变成：fedcba
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>
//void reverse_string(char* arr)
//{
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//
//
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//
//
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	
//
//}