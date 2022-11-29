////给你一个数组，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
////
////
////
////示例 1:
////
////输入: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
////输出 : [5, 6, 7, 1, 2, 3, 4]
////解释 :
////	向右轮转 1 步 : [7, 1, 2, 3, 4, 5, 6]
////	向右轮转 2 步 : [6, 7, 1, 2, 3, 4, 5]
////	向右轮转 3 步 : [5, 6, 7, 1, 2, 3, 4]
//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//
////int main() {
////    int arr[7] = { 1,2,3,4,5,6,7 };
////    rotate(arr,7,1);
////}
//
//
////思路1
////void rotate(int* nums, int numsSize, int k) {
////    int number = k;
////    
////    for (int j = 0; j < number; j++) {
////        //取最后一个元素到temp
////        int temp = *(nums + numsSize - 1);
////        //首元素到倒数第二个元素整体后移
////        for (int i = numsSize - 1; i > 0; i--) {
////            *(nums + i) = *(nums + i - 1);
////        }
////        //首元素地址放入temp
////        *(nums) = temp;
////    }
////}
//
//
////思路2
////形式1
//void rotate(int* nums, int numsSize, int k) {
//
//    int ptr[numsSize];
//    int* start = ptr;
//    int number = numsSize - k % numsSize;
//    int n = 0;
//    //后k个拷贝到前面
//    for (int i = number; i < numsSize; i++) {
//        ptr[n] = nums[i];
//        n++;
//    }
//    //前n-k个拷贝到后面
//    for (int i = 0; i < number; i++) {
//        ptr[n] = nums[i];
//        n++;
//    }
//    for (int i = 0; i < numsSize; i++) {
//        nums[i] = ptr[i];
//    }
//
//}
////形式2
//void rotate(int* nums, int numsSize, int k) {
//    int* ptr = (int*)malloc(sizeof(int) * numsSize);
//    int* start = ptr;
//    int number = numsSize - k % numsSize;
//    //后面k个拷贝到前面
//    for (int i = number; i < numsSize; i++) {
//        *ptr++ = nums[i];
//    }
//    //前n-k个拷贝到后面
//    for (int i = 0; i < number; i++) {
//        *ptr++ = nums[i];
//    }
//    for (int i = 0; i < numsSize; i++) {
//        nums[i] = start[i];
//    }
//}
//
////思路3
////三段逆置法
//
////将begin到end进行逆置
//void reverse(int* num, int begin, int end) {
//    while (begin < end) {
//        int temp = num[begin];
//        num[begin] = num[end];
//        num[end] = temp;
//        begin++;
//        end--;
//    }
//}
//
//void rotate(int* nums, int numsSize, int k) {
//    //将0到n-k-1逆置
//    reverse(nums, 0, numsSize - k % numsSize - 1);
//    //将n-k到numsSize-1逆置
//    reverse(nums, numsSize - k % numsSize, numsSize - 1);
//    //将0到numsSize-1逆置
//    reverse(nums, 0, numsSize - 1);
//}