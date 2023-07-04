#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int a, b, c;

//int main()
//{
//	a = 0;
//	b = 0;
//	c = 0;
//	if (++a == 2 ||( ++b == 1 && ++c == 1))
//	{
//		printf("hello world\n");
//	}
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//}


//int show()
//{
//	return 1;
//}


//int main()
//{
//	int flag = 0;
//	printf("please Enter:");
//	scanf("%d", &flag);
//	flag && show(); // if语句
//	flag || show(); // if not语句
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	if ((++i < 0) && (++j > 0)) {
//		printf("enter if!\n");
//	} 
//	printf("%d, %d\n", i, j); //1, 1
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	if ((++i > 0) || (++j > 0)) { //注意更改条件
//		printf("enter if!\n");
//	} 
//	printf("%d, %d\n", i, j); // 1, 0
//	system("pause");
//	return 0;
//}

//int a = -1;

//int main()
//{
//	printf("%x", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", 2 | 3); //什么意思？
//	printf("%d\n", 2 & 3); //什么意思？
//	printf("%d\n", 2 ^ 3); //什么意思？
//	printf("%d\n", ~0); //什么意思？
//	system("pause");
//	return 0;
//}

//交换两个整数
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	int x = 10;
//	int y = 20;
//	printf("before: %d,%d\n", x, y);
//	x = x ^ y;
//	y = x ^ y;
//	x = x ^ y;
//	printf("after: %d,%d\n", x, y);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 9999999999999999999;
//	int b = 9999999999999999999;
//	int c = 9999999999999999999;
//	printf("%d", a + b + c);
//	return 0;
//}

//#define SETBIT(x, n) ((x) |= (1<<(n-1))) //指定比特位置为1
//void ShowBits(int x)
//{
//	int num = sizeof(x) * 8 - 1;
//	while (num >= 0) {
//		if (x & (1 << num)) {
//			printf("1 ");
//		} else{
//			printf("0 ");
//		} num--;
//	} printf("\n");
//} 
//int main()
//{
//	int x = 0;
//	SETBIT(x, 5);
//	ShowBits(x);
//	system("pause");
//	return 0;
//}



//#define CLRBIT(x, n) ((x) &= (~(1<<(n-1)))) //将指定比特位置零
//void ShowBits(int x)
//{
//	int num = sizeof(x) * 8 - 1;
//	while (num >= 0) {
//		if (x & (1 << num)) {
//			printf("1 ");
//		} else{
//			printf("0 ");
//		} num--;
//	} printf("\n");
//} 
//int main()
//{
//	int x = 0xFF;
//	CLRBIT(x, 7);
//	ShowBits(x);
//	system("pause");
//	return 0;
//}

//先看现象
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	char c = 0;
//	printf("sizeof(c): %d\n", sizeof(c)); //1
//	printf("sizeof(c): %d\n", sizeof(~c)); //4
//	printf("sizeof(c): %d\n", sizeof(c << 1)); //4
//	printf("sizeof(c): %d\n", sizeof(c >> 1)); //4
//	system("pause");
//	return 0;
//}
//
//无论任何位运算符，目标都是要计算机进行计算的，而计算机中只有CPU具有运算能力(先这样简单理解)，但计算的数据，
//都在内存中。故，计算之前(无论任何运算), 都必须将数据从内存拿到CPU中，拿到CPU哪里呢？毫无疑问，在CPU 寄存器
//中。
//而寄存器本身，随着计算机位数的不同，寄存器的位数也不同。一般，在32位下，寄存器的位数是32位。
//可是，你的char类型数据，只有8比特位。读到寄存器中，只能填补低8位，那么高24位呢？
//就需要进行“整形提升”。

//<< (左移) : 最高位丢弃，最低位补零
//>> (右移)：
//1. 无符号数：最低位丢弃, 最高位补零[逻辑右移]
//2. 有符号数：最低位丢弃，最高位补符号位[算术右移]
//<< 或者 >> 都是计算，都要在CPU中进行，可是参与移动的变量，是在内存中的。
//所以需要先把数据移动到CPU内寄存器中，在进行移动。
//那么，在实际移动的过程中，是在寄存器中进行的，即大小固定的单位内。那么，左移右移一定会有位置跑到"外边"的情况

//#define SETBIT(x, n) ((x) |= (1<<(n-1))) //指定比特位置为1
void ShowBits(int x)
{
	int num = sizeof(x) * 8 - 1;
	while (num >= 0) {
		if (x & (1 << num)) {
			printf("1 ");
		} else{
			printf("0 ");
		} num--;
	} printf("\n");
} 
//int main()
//{
//	unsigned char x = 1;
//	x = x >> 1;
//	ShowBits(x);
//	system("pause");
//	return 0;
//}

//测试demo
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	//左移
//	unsigned int a = 1;
//	printf("%u\n", a << 1);
//	printf("%u\n", a << 2);
//	printf("%u\n", a << 3);
//	//逻辑右移
//	unsigned int b = 100;
//	printf("%u\n", b >> 1);
//	printf("%u\n", b >> 2);
//	printf("%u\n", b >> 3);
//	//算术右移，最高位补符号位1， 虽然移出了最低位1，但是补得还是1
//	int c = -1;
//	printf("%d\n", c >> 1);
//	printf("%d\n", c >> 2);
//	printf("%d\n", c >> 3);
//	//是算术右移，还是逻辑右移?最高位补0，为何？
//	unsigned int d = -1;
//	printf("%d\n", d >> 1);
//	printf("%d\n", d >> 2);
//	printf("%d\n", d >> 3);
//	system("pause");
//	return 0;
//} 
//结论：
//左移，无脑补0
//右移，先判定是算术右移还是逻辑右移，判定依据：看自身类型，和变量的内容无关。


int main()
{
	unsigned int d = -1;
	printf("%d\n", d >> 1);
	ShowBits(d >> 1);
	printf("%d\n", d >> 2);
	ShowBits(d >> 2);
	printf("%d\n", d >> 3);
	ShowBits(d >> 3);
}