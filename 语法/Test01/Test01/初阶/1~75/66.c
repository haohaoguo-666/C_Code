//����
//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), ������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//
//���磺
//
//655 = 6 * 55 + 65 * 5
//
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//
//��� 5λ���е����� Lily Number��
//
//����������
//��
//���������
//һ�У�5λ���е����� Lily Number��ÿ������֮����һ���ո�
#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//int shuixianhua(int n) {
//	int i = 10;
//	int j = 1;
//	for (j = 1; j <= 4; j++) {
//		n -= ((int)(n / (int)pow(10, i)) * (n % (int)pow(10, i)));
//	}
//	return n;
//}
//int main() {
//	int i = 10000;
//	for (i = 10000; i <= 99999; i++) {
//		if (0==shuixianhua(i)) {
//			printf("%d ", i);
//		}
//	}
//
//}
//#include <stdio.h>
//
//int main()
//{
//    int n = 10000;
//    for (n = 10000; n < 100000; n++) {
//        if (n == ((n / 10000) * (n % 10000) + (n / 1000) * (n % 1000) + (n / 100) * (n % 100) + (n / 10) * (n % 10))) {
//            printf("%d ", n);
//        }
//    }
//    return 0;
//}