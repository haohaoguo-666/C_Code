#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////while
//条件初始化
//while (条件判定) {
//	//业务更新
//	条件更新
//}
//
//
////for
//for (条件初始化; 条件判定; 条件更新) {
//	//业务代码
//}
//
//
////do while
//条件初始化
//do {
//	条件更新
//} while (条件判定);

//while (1) {
//
//} 
//
//for (;;) {
//
//} 
//
//do{
//
//}while (1);

//int main()
//{
//	char a = 0xFF;
//	if (a == -1)
//		printf("signed");
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		int c = getchar();
//		if ('#' == c)
//		{
//			// break; // 跳出循环
//			continue; // 结束本次（一次）循环
//		}
//		putchar(c);
//	}
//	printf("\nbreak out!\n");
//	return 0;
//}


//int main()
//{
//	void a;
//	system("pause");
//	return 0;
//} 
//在vs2013和Centos 7，gcc 4.8.5下都不能编译通过


//test() // 忘记了返回值？ 使用默认？
//{
//	printf("hello test\n");
//	return 1;
//}
//int main()
//{
//	int a = test();
//}

//在vs2013中
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//	void* p = NULL;
//	p++; //报错
//	p += 1; //报错
//	system("pause");
//	return 0;
//} 
////在gcc4.8.5中
//#include <stdio.h>
//int main()
//{
//	void* p = NULL; //NULL在数值层面，就是0
//	p++; //能通过
//	printf("%d\n", p); //输出1
//	p += 1; //能通过
//	printf("%d\n", p); //输出2
//	return 0;
//}