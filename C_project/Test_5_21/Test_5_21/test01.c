#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//有序序列合并
//void input(int* p1, int length)
//{
//	int i = 0;
//	while (i < length)
//	{
//		scanf("%d", &(* (p1 + i)));
//		i++;
//	}
//}
//void fusion(int* p1, int n, int* p2, int m)
//{
//	int i = 0;
//	int j = 0;
//	while (i < n||j < m)
//	{
//		if (*(p1 + i) <= *(p2 + j)) {
//			printf("%d ", *(p1 + i));
//			i++;
//		}
//		else {
//			printf("%d ", *(p2 + j));
//			j++;
//		}
//	}
//	if (i == n && j < m)
//		for (; j < m; j++)
//			printf("%d ", *(p2 + j));
//	else
//		for (; i < n; i++)
//			printf("%d ", *(p1 + i));
//}
//int main()
//{
//	int n = 4;
//	int m = 5;
//	scanf("%d %d", &n, &m);
//	int arr1[4];
//	int arr2[5];
//	input(arr1,n);
//	input(arr2,m);
//	fusion(arr1, n, arr2, m);
//
//}

//小乐乐改数字
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int sum = 0;
//	while (n)
//	{	
//		count++;
//		if (n % 2 == 1) {
//			sum += pow(10, count-1);
//		}
//		n = n / 10;
//		
//	}
//	printf("%d", sum);
//	return 0;
//}
//带空格直角三角形图案
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		int j = n - i ;
//		while (j > 0) {
//			printf("  ");
//			j--;
//		}
//		int k = 0;
//		while ( k < i) {
//			printf("* ");
//			k++;
//		}
//		printf("\n");
//	}
//	return 0;
//}
//网购


int main() {
    float price = 0;
    int month, day, hasP = 0;
    scanf("%f %d %d %d", &price, &month, &day, &hasP);
    float cut = 0;
    if (month == 11 && day == 11) {
        cut = 0.7;
    }
    else if (month == 12 && day == 12) {
        cut = 0.8;
    }
    float pay = price * cut - 50 * hasP;
    if (pay <= 0) {
        printf("0.00");
    }
    else {
        printf("%.2f", pay);
    }
}