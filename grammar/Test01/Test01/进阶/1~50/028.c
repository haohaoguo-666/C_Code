////一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
////编写一个函数找出这两个只出现一次的数字。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void single(int* p,int length) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < length; i++) {
//		int sum = 0;
//		for (j = 0; j < length; j++) {
//			if (p[i] == p[j])sum++;
//		}
//		if (sum == 1) {
//			printf("%d\n", p[i]);
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,1,2,3,4,4,5,5 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	single(arr,length);
//}