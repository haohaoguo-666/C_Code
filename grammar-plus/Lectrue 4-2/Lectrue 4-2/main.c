#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include <windows.h> 
//int main()
//{
//	char* c = NULL;
//	short* s = NULL;
//	int* i = NULL;
//	double* d = NULL;
//	printf("%d\n", c);
//	printf("%d\n\n", c + 1);
//
//	printf("%d\n", s);
//	printf("%d\n\n", s + 1);
//
//	printf("%d\n", i);
//	printf("%d\n\n", i + 1);
//
//	printf("%d\n", d);
//	printf("%d\n\n", d + 1);
//	system("pause");
//	return 0;
//}

//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	printf("%p\n", &arr[0]); //��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0] + 1); //�ڶ���Ԫ�صĵ�ַ
//	printf("%p\n", &arr); //����ĵ�ַ
//	printf("%p\n", &arr + 1); //��һ������ĵ�ַ
//	system("pause");
//	return 0;
//}

//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	char* p = arr;
//	system("pause");
//	return 0;
//}

//#define N 10
//int main()
//{
//	int arr[N] = { 0 };
//	arr = { 1, 2, 3, 4, 5 };
//	system("pause");
//	return 0;
//}

//#include <string.h>

//#define N 10
//int main()
//{
//	char* str = "abcdef"; //strָ�������ջ�ϱ��棬��abcdef�����ַ������������ɱ��޸�
//	char arr[] = "abcdef"; //�������鶼��ջ�ϱ��棬���Ա��޸ģ��ⲿ�ֿ��Ծֲ�����һ��
//	////1. ��ָ�����ʽ����ָ������±����ʽ����ָ��
//	printf("��ָ�����ʽ����ָ������±����ʽ����ָ��\n");
//	int len = strlen(str);
//	for (int i = 0; i < len; i++) {
//		printf("%c\t", *(str + i));
//		printf("%c \n", str[i]);
//	} 
//	printf("\n");
//	//2. ��ָ�����ʽ������������±����ʽ��������
//	printf("��ָ�����ʽ������������±����ʽ��������\n");
//	len = strlen(arr);
//	for (int i = 0; i < len; i++) {
//		printf("%c\t", *(arr + i));
//		printf("%c \n", arr[i]);
//	} 
//	printf("\n");
//	system("pause");
//	return 0;
//}

//void InitArr(int* arr, int n)
//{
//	for (int i = 0; i < n; i++) {
//		*(arr + i) = i; //������ֻ����ָ�����ʽ����
//	}
//}
//
//int main()
//{
//	int arr[N];
//	InitArr(arr, N);
//	for (int i = 0; i < N; i++) {
//		printf("%d\n", arr[i]); //���������ʽ����
//	} 
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));
//	system("pause");
//	return 0;
//}


int main()
{
	char a[5] = { 'A','B','C','D' };
	char(*p3)[3] = &a;
	char(*p4)[3] = a;
	return 0;
}
