#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	char c[4][3] = { 0 };
//	char* p = c;// c��Ԫ�أ�һ������ char[3])�ĵ�ַ //���Ͳ�ͬ
//
//	printf("%p\n", &c);
//	printf("%p\n", &c + 1);
//
//	printf("%p\n", c);
//	printf("%p\n", c + 1);
//
//	printf("%p\n", &c[0][0]);
//	printf("%p\n", &c[0][0] + 1);
//
//}


//int main()
//{
//	char a[3][4] = { 0 };
//	char* p = (char*)a;
//	for (int i = 0; i < 3 * 4; i++) 
//	{
//		//printf("%p\n", &p[i]);
//		printf("%p\n", p + i);
//	}
//	//�����Ա�
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("a[%d][%d] : %p\n", i, j, &a[i][j]);
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a)); //�������� 48
//	printf("%d\n", sizeof(a[0][0])); //������Ԫ�ص���Ԫ�� - ���ͱ��� 4
//	printf("%d\n", sizeof(a[0])); //������Ԫ�� - ���� 16
//	printf("%d\n", sizeof(a[0] + 1)); //������Ԫ�صĵڶ���Ԫ�صĵ�ַ - ���ͱ����ĵ�ַ 4
//	printf("%d\n", sizeof(*(a[0] + 1))); //������Ԫ�صĵڶ���Ԫ�� - ���ͱ��� 4��
//	printf("%d\n", sizeof(a + 1)); //����ڶ���Ԫ�صĵ�ַ - ����ĵ�ַ 4
//	printf("%d\n", sizeof(*(a + 1))); //����ڶ���Ԫ�� - ���� 16
//	printf("%d\n", sizeof(&a[0] + 1)); //����ڶ���Ԫ�صĵ�ַ - ����ĵ�ַ 4
//	printf("%d\n", sizeof(*(&a[0] + 1))); //����ڶ���Ԫ�� - ���� 16
//	printf("%d\n", sizeof(*a)); //�������Ԫ�� 16
//	printf("%d\n", sizeof(a[3])); //����ĵ��ĸ�Ԫ�� 16
//}

//int main()
//{
//	//����[]�е����֣�Ҳ�����͵�һ����
//	int a[5][5];
//	int(*p)[4];//����ָ�룬���ʡ����顱Ҳ��һ�����ͣ�
//	p = a;//int(*)[5]
//	printf("a_ptr = %p, p_ptr = %p\n", &a[4][2], &p[4][2]);
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//ָ�����������ָ��֮����������Ԫ�صĸ���
//}

//sizeof()���ַ
//int main()
//{
//	int arr[4] = { 0 };
//	int (*p)[4] = &arr;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(&arr));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(0x0053f718));
//
//}

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	p = 100; //ʲô��˼
//	*p = 100; //ʲô��˼
//	pp = 100; //ʲô��˼
//	*pp = 100; //ʲô��˼
//	**pp = 100; //ʲô��˼
//	system("pause");
//	return 0;
//}

//һά���鴫��
//void show(int a[10])
//{
//	//��ά��������һ��ָ���������ά��ָ�����ڲ�Ԫ�����͵�ָ�룬��Ԫ�صĵ�ַ
//	//��ά�������˵��ú����ĳɱ�
//	printf("show:%d\n", sizeof(a));
//
//	printf("show:%p\n", a);
//
//	printf("show:%p\n", &a);
//}
//
//int main()
//{
//	int a[10];
//	printf("main:%d\n", sizeof(a));
//
//	show(a);//���������Ԫ�صĵ�ַ
//
//	printf("main:%p\n", a);
//
//	system("pause");
//	return 0;
//}



 
//#define N 100
//
//void GetStr(char* pp)
//{
//	pp = malloc(sizeof(char) * N);
//	if (NULL != pp)
//	{
//		strcpy(pp, "hello");
//	}
//	else
//	{
//		//do nothing!
//	}
//}
//
//int main()
//{
//	char* p = NULL;
//	GetStr(&p);
//
//	printf("%s\n", p);
//}

//void show(char a[3][4])
//{
//	printf("show:%d\n", sizeof(a));
//}
//
//int main()
//{
//	char a[3][4] = { 0 };
//	printf("main:%d\n", sizeof(a));
//	show(a);
//	system("pause");
//	return 0;
//}
//
//void show(char a[3][4])
//{
//	printf("show: %d\n", sizeof(a));
//} 
//int main()
//{
//	char a[3][4] = { 0 };
//	printf("main: %d\n", sizeof(a));
//	show(10); //����д��
//	system("pause");
//	return 0;
//}