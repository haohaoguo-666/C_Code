#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
//int main()
//{
//	char c[4][3] = { 0 };
//	char* p = c;// c首元素（一个数组 char[3])的地址 //类型不同
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
//	//用来对比
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
//	printf("%d\n", sizeof(a)); //整个数组 48
//	printf("%d\n", sizeof(a[0][0])); //数组首元素的首元素 - 整型变量 4
//	printf("%d\n", sizeof(a[0])); //数组首元素 - 数组 16
//	printf("%d\n", sizeof(a[0] + 1)); //数组首元素的第二个元素的地址 - 整型变量的地址 4
//	printf("%d\n", sizeof(*(a[0] + 1))); //数组首元素的第二个元素 - 整型变量 4；
//	printf("%d\n", sizeof(a + 1)); //数组第二个元素的地址 - 数组的地址 4
//	printf("%d\n", sizeof(*(a + 1))); //数组第二个元素 - 数组 16
//	printf("%d\n", sizeof(&a[0] + 1)); //数组第二个元素的地址 - 数组的地址 4
//	printf("%d\n", sizeof(*(&a[0] + 1))); //数组第二个元素 - 数组 16
//	printf("%d\n", sizeof(*a)); //数组的首元素 16
//	printf("%d\n", sizeof(a[3])); //数组的第四个元素 16
//}

//int main()
//{
//	//数组[]中的数字，也是类型的一部分
//	int a[5][5];
//	int(*p)[4];//数组指针，本质“数组”也是一种类型！
//	p = a;//int(*)[5]
//	printf("a_ptr = %p, p_ptr = %p\n", &a[4][2], &p[4][2]);
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//指针相减，代表指针之间所经历的元素的个数
//}

//sizeof()与地址
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
//	p = 100; //什么意思
//	*p = 100; //什么意思
//	pp = 100; //什么意思
//	*pp = 100; //什么意思
//	**pp = 100; //什么意思
//	system("pause");
//	return 0;
//}

//一维数组传参
//void show(int a[10])
//{
//	//降维：创建了一个指针变量，降维成指向其内部元素类型的指针，首元素的地址
//	//降维：减少了调用函数的成本
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
//	show(a);//传入的是首元素的地址
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
//	show(10); //故意写错
//	system("pause");
//	return 0;
//}