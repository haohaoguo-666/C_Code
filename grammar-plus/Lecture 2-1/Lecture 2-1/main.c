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
//	flag && show(); // if���
//	flag || show(); // if not���
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
//	if ((++i > 0) || (++j > 0)) { //ע���������
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
//	printf("%d\n", 2 | 3); //ʲô��˼��
//	printf("%d\n", 2 & 3); //ʲô��˼��
//	printf("%d\n", 2 ^ 3); //ʲô��˼��
//	printf("%d\n", ~0); //ʲô��˼��
//	system("pause");
//	return 0;
//}

//������������
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

//#define SETBIT(x, n) ((x) |= (1<<(n-1))) //ָ������λ��Ϊ1
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



//#define CLRBIT(x, n) ((x) &= (~(1<<(n-1)))) //��ָ������λ����
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

//�ȿ�����
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
//�����κ�λ�������Ŀ�궼��Ҫ��������м���ģ����������ֻ��CPU������������(�����������)������������ݣ�
//�����ڴ��С��ʣ�����֮ǰ(�����κ�����), �����뽫���ݴ��ڴ��õ�CPU�У��õ�CPU�����أ��������ʣ���CPU �Ĵ���
//�С�
//���Ĵ����������ż����λ���Ĳ�ͬ���Ĵ�����λ��Ҳ��ͬ��һ�㣬��32λ�£��Ĵ�����λ����32λ��
//���ǣ����char�������ݣ�ֻ��8����λ�������Ĵ����У�ֻ�����8λ����ô��24λ�أ�
//����Ҫ���С�������������

//<< (����) : ���λ���������λ����
//>> (����)��
//1. �޷����������λ����, ���λ����[�߼�����]
//2. �з����������λ���������λ������λ[��������]
//<< ���� >> ���Ǽ��㣬��Ҫ��CPU�н��У����ǲ����ƶ��ı����������ڴ��еġ�
//������Ҫ�Ȱ������ƶ���CPU�ڼĴ����У��ڽ����ƶ���
//��ô����ʵ���ƶ��Ĺ����У����ڼĴ����н��еģ�����С�̶��ĵ�λ�ڡ���ô����������һ������λ���ܵ�"���"�����

//#define SETBIT(x, n) ((x) |= (1<<(n-1))) //ָ������λ��Ϊ1
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

//����demo
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	//����
//	unsigned int a = 1;
//	printf("%u\n", a << 1);
//	printf("%u\n", a << 2);
//	printf("%u\n", a << 3);
//	//�߼�����
//	unsigned int b = 100;
//	printf("%u\n", b >> 1);
//	printf("%u\n", b >> 2);
//	printf("%u\n", b >> 3);
//	//�������ƣ����λ������λ1�� ��Ȼ�Ƴ������λ1�����ǲ��û���1
//	int c = -1;
//	printf("%d\n", c >> 1);
//	printf("%d\n", c >> 2);
//	printf("%d\n", c >> 3);
//	//���������ƣ������߼�����?���λ��0��Ϊ�Σ�
//	unsigned int d = -1;
//	printf("%d\n", d >> 1);
//	printf("%d\n", d >> 2);
//	printf("%d\n", d >> 3);
//	system("pause");
//	return 0;
//} 
//���ۣ�
//���ƣ����Բ�0
//���ƣ����ж����������ƻ����߼����ƣ��ж����ݣ����������ͣ��ͱ����������޹ء�


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