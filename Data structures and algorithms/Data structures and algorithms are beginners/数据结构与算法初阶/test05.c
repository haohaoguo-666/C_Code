
//88. 合并两个有序数组
//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//思路1
//直接在nums1中插入
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//
//	int i = 0;
//	int j = 0;
//	for (; i < m+n &&  j < n;) {
//		//比较两个数组的元素
//		if (nums1[i] > nums2[j]) {
//			//nums1部分后移
//
//			int k = nums1Size - 1;
//			for (; k > i; k--) {
//				nums1[k] = nums1[k-1];
//			}
//			nums1[i] = nums2[j];
//			i++;
//			j++;
//		}
//			//nums1末尾直接添加
//		else if (nums1[i] == 0 && i >= m+j-1) {
//			nums1[i] = nums2[j];
//			i++;
//			j++;
//		}
//		else {	
//			//nums1部分不后移
//			i++;
//		}
//	}
//}

//思路二
//三指针 
//版本一
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int src = n - 1;
	int des = m - 1;
	int	 back = m + n - 1;
	while (back >= 0) {
		//nums2元素大于nums1元素
		if (nums2[src] > nums1[des]) {
			nums1[back--] = nums2[src--];
			if (src < 0) {
				while (des >= 0) {
					nums1[back--] = nums1[des--];
				}
			}
		}
		//nums2元素小于nums元素
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
//版本二
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int src = n - 1;
	int des = m - 1;
	int	 back = m + n - 1;
	while (src >=0 && des >=0) {
		//nums2元素大于nums1元素
		if (nums2[src] > nums1[des]) {
			nums1[back--] = nums2[src--];
		}
		//nums2元素小于nums元素
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