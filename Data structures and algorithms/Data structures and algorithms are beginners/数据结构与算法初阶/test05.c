
//88. �ϲ�������������
//���������� �ǵݼ�˳�� ���е��������� nums1 �� nums2�������������� m �� n ���ֱ��ʾ nums1 �� nums2 �е�Ԫ����Ŀ��
//
//���� �ϲ� nums2 �� nums1 �У�ʹ�ϲ��������ͬ���� �ǵݼ�˳�� ���С�
//
//ע�⣺���գ��ϲ������鲻Ӧ�ɺ������أ����Ǵ洢������ nums1 �С�Ϊ��Ӧ�����������nums1 �ĳ�ʼ����Ϊ m + n������ǰ m ��Ԫ�ر�ʾӦ�ϲ���Ԫ�أ��� n ��Ԫ��Ϊ 0 ��Ӧ���ԡ�nums2 �ĳ���Ϊ n ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//˼·1
//ֱ����nums1�в���
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//
//	int i = 0;
//	int j = 0;
//	for (; i < m+n &&  j < n;) {
//		//�Ƚ����������Ԫ��
//		if (nums1[i] > nums2[j]) {
//			//nums1���ֺ���
//
//			int k = nums1Size - 1;
//			for (; k > i; k--) {
//				nums1[k] = nums1[k-1];
//			}
//			nums1[i] = nums2[j];
//			i++;
//			j++;
//		}
//			//nums1ĩβֱ�����
//		else if (nums1[i] == 0 && i >= m+j-1) {
//			nums1[i] = nums2[j];
//			i++;
//			j++;
//		}
//		else {	
//			//nums1���ֲ�����
//			i++;
//		}
//	}
//}

//˼·��
//��ָ�� 
//�汾һ
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int src = n - 1;
	int des = m - 1;
	int	 back = m + n - 1;
	while (back >= 0) {
		//nums2Ԫ�ش���nums1Ԫ��
		if (nums2[src] > nums1[des]) {
			nums1[back--] = nums2[src--];
			if (src < 0) {
				while (des >= 0) {
					nums1[back--] = nums1[des--];
				}
			}
		}
		//nums2Ԫ��С��numsԪ��
		else {
			nums1[back--] = nums1[des--];
			if (des < 0) {
				while ( src >= 0) {
					nums1[back--] = nums2[src--];
				}
			}
		}
	}
}
//�汾��
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int src = n - 1;
	int des = m - 1;
	int	 back = m + n - 1;
	while (src >=0 && des >=0) {
		//nums2Ԫ�ش���nums1Ԫ��
		if (nums2[src] > nums1[des]) {
			nums1[back--] = nums2[src--];
		}
		//nums2Ԫ��С��numsԪ��
		else {
			nums1[back--] = nums1[des--];
		}
	}
	while (src >= 0) {
		nums1[back--] = nums2[src--];
	}
}

int main() {
	int arr1[] = {1,2,3,0,0,0};
	int arr2[] = { 2,5,7 };
	merge(arr1, 6, 3, arr2, 3, 3);
	int i = 0;
	for (i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}


}