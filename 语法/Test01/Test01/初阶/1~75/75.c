//标题：倒置字符串 | 时间限制：1秒 | 内存限制：32768K | 语言限制： 不限
//【倒置字符串】将一句话的单词进行倒置，标点不倒置。比如 I like beijing.经过函数后变为：beijing.like I
//输入描述：
//每个测试输入包含1个测试用例： I like beijing.输入用例长度不超过100
//输出描述：
//依次输出倒置之后的字符串, 以空格分割
//示例1：
//输入
//I like beijing.
//输出
//beijing.like I
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//void convert(char* str, int length) {
//	int right = length-1;
//	int i = length - 1;
//	for (; i >= 0; i--) {
//		if (*(str + i) == ' ') {
//			int j = i + 1;
//			for (; j <= right; j++) {
//				printf("%c", *(str + j));
//			}
//			printf(" ");
//			right = i-1;
//		}
//
//		else if(i == 0) {
//			int j = i;
//			for (; j <= right; j++) {
//				printf("%c", *(str + j));
//			}
//		}
//		
//	}
//
//}
//int main() {
//
//	char input[100];
//	int len = 0;
//	do
//	{
//		scanf("%c", &input[len]);
//		if (input[len] == '\n')
//		{
//			input[len] = '\0';
//			break;
//		}
//		len++;
//	} while (1);
//	int length = strlen(input);
//	convert(input, length);
//
//}