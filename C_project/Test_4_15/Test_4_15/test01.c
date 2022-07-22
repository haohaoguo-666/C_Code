#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i; i < 4; i++) {
//		scanf("%d", &arr[i]);
//	}
//	i = 0;
//	for (i; i < 4; i++) {
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int one_of_sum = 0;
//	for (i = 1; i <= 10; i++) {
//		one_of_sum = 1;
//		for (j = 1; j <= i; j++) {
//			one_of_sum *= j;
//		}
//		sum += one_of_sum;
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int one_of_sum = 1;
//	for (i = 1; i <= 10; i++) {
//		one_of_sum *= i;
//		sum += one_of_sum;
//	}
//	printf("%d", sum);
//}
int main()
{
	int j = 0;
	scanf("%d", &j);
	int k = j;
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	
	int left = 0;
	int right = 9;
	int mid = (left + right) / 2;

	while (left <= right) {
		
		if (j < arr[mid]) {
			right = mid - 1;
		}
		else if(j > arr[mid]) {
			left = mid + 1;
		}
		else {
			printf("为数组第%d个元素",mid);
			break;
		}
		mid = (left + right) / 2;

	}

	return 0;
	
}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++) {
//		if (9 == i % 10) {
//			sum++;
//		}
//	}
//	printf("%d", sum);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++) {
//		if (0 == i % 2) {
//			sum -= 1.0 / i;
//		}
//		else {
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf", sum);
//
//	return 0;
//}
//int main()
//{
//	int j = 0;
//	int i = 1;
//	scanf("%d", &j);
//	int max = j;
//	while (i < 10) {
//		scanf("%d", &j);
//		if (max < j) {
//			max = j;
//		}
//		i++;
//	}
//
//	printf("%d", max);
//	
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = i; j <= 9; j++) {
//			printf("%d * %d = %d\t", i, j, i * j);
//		}
//		printf("\n");
//		for (k = 0; k <= i - 1; k++) {
//			printf("               \t");
//		}
//	}
//}