//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "test.h"
//
//int main()
//{
// //   //sizeof�ؼ��֣���������,���ض����Ϳ��ٵĿռ�Ĵ�С����λ�ֽ�
// //   printf("%d\n", sizeof(char)); //1
// //   printf("%d\n", sizeof(short)); //2
// //   printf("%d\n", sizeof(int)); //4
// //   printf("%d\n", sizeof(long)); //4
// //   printf("%d\n", sizeof(long long)); //8
// //   printf("%d\n", sizeof(float)); //4
// //   printf("%d\n", sizeof(double)); //8
//	//system("pause");
//	//return 0;
//	int a = 10;
//	// Դ�룬���룬����
//	// �κ������ڼ�����У������뱻ת���ɶ����ƣ�Ϊʲô�������ֻ��ʶ������
//	// ����λ��0��1�� + ����λ
//	// �з�������������ԭ��=����=����
//	// 0000 0000 0000 0000 0000 0000 0000 1010
//	// 0x0  0    0    0    0    0    0    A
//	int b = -20;
//	// �з������Ҹ���
//	// 1000 0000 0000 0000 0000 0000 0001 0100 ԭ��
//	// 1111 1111 1111 1111 1111 1111 1110 1011 ����
//	// 1111 1111 1111 1111 1111 1111 1110 1100 ����
//	// 0xF  F    F    F    F    F    E    C
//
//	// ����1��
//	// ����һ��
//	// 1111 1111 1111 1111 1111 1111 1110 1100 ����
//	// 1111 1111 1111 1111 1111 1111 1110 1011 ����
//	// 1000 0000 0000 0000 0000 0000 0001 0100 ԭ��
//	// �������������Ӳ����ɣ�ԭ��<=>����<=>����
//	// ����ʹ��һ��Ӳ����·�����ת��
//	// 1111 1111 1111 1111 1111 1111 1110 1100 ����
//	// 1000 0000 0000 0000 0000 0000 0001 0011 ȡ��
//	// 1000 0000 0000 0000 0000 0000 0001 0100 +1
//
//	// ����2:���ʹ洢�ı���
//	// unsigned int a = 10;
//	unsigned int b = -10;
//	printf("%d\n", b);// signed int
//	printf("%u\n", b);// unsigned int
//	// ����������ҳ�ʼ�������пռ䣬�������ݣ�������ת���ɶ����ƣ��ռ��ǲ��������ݵ�
//	// ���ִ������Ͳ������壡
//	// �������͵����壺���ڶ�ȡ��ʱ�򣬾������壬���;�������ν��Ϳռ��ڲ�����Ķ���������
//
//	// ����λ�������
//
//	// �޷�����
//	// û�з���λ && ԭ��=����=����
//	// ֱ�Ӵ�
//}

//code1
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	//char a[1000];
	//int i;
	//for (i = 0; i < 1000; i++)
	//{
	//	a[i] = -1 - i;
	//}
	//printf("%d", strlen(a)); //strlen���ܣ��ַ�����ʶ��\0����ʶ
	//return 0;
	int a = 1;
	char* p = &a;
	printf("%d", *p);
	return 0;
}