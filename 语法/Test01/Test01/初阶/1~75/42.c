//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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