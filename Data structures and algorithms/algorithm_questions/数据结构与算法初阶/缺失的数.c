//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
//
//注意：本题相对书上原题稍作改动
//
//示例 1：
//
//输入：[3, 0, 1]
//输出：2

//思路一
//求和相减
#define _CRT_SECURE_NO_WARNINGS 1

int missingNumber(int* nums, int numsSize) {
    int i = 0;
    int sum = 0;
    for (i = 0; i < numsSize; i++) {
        sum += *(nums + i);
    }
    return (numsSize + 1) * (numsSize + 0) / 2 - sum;
}

//思路二
//异或
//int missingNumber(int* nums, int numsSize) {
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < numsSize; i++) {
//        sum = sum ^ *(nums + i);
//    }
//    for (i = 0; i <= numsSize; i++) {
//        sum = sum ^ i;
//    }
//    return sum;
//
//}