//����
//����һ���������У��ж��Ƿ����������У�����ָ�����е�������С����������ߴӴ�С����(��ͬԪ��Ҳ��Ϊ����)��
//
//���ݷ�Χ�� 3 \le n \le 50 \3��n��50  �����е�ֵ������ 1 \le val \le 100 \1��val��100
//����������
//��һ������һ������N(3��N��50)��
//�ڶ�������N���������ÿո�ָ�N��������
//���������
//���Ϊһ�У���������������sorted���������unsorted��
//ʾ��1
//���룺
//5
//1 6 9 22 30
//
//�����
//sorted
//
//ʾ��2
//���룺
//5
//3 4 7 2 10
//
//�����
//unsorted

#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main() {
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &n);
//	scanf("%d", &a);
//	scanf("%d", &b);
//	if (a >= b) {
//		while (n) {
//			a = b;
//			scanf("%d", &b);
//			if (b <= a) {
//				n--;
//			}
//			else {
//				printf("unsorted");
//				break;
//			}
//
//		}
//	}
//	else if (a <= b) {
//		while (n) {
//			a = b;
//			scanf("%d", &b);
//			if (b >= a) {
//				n--;
//			}
//			else {
//				printf("unsorted");
//				break;
//			}
//
//		}
//	}
//	if (n == 0) {
//		printf("sorted");
//	}
//	
//}