//27. �Ƴ�Ԫ��
//����һ������ nums ��һ��ֵ val������Ҫ ԭ�� �Ƴ�������ֵ���� val ��Ԫ�أ��������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬������ʹ�� O(1) ����ռ䲢 ԭ�� �޸��������顣
//
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//˼·1
//�ҵ�һ����ɾ��һ�� ʱ�䣺O(N^2) �ռ䣺O(1)
//int removeElement(int* nums, int numsSize, int val) {
//	int length = numsSize;
//	int i = 0;
//	//����val
//	for (i = 0; i < length;) {
//		if (val == nums[i]) {
//			//���鲿��ǰ��
//			int j = i;
//			for (; j < length - 1; j++) {
//				nums[j] = nums[j + 1];
//			}
//			length -- ;
//		}
//		else {
//			//���鲿�ֲ�ǰ��
//			i++;
//		}
//		
//	}
//	return length;
//}
//
////˼·2
////˫ָ�� O(N) ʱ�䣺O(N���ռ䣺O(1)
////�汾1
//int removeElement(int* nums, int numsSize, int val) {
//	int* src = nums;
//	int* des = nums;
//	int newLength = 0;
//	int i = 0;
//	//��val
//	for (i = 0; i<numsSize; i++) {
//		//����val,����des
//		if (*(src + i) != val){
//			*des = *(src+i);
//			des++;
//			newLength++;
//		}
//	}
//	return newLength;
//
//}
//
////�汾2
//int removeElement(int* nums, int numsSize, int val) {
//	int src = 0;
//	int des = 0;
//	int newLength = 0;
//	while (src < numsSize) {
//		//�ҵ���һ��val
//		if (nums[src] == val) {
//			nums[des++] = nums[src++];
//			newLength++;
//		}
//		//����val
//		else {
//			src++;
//		}
//	}
//	return newLength;
//
//}