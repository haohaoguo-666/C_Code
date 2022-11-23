//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void print(int* p, int length) {
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		printf("%d ", *(p + i));
//	}
//}
//void reverse(int* p, int length) {
//	int left = 0;
//	int right = length - 1;
//	while(left < right) {
//		int temp = *(p + left);
//		*(p + left) = * (p + right);
//		*(p + right) = temp;
//		left++;
//		right--;
//	}
//	print(p, length);
//}
//void init(int* p, int length) {
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		*(p + i) = 0;
//		printf("%d ", *(p + i));
//	}
//}
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	print(arr, length);
//	printf("\n");
//	reverse(arr, length);
//	printf("\n");
//	init(arr, length);
//	
//}