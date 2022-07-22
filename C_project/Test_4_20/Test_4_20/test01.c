#define _CRT_SECURE_NO_WARNINGS
//判断一个数是不是素数
#include <stdio.h>
#include <math.h>

//int prime(int x) {
//	int j = 2;
//	for (j = 2; j <= sqrt(x); j++) {
//		if (x % j == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (0 == prime(i)) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//
//	return 0;
//}

////二分查找
//int sort(int arr[], int k, int length) {
//	int left = 0;
//	int right = length - 1;
//	int mid = left + (right - left) / 2;
//	do {
//		if (k == arr[mid]) {
//			return mid;
//		}
//		else if (k <= arr[mid]) {
//			right = mid - 1;
//			mid = left + (right - left) / 2;
//		}else{
//			left = mid + 1;
//			mid = left + (right - left) / 2;
//		}
//	} while (left <= right);
//	
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int k = 0;
//	scanf("%d", &k);
//	int length = sizeof(arr) / sizeof(arr[0]);
//
//	if (sort(arr, k, length) == 0) {
//		printf("没找到该数字");
//	}
//	else {
//		printf("找到该数字了,下标为%d",sort(arr, k, length));
//	}
//}
int prime(int y) {
	
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main()
{
	int input = 0;
	scanf("%d", &input);
	if (prime(input) == 1) {
		printf("%d年是闰年", input);
	}
	else {
		printf("%d年不是闰年", input);
	}
}