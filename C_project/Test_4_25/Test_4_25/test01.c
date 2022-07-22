#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[2][3] = { {2,3},{3,1}};
//}
//void sort(int arr[],int length)
//{
//	int i = 0;
//	for (i = length - 1; i >= 1; i--)
//	{
//		int j = 0;
//		for (j = 0; j <= i-1; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,34,12,54,22,24,67 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,length);
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		printf("arr[%d]=%d\n", i, arr[i]);
//	}
//}

//int main()
//{
//	char arr[2][2] = { 'n','a','d','\0'};
//	printf("%s", arr);
//}

//×ßÌ¨½×
//int reverse(int n)
//{
//	if (n == 1) {
//		return 1;
//	}
//	else if (n == 2) {
//		return 2;
//	}
//	else {
//		return reverse(n - 1)  + reverse(n - 2) ;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int output = reverse(n);
//	printf("%d", output);
//	return 0;
//}
int main()
{
	char arr[4] = "abc";
	printf("%s", arr);
}