//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "test.h"
//
//int main()
//{
// //   //sizeof关键字（操作符）,求特定类型开辟的空间的大小，单位字节
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
//	// 源码，反码，补码
//	// 任何数据在计算机中，都必须被转化成二进制，为什么？计算机只认识二进制
//	// 符号位（0，1） + 数据位
//	// 有符号数且正数，原码=反码=补码
//	// 0000 0000 0000 0000 0000 0000 0000 1010
//	// 0x0  0    0    0    0    0    0    A
//	int b = -20;
//	// 有符号数且负数
//	// 1000 0000 0000 0000 0000 0000 0001 0100 原码
//	// 1111 1111 1111 1111 1111 1111 1110 1011 反码
//	// 1111 1111 1111 1111 1111 1111 1110 1100 补码
//	// 0xF  F    F    F    F    F    E    C
//
//	// 补充1：
//	// 方法一：
//	// 1111 1111 1111 1111 1111 1111 1110 1100 补码
//	// 1111 1111 1111 1111 1111 1111 1110 1011 反码
//	// 1000 0000 0000 0000 0000 0000 0001 0100 原码
//	// 方法二：计算机硬件完成，原码<=>反码<=>补码
//	// 可以使用一条硬件电路，完成转化
//	// 1111 1111 1111 1111 1111 1111 1110 1100 补码
//	// 1000 0000 0000 0000 0000 0000 0001 0011 取反
//	// 1000 0000 0000 0000 0000 0000 0001 0100 +1
//
//	// 补充2:整型存储的本质
//	// unsigned int a = 10;
//	unsigned int b = -10;
//	printf("%d\n", b);// signed int
//	printf("%u\n", b);// unsigned int
//	// 定义变量并且初始化，先有空间，再有内容，将内容转化成二进制，空间是不关心内容的
//	// 数字带上类型才有意义！
//	// 变量类型的意义：是在读取的时候，具有意义，类型决定了如何解释空间内部保存的二进制序列
//
//	// 符号位参与计算
//
//	// 无符号数
//	// 没有符号位 && 原码=反码=补码
//	// 直接存
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
	//printf("%d", strlen(a)); //strlen介绍，字符串认识，\0的认识
	//return 0;
	int a = 1;
	char* p = &a;
	printf("%d", *p);
	return 0;
}