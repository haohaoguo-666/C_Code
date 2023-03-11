//27. 移除元素
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//思路1
//找到一个就删除一个 时间：O(N^2) 空间：O(1)
//int removeElement(int* nums, int numsSize, int val) {
//	int length = numsSize;
//	int i = 0;
//	//查找val
//	for (i = 0; i < length;) {
//		if (val == nums[i]) {
//			//数组部分前移
//			int j = i;
//			for (; j < length - 1; j++) {
//				nums[j] = nums[j + 1];
//			}
//			length -- ;
//		}
//		else {
//			//数组部分不前移
//			i++;
//		}
//		
//	}
//	return length;
//}
//
////思路2
////双指针 O(N) 时间：O(N）空间：O(1)
////版本1
//int removeElement(int* nums, int numsSize, int val) {
//	int* src = nums;
//	int* des = nums;
//	int newLength = 0;
//	int i = 0;
//	//找val
//	for (i = 0; i<numsSize; i++) {
//		//不是val,放入des
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
////版本2
//int removeElement(int* nums, int numsSize, int val) {
//	int src = 0;
//	int des = 0;
//	int newLength = 0;
//	while (src < numsSize) {
//		//找到了一个val
//		if (nums[src] == val) {
//			nums[des++] = nums[src++];
//			newLength++;
//		}
//		//不是val
//		else {
//			src++;
//		}
//	}
//	return newLength;
//
//}