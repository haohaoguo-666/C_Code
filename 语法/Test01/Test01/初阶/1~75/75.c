//���⣺�����ַ��� | ʱ�����ƣ�1�� | �ڴ����ƣ�32768K | �������ƣ� ����
//�������ַ�������һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing.�����������Ϊ��beijing.like I
//����������
//ÿ�������������1������������ I like beijing.�����������Ȳ�����100
//���������
//�����������֮����ַ���, �Կո�ָ�
//ʾ��1��
//����
//I like beijing.
//���
//beijing.like I
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//void convert(char* str, int length) {
//	int right = length-1;
//	int i = length - 1;
//	for (; i >= 0; i--) {
//		if (*(str + i) == ' ') {
//			int j = i + 1;
//			for (; j <= right; j++) {
//				printf("%c", *(str + j));
//			}
//			printf(" ");
//			right = i-1;
//		}
//
//		else if(i == 0) {
//			int j = i;
//			for (; j <= right; j++) {
//				printf("%c", *(str + j));
//			}
//		}
//		
//	}
//
//}
//int main() {
//
//	char input[100];
//	int len = 0;
//	do
//	{
//		scanf("%c", &input[len]);
//		if (input[len] == '\n')
//		{
//			input[len] = '\0';
//			break;
//		}
//		len++;
//	} while (1);
//	int length = strlen(input);
//	convert(input, length);
//
//}