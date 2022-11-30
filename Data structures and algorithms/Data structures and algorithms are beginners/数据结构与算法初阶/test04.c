//26. 删除有序数组中的重复项
//给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。
//
//由于在某些语言中不能改变数组的长度，所以必须将结果放在数组nums的第一部分。更规范地说，如果在删除重复项之后有 k 个元素，那么 nums 的前 k 个元素应该保存最终结果。
//
//将最终结果插入 nums 的前 k 个位置后返回 k 。
//
//不要使用额外的空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
#define _CRT_SECURE_NO_WARNINGS 1

//思路1
//找到一个重复元素就删除 时间：O(N^2) 空间：O(1)
//int removeDuplicates(int* nums, int numsSize) {
//	int length = numsSize;
//	//查找重复元素
//	int i = 0;
//	for (i = 0; i < length-1;) {
//		//是否与后一个数相同
//		if (nums[i] == nums[i + 1]) {
//			//整体前移动
//			int j = i;
//			for (; j < length-1; j++) {
//				nums[j] = nums[j + 1];
//			}
//			length--;
//		}
//		else {
//			i++;
//		}
//	}
//	return length;
//}
//
////思路2
////双指针 时间：O(N) 空间：O(1)
//int removeDuplicates(int* nums, int numsSize) {
//		int src = 0;
//		int des = 0;
//		int newLength = 1;
//		while (src < numsSize) {
//			//找到重复元素
//			if (nums[src] == nums[des]) {
//				//下一个元素
//				src++;
//			}
//			//不是重复元素
//			else {
//				//存入元素
//				nums[++des] = nums[src++];
//				newLength++;
//			}
//		}
//		return newLength;
//}