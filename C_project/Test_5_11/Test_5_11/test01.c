#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <math.h>
//int main()
//{
//	int a = 0;
//	int* p1 = &a;
//	float* p2 = &a;
//	*p1 = 100;
//	*p2 = 100.0;
//
//
//}

//打印字符数组

//int main()
//{
//	char arr[5] = "abcd";
//	input(arr);
//
//	return;
//}

//字符串逆序
//void input(char* parr)
//{
//	int i = 0;
//	while (*(parr + i) != '\0') {
//		printf("%c", *(parr + i));
//		i++;
//	}
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//void stremp(char* parr2)
//{
//	int right = my_strlen(parr2) - 1;
//	int left = 0;
//	char stmp = 'a';
//	while (left <= right)
//	{
//
//		stmp = *(parr2 + right);
//		*(parr2 + right) = *(parr2 + left);
//		*(parr2 + left) = stmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[10000] = { 0 };
//	int i = 0;
//	/*while (scanf("%c", &arr[i]))
//	{
//		if ((arr[i]) == '\n'){
//			arr[i + 1] = '\0';
//			break;
//
//
//		}
//		i++;
//	}*/
//	gets(arr);
//	stremp(arr);
//	input(arr);
//}

//计算求和
//int input(int a)
//{
//	
//	return a * (1 + 11 + 111 + 1111 + 11111);
//	 
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",input(a));
//
//}

//打印水仙花数

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//打印菱形
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < n - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}