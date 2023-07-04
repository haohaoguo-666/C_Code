#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>
//int main()
//{
//	int a = 10;
//
//	a = 20; // 使用的是a的空间：左值
//
//	int b = a; // 使用的是a的内容：右值
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	// 指针就是地址
//	// 指针变量的本质就是变量，然后里面保存的是地址（指针）值
//	// 指针变量：空间（左值）+内容（右值：地址）
//	p = (int*)0x1234;// p变量的空间：左值
//	int* q = p;      // p变量的内容：右值，就是0x1234
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int b = *p;
//	*p = 20;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;//假设a变量的地址是0x12345678，那么访问a变量，还可以直接通过指针方式进行访问
//	printf("%d\n", *(int*)0x12345678); //本质是一种直接寻址的方式
//	*(int*)0x12345678 = 100; //本质是一种直接寻址的方式
//	//所以，C语言通过 int*p = &a;这种指针变量的方式，访问目标数据有什么好处呢？
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	p = (int*)&p;
//	*p = 10;
//	p = 20;
//	system("pause");
//	return 0;
//}