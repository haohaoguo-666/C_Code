#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////���������������в�ͬλ�ĸ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++) {
//		if ((a & 1 << i )!=( b & 1 << i)) {
//			count++;
//		}
//	}
//	printf("%d", count);
//
//	return 0;
//}
//��ʾ����λ��ż��λ������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	printf("����λ:");
//	for(i = 30; i >= 0; i -= 2)
//	{
//		printf("%d", a >> i & 1);
//	}
//	printf("\n");
//	printf("ż��λ:");
//	for(i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", a >> i & 1);
//	}
//	printf("\n");
//
//	return 0;
//	
//}


//ͳ�ƶ�������1�ĸ���
//void number1(int a)
//{
//	int i = 0;
//	int conut = 0;
//	for (i = 0; i <= 31; i++)
//	{
//		if (a & (1 << i)) {
//			conut++;
//		}
//	}
//
//	printf("%d", conut);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	number1(a);
//
//	return 0;
//}

//����������������������ʱ������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������: a = %d b = %d", a, b);
//
//	return 0;
//}

 //X��ͼ��
	// int main()
 //{
	// int n = 0;
	// int i = 0;
	// int j = 0;
	// while (scanf("%d", &n) != EOF) {
	//	 for (i = 1; i <= n; i++)
	//	 {
	//		 for (j = 1; j <= n; j++)
	//		 {
	//			 if (j == i || j == (n + 1) - i) {
	//				 printf("*");
	//			 }
	//			 else {
	//				 printf(" ");
	//			 }
	//		 }
	//		 printf("\n");
	//	 }
	// }

	// return 0;
 //}

//����·�����
//int main()
//{
//	int year = 0;
//	int mouth = 0;
//	
//	
//	while (scanf("%d %d", &year, &mouth) != EOF) {
//		switch (mouth)
//		{
//		case 1:
//			printf("%d\n", 31);
//			break;
//		case 2:
//			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//				printf("%d\n", 29);
//			}
//			else {
//				printf("%d\n", 28);
//			}
//			break;
//		case 3:
//			printf("%d\n", 31);
//			break;
//		case 4:
//			printf("%d\n", 30);
//			break;
//		case 5:
//			printf("%d\n", 31);
//			break;
//		case 6:
//			printf("%d\n", 30);
//			break;
//		case 7:
//			printf("%d\n", 31);
//			break;
//		case 8:
//			printf("%d\n", 31);
//			break;
//		case 9:
//			printf("%d\n", 30);
//			break;
//		case 10:
//			printf("%d\n", 31);
//			break;
//		case 11:
//			printf("%d\n", 30);
//			break;
//		case 12:
//			printf("%d\n", 31);
//			break;
//
//
//		}
//	}
//	
//
//	return 0;
//
//}

//�������ж�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//		if ((a + b) > c && (a + c) > b && (b + c) > a){
//			if (a == b && a == c) {
//				printf("Equilateral triangle!\n");
//			}
//			else if(a == b || b == c || c==a) {
//				printf("Isosceles triangle!\n");
//			}
//			else {
//				printf("Ordinary triangle!\n");
//			}
//		}else{
//			printf("Not a triangle!\n");
//		}
//			
//	}
//	return 0;
//}
//ͳ�ƶ�������1�ĸ���
int NumberOf1(int n) {
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++) {
		if (((n >> i) & 1) == 1) {
			count++;
		}
	}
	return count;
}
int NumberOf2(int n) {
	int i = 0;
	int count = 0;
	while (n) {
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", NumberOf1(n));

	return 0;
}