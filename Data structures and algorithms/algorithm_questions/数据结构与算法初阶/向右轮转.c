////����һ�����飬�������е�Ԫ��������ת k ��λ�ã����� k �ǷǸ�����
////
////
////
////ʾ�� 1:
////
////����: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
////��� : [5, 6, 7, 1, 2, 3, 4]
////���� :
////	������ת 1 �� : [7, 1, 2, 3, 4, 5, 6]
////	������ת 2 �� : [6, 7, 1, 2, 3, 4, 5]
////	������ת 3 �� : [5, 6, 7, 1, 2, 3, 4]
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
////˼·1
////void rotate(int* nums, int numsSize, int k) {
////    int number = k;
////    
////    for (int j = 0; j < number; j++) {
////        //ȡ���һ��Ԫ�ص�temp
////        int temp = *(nums + numsSize - 1);
////        //��Ԫ�ص������ڶ���Ԫ���������
////        for (int i = numsSize - 1; i > 0; i--) {
////            *(nums + i) = *(nums + i - 1);
////        }
////        //��Ԫ�ص�ַ����temp
////        *(nums) = temp;
////    }
////}
//
//
////˼·2
////��ʽ1
//void rotate(int* nums, int numsSize, int k) {
//
//    int ptr[numsSize];
//    int* start = ptr;
//    int number = numsSize - k % numsSize;
//    int n = 0;
//    //��k��������ǰ��
//    for (int i = number; i < numsSize; i++) {
//        ptr[n] = nums[i];
//        n++;
//    }
//    //ǰn-k������������
//    for (int i = 0; i < number; i++) {
//        ptr[n] = nums[i];
//        n++;
//    }
//    for (int i = 0; i < numsSize; i++) {
//        nums[i] = ptr[i];
//    }
//
//}
////��ʽ2
//void rotate(int* nums, int numsSize, int k) {
//    int* ptr = (int*)malloc(sizeof(int) * numsSize);
//    int* start = ptr;
//    int number = numsSize - k % numsSize;
//    //����k��������ǰ��
//    for (int i = number; i < numsSize; i++) {
//        *ptr++ = nums[i];
//    }
//    //ǰn-k������������
//    for (int i = 0; i < number; i++) {
//        *ptr++ = nums[i];
//    }
//    for (int i = 0; i < numsSize; i++) {
//        nums[i] = start[i];
//    }
//}
//
////˼·3
////�������÷�
//
////��begin��end��������
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
//    //��0��n-k-1����
//    reverse(nums, 0, numsSize - k % numsSize - 1);
//    //��n-k��numsSize-1����
//    reverse(nums, numsSize - k % numsSize, numsSize - 1);
//    //��0��numsSize-1����
//    reverse(nums, 0, numsSize - 1);
//}