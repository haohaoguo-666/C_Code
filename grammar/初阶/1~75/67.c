//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//
//����ż��λ������ĺ�벿�֡�
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void reset(int* p,int length) {
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		if (*(p + i) % 2 == 0) {
//			int j = i + 1;
//			int max = 0;
//			for (j = i + 1; j < length; j++) {
//				if (*(p + j) % 2 == 1) {
//					max = j;
//				}
//			}
//			if (max != 0) {
//				int temp = *(p + i);
//				*(p + i) = *(p + max);
//				*(p + max) = temp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[7] = { 0,1,2,3,4,6,453 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	reset(arr,length);
//	int i = 0;
//	for (i = 0; i < length; i++) {
//		printf("%d ", arr[i]);
//	}
//}