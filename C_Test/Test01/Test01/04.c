//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//
//
//Ҫ��ʱ�临�Ӷ�С��O(N);
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	int arr[4][4] = { {1,5,7,9},{4,6,10,15},{8,11,12,19},{14,16,18,21} };
//	int i = 0;
//	int j = 3;
//	int figure;
//	scanf("%d", &figure);
//	for (i = 0, j = 3; i <= 3 && j >= 0;) {
//		if (arr[i][j] == figure) {
//			printf("�����ڵ�%d ��,��%d ��", i+1, j+1);
//			break;
//		}
//		else if (arr[i][j] < figure) {
//			i++;
//		}else{
//			j--;
//		}
//	}
//	if (i  > 3 || j < 0) {
//		printf("û�ҵ�������");
//	}
//}