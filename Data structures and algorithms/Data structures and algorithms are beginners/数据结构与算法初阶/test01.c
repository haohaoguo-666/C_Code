//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
//
//ע�⣺�����������ԭ�������Ķ�
//
//ʾ�� 1��
//
//���룺[3, 0, 1]
//�����2


#define _CRT_SECURE_NO_WARNINGS 1

int missingNumber(int* nums, int numsSize) {
    int i = 0;
    int sum = 0;
    for (i = 0; i < numsSize; i++) {
        sum += *(nums + i);
    }
    return (numsSize + 1) * (numsSize + 0) / 2 - sum;
}

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